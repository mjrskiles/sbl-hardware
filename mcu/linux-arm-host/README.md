# linux-arm-host MCU

Hosted Linux ARM64 platform for SBL. Provides driver implementations that bridge SBL's hardware abstractions to host OS services.

## Drivers

| Driver | Implementation |
|--------|---------------|
| SAI (audio) | miniaudio — real-time duplex via PulseAudio/ALSA |
| MIDI (MidiPort) | Linux rawmidi `/dev/snd/midiC*D*` |
| GPIO | In-memory boolean array |
| ADC | Scan buffer initialized to each jack\'s idle code from the manifest electrics (`sbl::hw::electrical::idle_counts`); no updates until a VDH client lands (FDP-076) |
| UART | stdout (write), stub (read) |
| I2C | No-op (codec init succeeds silently) |
| USB | No-op stubs + CDC routes to stdout |
| Timer | `clock_gettime(CLOCK_MONOTONIC)` |

## Tested On

RPi 5 (Cortex-A76, RPi OS Bookworm, PipeWire audio).

## Related

- Workbench mainboard/module manifests: `sbl-workbench/`
- Portable profiling: `sound-byte-libs/src/sbl/profiling/cycles.hpp`
