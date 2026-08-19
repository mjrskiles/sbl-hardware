/**
 * @file sdmmc.hpp
 * @brief Bare-metal SDMMC1 driver for STM32H750
 *
 * Provides SD card initialization and block read/write via the native
 * SDMMC1 4-bit interface. Polling mode (no DMA/IRQ) for initial bringup.
 *
 * Pin assignments (Daisy Pod):
 *   PC8  = D0 (AF12)    PC9  = D1 (AF12)
 *   PC10 = D2 (AF12)    PC11 = D3 (AF12)
 *   PC12 = CK (AF12)    PD2  = CMD (AF12)
 *
 * NOTE: PC10/PC11 conflict with USART3 — debug UART unavailable when
 * SD card is in use on Daisy Pod. Use USB CDC for logging.
 *
 * Clock: PLL1Q = 48 MHz (configured in init.hpp)
 *   Identification mode: CLKDIV=60 → 400 kHz
 *   Data transfer mode:  CLKDIV=1  → 24 MHz
 *
 * Prerequisites: Call sbl::driver::init() then sbl::driver::init_sdmmc()
 * before using this driver.
 */

#ifndef SBL_HW_DRIVER_SDMMC_HPP_
#define SBL_HW_DRIVER_SDMMC_HPP_

#include <cstdint>
#include <sbl/hw/reg/sdmmc.hpp>
#include <sbl/hw/reg/rcc.hpp>

namespace sbl::driver {

class Sdmmc {
public:

    enum class Error : uint8_t {
        None = 0,
        Timeout,
        CrcFail,
        CommandError,
        CardNotReady,
        DataError,
        NoCard,
    };

