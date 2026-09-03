# sbl-som — EDA

Board design files for the SBL SoM: the reusable compute section for
SBL Eurorack modules. STM32H743IIT6 (LQFP176), PCM3168A codec (6 in /
8 out, SAI TDM), SDRAM (16-bit FMC), USB, power. The 2mm dual-row
header pinout is the long-lived contract between the SoM and its
carriers.

Design authority: `docs/planning/sketchbook/dev-board.md` in the
workspace repo.

- KiCad 10. Board revisions live in versioned subdirectories (`v1/`,
  `v2/`, …); the module's `hardware.json` manifest tracks the revision
  firmware currently targets.
- Licensed under CERN-OHL-P v2 (see `LICENSE`). The firmware side of
  this repo is licensed separately (see repo root).
