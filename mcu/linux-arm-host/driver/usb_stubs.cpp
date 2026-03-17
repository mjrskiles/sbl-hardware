// Native USB stubs — provides symbol definitions that the library headers
// declare but only TinyUSB-backed .cpp files normally provide.
//
// CDC Serial routes to stdout. MIDI Port reads from Linux rawmidi devices
// (/dev/snd/midiC*D*) for USB MIDI controller input on the native workbench.
//
// Device selection via SBL_MIDI_DEVICE environment variable:
//   SBL_MIDI_DEVICE="Keystep"  — substring match on card name
//   SBL_MIDI_DEVICE="list"     — print available MIDI devices and exit
//   (unset)                    — open first available rawmidi device

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cstdlib>

#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>

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

// === MIDI Port — Linux rawmidi backend ===

namespace {

static constexpr int MAX_MIDI_FDS = 4;
static int s_midi_fds[MAX_MIDI_FDS] = {-1, -1, -1, -1};
static int s_midi_fd_count = 0;
static bool s_midi_initialized = false;

/// Case-insensitive substring search
bool midi_contains_icase(const char* haystack, const char* needle) {
    if (!haystack || !needle) return false;
    size_t hlen = strlen(haystack);
    size_t nlen = strlen(needle);
    if (nlen > hlen) return false;
    for (size_t i = 0; i <= hlen - nlen; ++i) {
        bool match = true;
        for (size_t j = 0; j < nlen; ++j) {
            char h = haystack[i + j];
            char n = needle[j];
            if (h >= 'A' && h <= 'Z') h += 32;
            if (n >= 'A' && n <= 'Z') n += 32;
            if (h != n) { match = false; break; }
        }
        if (match) return true;
    }
    return false;
}

/// Read the ALSA card name for a given card number from /proc/asound/cardN/id
bool read_card_name(int card_num, char* name, size_t name_size) {
    char path[64];
    snprintf(path, sizeof(path), "/proc/asound/card%d/id", card_num);
    FILE* f = fopen(path, "r");
    if (!f) return false;
    if (!fgets(name, static_cast<int>(name_size), f)) {
        fclose(f);
        return false;
    }
    fclose(f);
    // Strip trailing newline
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') name[len - 1] = '\0';
    return true;
}

/// Read the long name from /proc/asound/cardN/longname
bool read_card_longname(int card_num, char* name, size_t name_size) {
    char path[64];
    snprintf(path, sizeof(path), "/proc/asound/card%d/longname", card_num);
    FILE* f = fopen(path, "r");
    if (!f) return false;
    if (!fgets(name, static_cast<int>(name_size), f)) {
        fclose(f);
        return false;
    }
    fclose(f);
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') name[len - 1] = '\0';
    return true;
}

struct MidiDevice {
    char path[280];   // /dev/snd/ + d_name
    int card_num;
    char name[64];    // card short name
    char longname[128]; // card long name
};

/// Scan /dev/snd/ for rawmidi devices and populate device list
int scan_midi_devices(MidiDevice* devices, int max_devices) {
    DIR* dir = opendir("/dev/snd");
    if (!dir) return 0;

    int count = 0;
    struct dirent* entry;
    while ((entry = readdir(dir)) != nullptr && count < max_devices) {
        // Match midiC<card>D<device> pattern
        if (strncmp(entry->d_name, "midiC", 5) != 0) continue;

        int card_num = -1;
        if (sscanf(entry->d_name, "midiC%dD", &card_num) != 1) continue;

        MidiDevice& dev = devices[count];
        snprintf(dev.path, sizeof(dev.path), "/dev/snd/%s", entry->d_name);
        dev.card_num = card_num;

        if (!read_card_name(card_num, dev.name, sizeof(dev.name))) {
            snprintf(dev.name, sizeof(dev.name), "card%d", card_num);
        }
        if (!read_card_longname(card_num, dev.longname, sizeof(dev.longname))) {
            dev.longname[0] = '\0';
        }

        ++count;
    }
    closedir(dir);
    return count;
}

/// Print available MIDI devices
void print_midi_devices(MidiDevice* devices, int count) {
    if (count == 0) {
        fprintf(stderr, "[native-midi] No MIDI devices found\n");
        return;
    }
    fprintf(stderr, "[native-midi] Available MIDI devices:\n");
    for (int i = 0; i < count; ++i) {
        fprintf(stderr, "  %s  %s", devices[i].path, devices[i].name);
        if (devices[i].longname[0]) {
            fprintf(stderr, "  (%s)", devices[i].longname);
        }
        fprintf(stderr, "\n");
    }
}

/// Initialize rawmidi — scan devices, apply filter, open file descriptors
void midi_init() {
    if (s_midi_initialized) return;
    s_midi_initialized = true;

    MidiDevice devices[8];
    int device_count = scan_midi_devices(devices, 8);

    const char* filter = getenv("SBL_MIDI_DEVICE");

    if (filter && strcmp(filter, "list") == 0) {
        print_midi_devices(devices, device_count);
        _exit(0);  // _exit avoids C++ destructor/atexit cleanup (miniaudio thread)
    }

    if (device_count == 0) {
        fprintf(stderr, "[native-midi] No MIDI devices found\n");
        return;
    }

    for (int i = 0; i < device_count && s_midi_fd_count < MAX_MIDI_FDS; ++i) {
        // Apply filter if set
        if (filter && filter[0] != '\0') {
            if (!midi_contains_icase(devices[i].name, filter) &&
                !midi_contains_icase(devices[i].longname, filter)) {
                continue;
            }
        }

        int fd = open(devices[i].path, O_RDONLY | O_NONBLOCK);
        if (fd < 0) {
            fprintf(stderr, "[native-midi] Failed to open %s: %s\n",
                    devices[i].path, strerror(errno));
            continue;
        }

        s_midi_fds[s_midi_fd_count++] = fd;
        fprintf(stderr, "[native-midi] Opened %s (%s)\n",
                devices[i].path, devices[i].name);
    }

    if (s_midi_fd_count == 0 && filter) {
        fprintf(stderr, "[native-midi] No devices matching '%s'\n", filter);
        print_midi_devices(devices, device_count);
    }
}

} // anonymous namespace

bool MidiPort::connected() {
    if (!s_midi_initialized) midi_init();
    return s_midi_fd_count > 0;
}

uint32_t MidiPort::read(uint8_t* buf, uint32_t max_len) {
    if (!s_midi_initialized) midi_init();
    if (s_midi_fd_count == 0) return 0;

    uint32_t total = 0;
    for (int i = 0; i < s_midi_fd_count && total < max_len; ++i) {
        ssize_t n = ::read(s_midi_fds[i], buf + total, max_len - total);
        if (n > 0) {
            total += static_cast<uint32_t>(n);
        }
    }
    return total;
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