    /**
     * @brief Initialize SD card via SDMMC1
     *
     * Performs the full SD card initialization sequence:
     *   Power on → CMD0 → CMD8 → ACMD41 loop → CMD2 → CMD3 → CMD7 → ACMD6
     *
     * After success, the card is selected, in 4-bit mode, and ready for
     * block read/write at 24 MHz.
     *
     * @return Error::None on success
     */
    static Error init() {
        using namespace sbl::hw::reg;
        auto* sd = periph::sdmmc1;

        // Power off first (clean state)
        sd->SDMMC_POWER = 0;
        delay_cycles(100'000);  // ~200us at 480MHz

        // Power on
        sd->SDMMC_POWER = 0x03;  // PWRCTRL = 11 (power on)
        delay_cycles(100'000);

        // Set identification mode clock: 48MHz / (2*60) = 400 kHz
        // Enable hardware flow control
        sd->SDMMC_CLKCR = (60u << SDMMC1::SDMMC_CLKCR_CLKDIV_Pos)
                         | SDMMC1::SDMMC_CLKCR_HWFC_EN;

        // Wait 74+ SD clock cycles at 400kHz (~200us)
        delay_cycles(200'000);

        // --- SD Card Initialization Sequence ---

        // CMD0: GO_IDLE_STATE (no response)
        Error err = send_command(0, 0, Response::None);
        if (err != Error::None) return err;

        // CMD8: SEND_IF_COND — voltage check + pattern 0xAA
        // Arg: [11:8]=VHS=0001 (2.7-3.6V), [7:0]=check pattern=0xAA
        err = send_command(8, 0x000001AA, Response::Short);
        if (err != Error::None) return Error::CardNotReady;

        // Verify CMD8 response: should echo back pattern
        uint32_t r7 = sd->SDMMC_RESP1R;
        if ((r7 & 0x1FF) != 0x1AA) return Error::CardNotReady;

        // ACMD41 loop: SD_SEND_OP_COND until card ready (bit 31 set)
        // Arg: HCS=1 (bit 30) to indicate we support SDHC/SDXC
        //      XPC=1 (bit 28) for max performance
        //      Voltage window: 3.2-3.4V (bit 20)
        constexpr uint32_t acmd41_arg = (1u << 30) | (1u << 28) | (1u << 20);
        s_card_sdhc = false;

        for (uint32_t attempt = 0; attempt < 1000; ++attempt) {
            // CMD55: APP_CMD (next command is application-specific)
            err = send_command(55, 0, Response::Short);
            if (err != Error::None) return err;

            // ACMD41: SD_SEND_OP_COND
            err = send_command(41, acmd41_arg, Response::Short);
            if (err != Error::None) return err;

            uint32_t ocr = sd->SDMMC_RESP1R;
            if (ocr & (1u << 31)) {
                // Card ready — check CCS (Card Capacity Status)
                s_card_sdhc = (ocr & (1u << 30)) != 0;
                break;
            }

            if (attempt == 999) return Error::CardNotReady;
            delay_cycles(500'000);  // ~1ms between attempts
        }

        // CMD2: ALL_SEND_CID (get card identification, long response)
        err = send_command(2, 0, Response::Long);
        if (err != Error::None) return err;

        // CMD3: SEND_RELATIVE_ADDR (get card's RCA)
        err = send_command(3, 0, Response::Short);
        if (err != Error::None) return err;
        s_rca = (sd->SDMMC_RESP1R >> 16) & 0xFFFF;

        // CMD7: SELECT_CARD (transition to Transfer state)
        err = send_command(7, static_cast<uint32_t>(s_rca) << 16, Response::Short);
        if (err != Error::None) return err;

        // Switch to 4-bit bus width
        // CMD55 + ACMD6: SET_BUS_WIDTH (arg=2 for 4-bit)
        err = send_command(55, static_cast<uint32_t>(s_rca) << 16, Response::Short);
        if (err != Error::None) return err;
        err = send_command(6, 2, Response::Short);
        if (err != Error::None) return err;

        // Update CLKCR: 4-bit bus, 24 MHz (CLKDIV=1 → 48/(2*1) = 24 MHz)
        sd->SDMMC_CLKCR = (1u << SDMMC1::SDMMC_CLKCR_CLKDIV_Pos)
                         | (1u << SDMMC1::SDMMC_CLKCR_WIDBUS_Pos)  // 01 = 4-bit
                         | SDMMC1::SDMMC_CLKCR_HWFC_EN;

        // Set block length to 512 for non-SDHC cards
        if (!s_card_sdhc) {
            err = send_command(16, 512, Response::Short);
            if (err != Error::None) return err;
        }

        s_initialized = true;
        return Error::None;
    }

    /**
     * @brief Read a single 512-byte block from the SD card (polling)
     *
     * @param block_addr Block address (byte address for SDSC, block address for SDHC)
     * @param buf Output buffer (must be at least 512 bytes)
     * @return Error::None on success
     */
    static Error read_block(uint32_t block_addr, uint8_t* buf) {
        if (!s_initialized) return Error::NoCard;
        using namespace sbl::hw::reg;
        auto* sd = periph::sdmmc1;

        // SDSC cards use byte addressing
        uint32_t addr = s_card_sdhc ? block_addr : (block_addr * 512);

        // Configure data path: 512 bytes, block size = 2^9, card-to-controller
        sd->SDMMC_DTIMER = 0xFFFFFFFF;  // Max timeout
        sd->SDMMC_DLENR = 512;
        sd->SDMMC_DCTRL = (9u << SDMMC1::SDMMC_DCTRL_DBLOCKSIZE_Pos)  // 2^9 = 512
                         | SDMMC1::SDMMC_DCTRL_DTDIR   // Card to controller
                         | SDMMC1::SDMMC_DCTRL_DTEN;    // Enable data transfer

        // CMD17: READ_SINGLE_BLOCK
        Error err = send_command(17, addr, Response::Short);
        if (err != Error::None) return err;

        // Read data from FIFO
        uint32_t count = 0;
        uint32_t* buf32 = reinterpret_cast<uint32_t*>(buf);
        constexpr uint32_t error_flags = SDMMC1::SDMMC_STAR_DCRCFAIL
                                       | SDMMC1::SDMMC_STAR_DTIMEOUT
                                       | SDMMC1::SDMMC_STAR_RXOVERR;

        while (count < 128) {  // 512 bytes / 4 = 128 words
            uint32_t sta = sd->SDMMC_STAR;
            if (sta & error_flags) {
                sd->SDMMC_ICR = 0xFFFFFFFF;  // Clear all flags
                return Error::DataError;
            }
            if (sta & SDMMC1::SDMMC_STAR_RXFIFOHF) {
                // FIFO half-full — read 8 words
                for (int i = 0; i < 8; ++i) {
                    buf32[count++] = sd->SDMMC_FIFOR;
                }
            }
        }

        // Wait for data transfer complete
        while (!(sd->SDMMC_STAR & SDMMC1::SDMMC_STAR_DATAEND)) {
            if (sd->SDMMC_STAR & error_flags) {
                sd->SDMMC_ICR = 0xFFFFFFFF;
                return Error::DataError;
            }
        }

        sd->SDMMC_ICR = 0xFFFFFFFF;  // Clear all flags
        return Error::None;
    }

    /**
     * @brief Write a single 512-byte block to the SD card (polling)
     *
     * @param block_addr Block address
     * @param buf Input buffer (must be at least 512 bytes)
     * @return Error::None on success
     */
    static Error write_block(uint32_t block_addr, const uint8_t* buf) {
        if (!s_initialized) return Error::NoCard;
        using namespace sbl::hw::reg;
        auto* sd = periph::sdmmc1;

        uint32_t addr = s_card_sdhc ? block_addr : (block_addr * 512);

        // CMD24: WRITE_BLOCK
        Error err = send_command(24, addr, Response::Short);
        if (err != Error::None) return err;

        // Configure data path: 512 bytes, block size = 2^9, controller-to-card
        sd->SDMMC_DTIMER = 0xFFFFFFFF;
        sd->SDMMC_DLENR = 512;
        sd->SDMMC_DCTRL = (9u << SDMMC1::SDMMC_DCTRL_DBLOCKSIZE_Pos)  // 2^9 = 512
                         | SDMMC1::SDMMC_DCTRL_DTEN;    // Enable (DTDIR=0 = controller-to-card)

        // Write data to FIFO
        uint32_t count = 0;
        const uint32_t* buf32 = reinterpret_cast<const uint32_t*>(buf);
        constexpr uint32_t error_flags = SDMMC1::SDMMC_STAR_DCRCFAIL
                                       | SDMMC1::SDMMC_STAR_DTIMEOUT
                                       | SDMMC1::SDMMC_STAR_TXUNDERR;

        while (count < 128) {
            uint32_t sta = sd->SDMMC_STAR;
            if (sta & error_flags) {
                sd->SDMMC_ICR = 0xFFFFFFFF;
                return Error::DataError;
            }
            if (sta & SDMMC1::SDMMC_STAR_TXFIFOHE) {
                // FIFO half-empty — write 8 words
                for (int i = 0; i < 8 && count < 128; ++i) {
                    sd->SDMMC_FIFOR = buf32[count++];
                }
            }
        }

        // Wait for data transfer complete
        while (!(sd->SDMMC_STAR & SDMMC1::SDMMC_STAR_DATAEND)) {
            if (sd->SDMMC_STAR & error_flags) {
                sd->SDMMC_ICR = 0xFFFFFFFF;
                return Error::DataError;
            }
        }

        // Wait for card programming to finish (DAT0 busy)
        while (sd->SDMMC_STAR & SDMMC1::SDMMC_STAR_BUSYD0) {}

        sd->SDMMC_ICR = 0xFFFFFFFF;
        return Error::None;
    }

    static bool initialized() { return s_initialized; }
    static bool is_sdhc() { return s_card_sdhc; }
    static uint16_t rca() { return s_rca; }

    static const char* error_string(Error err) {
        switch (err) {
            case Error::None:         return "OK";
            case Error::Timeout:      return "Command timeout";
            case Error::CrcFail:      return "CRC failure";
            case Error::CommandError: return "Command error";
            case Error::CardNotReady: return "Card not ready";
            case Error::DataError:    return "Data transfer error";
            case Error::NoCard:       return "No card initialized";
        }
        return "Unknown";
    }

private:
    enum class Response : uint8_t {
        None  = 0b00,   // No response expected
        Short = 0b01,   // 48-bit response (R1, R3, R6, R7)
        Long  = 0b11,   // 136-bit response (R2)
    };

    static Error send_command(uint8_t cmd_index, uint32_t arg, Response resp) {
        using namespace sbl::hw::reg;
        auto* sd = periph::sdmmc1;

        // Clear all status flags
        sd->SDMMC_ICR = 0xFFFFFFFF;

        // Set argument
        sd->SDMMC_ARGR = arg;

        // Build command register value
        uint32_t cmdr = (cmd_index & 0x3F)
                       | (static_cast<uint32_t>(resp) << SDMMC1::SDMMC_CMDR_WAITRESP_Pos)
                       | SDMMC1::SDMMC_CMDR_CPSMEN;  // Enable CPSM

        sd->SDMMC_CMDR = cmdr;

        // Wait for command completion
        if (resp == Response::None) {
            // Wait for CMDSENT
            for (uint32_t i = 0; i < 1'000'000; ++i) {
                uint32_t sta = sd->SDMMC_STAR;
                if (sta & SDMMC1::SDMMC_STAR_CMDSENT) {
                    sd->SDMMC_ICR = SDMMC1::SDMMC_ICR_CMDSENTC;
                    return Error::None;
                }
            }
            return Error::Timeout;
        }

        // Wait for response
        constexpr uint32_t resp_done = SDMMC1::SDMMC_STAR_CMDREND
                                     | SDMMC1::SDMMC_STAR_CTIMEOUT
                                     | SDMMC1::SDMMC_STAR_CCRCFAIL;

        for (uint32_t i = 0; i < 1'000'000; ++i) {
            uint32_t sta = sd->SDMMC_STAR;
            if (sta & SDMMC1::SDMMC_STAR_CTIMEOUT) {
                sd->SDMMC_ICR = 0xFFFFFFFF;
                return Error::Timeout;
            }
            if (sta & SDMMC1::SDMMC_STAR_CCRCFAIL) {
                // ACMD41 (CMD41) does not use CRC — accept CRC fail for it
                if (cmd_index == 41) {
                    sd->SDMMC_ICR = 0xFFFFFFFF;
                    return Error::None;
                }
                sd->SDMMC_ICR = 0xFFFFFFFF;
                return Error::CrcFail;
            }
            if (sta & SDMMC1::SDMMC_STAR_CMDREND) {
                sd->SDMMC_ICR = SDMMC1::SDMMC_ICR_CMDRENDC;
                return Error::None;
            }
        }
        return Error::Timeout;
    }

    static void delay_cycles(uint32_t n) {
        for (volatile uint32_t i = 0; i < n; ++i) {
            __asm__ volatile("nop");
        }
    }

    static inline bool s_initialized = false;
    static inline bool s_card_sdhc = false;
    static inline uint16_t s_rca = 0;
};

} // namespace sbl::driver

// C-linkage wrappers for FatFs diskio glue
extern "C" {

int sbl_sdmmc_is_initialized(void) {
    return sbl::driver::Sdmmc::initialized() ? 1 : 0;
}

int sbl_sdmmc_read_block(unsigned long sector, unsigned char* buf) {
    return sbl::driver::Sdmmc::read_block(sector, buf) == sbl::driver::Sdmmc::Error::None ? 0 : 1;
}

int sbl_sdmmc_write_block(unsigned long sector, const unsigned char* buf) {
    return sbl::driver::Sdmmc::write_block(sector, buf) == sbl::driver::Sdmmc::Error::None ? 0 : 1;
}

} // extern "C"

#endif // SBL_HW_DRIVER_SDMMC_HPP_
