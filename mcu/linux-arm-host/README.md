# linux-arm-host MCU

Hosted Linux ARM64 "MCU" for SBL. The drivers here implement the same static contracts
as the STM32H750 drivers, backed by host OS services, so an app built for
`sbl:devices/virtual-patch-init` is the same source as the one built for `patch-init`.
This is a paravirtual layer: the drivers know they are on a host; nothing above them does.

## Drivers

| Driver | Implementation |
|--------|---------------|
| SAI (audio) | miniaudio. Playback by default; capture is opt-in with `SBL_AUDIO_INPUT=1` (avoids monitor-loopback feedback). Device thread requests `SCHED_FIFO` and reports what it got; process is `mlockall`ed after start. Host period = 2 × `block_size`, 3 periods; the callback re-blocks so the app sees `block_size` frames. |
| MIDI (`MidiPort`) | Linux rawmidi `/dev/snd/midiC*D*`, raw byte stream. `SBL_MIDI_DEVICE` filters by card name or device node path. Output not implemented. |
| ADC | Scan buffer initialized to each channel's idle code from the manifest electrics (`sbl::hw::electrical::idle_counts`, FDP-076 Phase 0); nothing writes it afterwards until the VDH client lands (FDP-076 Phase 2). |
| GPIO | In-memory pin array; models pull-up/pull-down idle state only. |
| FatFs | `ff.h` reimplemented over POSIX file I/O (`ff_stubs.c`); `f_mount` always succeeds. |
| Timer / TimerCallback | `clock_gettime(CLOCK_MONOTONIC)`; periodic callback on a `std::thread`. |
| UART | stdout (write), stub (read). |
| I2C | No-op (codec init succeeds). |
| USB | CDC routes to stdout, read side stubbed. |

## Environment variables

| Variable | Effect |
|---|---|
| `SBL_AUDIO_DEVICE` | Case-insensitive substring of the audio device name. `list` prints devices and exits. Unset = system default. |
| `SBL_AUDIO_INPUT` | Set to open the capture side too (duplex). Default: playback only. |
| `SBL_MIDI_DEVICE` | Substring of the ALSA card name, or a device node path such as `/dev/snd/midiC4D1` to select exactly one port (what sidecar passes). `list` prints devices and exits. Unset = opens every rawmidi device. |

## Running

See `sbl-workbench/README.md` for the full flow (setup, build, sidecar). Minimal:

```bash
source .venv/bin/activate
cmake --preset workbench --fresh -S sbl-apps/davis-jr && cmake --build sbl-apps/davis-jr/build/workbench
SBL_AUDIO_DEVICE=H5studio SBL_MIDI_DEVICE=LCXL3 sbl-apps/davis-jr/build/workbench/davis_jr
```

Startup logs `[native-sai] Audio thread: SCHED_FIFO priority N` when the user has rtprio
(the `pipewire` group grants it on RPi OS); `SCHED_OTHER — realtime denied` otherwise.

## Tested on

RPi 5 (Cortex-A76, RPi OS Bookworm, PipeWire audio), Zoom H5studio, Launch Control XL3.

## Related

- Virtual targets: `modules/virtual-patch-sm/hardware.json`, `devices/virtual-patch-init/device.json`
  (same exposed surface as `daisy-patch-sm`; the attached `patch-init` module is shared)
- Profiling timing backend: generated `sbl/hw/config/timing.hpp` (`posix_monotonic` on this MCU)
  consumed by `sound-byte-libs/src/sbl/common/diagnostics/ticks.hpp`
- Where this is going: workspace FDP-076, `tools/sbl-vdh`
