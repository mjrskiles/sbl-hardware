# dev-carrier — EDA

Board design files for the SBL dev carrier: a Eurorack module (18HP
soft target, ~20HP expected) hosting the sbl-som. Front panel: 4 audio
in (L/R, sidechain, aux), 4 audio out (L/R + firmware-routable probe
pair), 4 bipolar CV ins with attenuator knobs (digital — knob on its
own ADC channel, patch-detect via jack switch), 2 gate in, 2 gate out,
2 CV out, 4 macro knobs, encoder, MIDI in/out (TRS-A), USB, SD.

Design authority: `docs/planning/sketchbook/dev-board.md` in the
workspace repo.

- KiCad 10. Board revisions live in versioned subdirectories (`v1/`,
  `v2/`, …); the module's `hardware.json` manifest tracks the revision
  firmware currently targets.
- Licensed under CERN-OHL-P v2 (see `LICENSE`). The firmware side of
  this repo is licensed separately (see repo root).
