// Native USB stubs — provides symbol definitions that the library headers
// declare but only TinyUSB-backed .cpp files normally provide.
//
// These are linked into the native driver so that Davis Jr. can reference
// sbl::usb::CdcSerial and sbl::usb::MidiPort without TinyUSB.

#include <cstddef>
#include <cstdint>
#include <cstdio>

#include <sbl/usb/cdc.hpp>
#include <sbl/usb/midi.hpp>

// === CDC Serial — routes to stdout ===

namespace sbl::usb {

size_t CdcSerial::write(const uint8_t* data, size_t len) {
    return fwrite(data, 1, len, stdout);
}

size_t CdcSerial::puts(const char* str) {
    size_t len = 0;
    while (str[len]) ++len;
    fwrite(str, 1, len, stdout);
    fflush(stdout);
    return len;
}

bool CdcSerial::write_byte(uint8_t byte) {
    putchar(byte);
    return true;
}

size_t CdcSerial::read(uint8_t* data, size_t max_len) {
    (void)data; (void)max_len;
    return 0;
}

int CdcSerial::read_byte() { return -1; }
size_t CdcSerial::available() { return 0; }
bool CdcSerial::connected() { return true; }
bool CdcSerial::just_connected() {
    static bool first = true;
    if (first) { first = false; return true; }
    return false;
}
void CdcSerial::flush() { fflush(stdout); }

// === MIDI Port — no USB MIDI on native ===

bool MidiPort::connected() { return false; }
uint32_t MidiPort::read(uint8_t* buf, uint32_t max_len) {
    (void)buf; (void)max_len;
    return 0;
}
bool MidiPort::send(const sbl::midi::MidiEvent& event) {
    (void)event;
    return false;
}
uint32_t MidiPort::write(const uint8_t* data, uint32_t len) {
    (void)data; (void)len;
    return 0;
}

} // namespace sbl::usb

// === TinyUSB stubs ===

extern "C" {
    void tud_task(void) {}
}
