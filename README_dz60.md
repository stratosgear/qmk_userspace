# DZ60

To recompile the firwmare from scratch:

- Clone locally: `git clone git@github.com:stratosgear/qmk_userspace.git`
- cd to repo
- Set qmk userspace: `qmk config user.overlay_dir="$(realpath qmk_userspace)"`
- Set current keyboard: `qmk config user.keyboard=dz60`
- Set current keymap: `qmk config user.keymap=stratosgear`
- Verify qmk environment is OK: `qmk doctor`
- Verify qmk userspace is OK: `qmk userspace-doctor`
- Compile: `qmk compile -c` (-c will rebuild from scratch)
- Firmware will be compiled locally at: `dz60_stratosgear.hex`
- Run: `qmk flash` to flash it.
- It will wait for Bootloader to be available:
- Set keyboard to bootloader mode:
  - If the keyboard is working and has a previous boot loader mode use it:
    - Previous `stratosgear` layouts should have it on: L3 + (top right button)
    - L3: fourth button from bottom right
  - If keyboard is malfunctioning due to bad firmware, press the reset button at the bottom of the keyboard
- That keyboard half will reboot with new firware


## Notes

Keyboard defaults to COLEMAK DH (L3 + 1).
To switch to QWERTY press L3 + 2

Consult `./dz60-layouts.png` for the full keymaps.
(available online at: https://www.keyboard-layout-editor.com/#/gists/5a9a2f4058f856bf7923b0edaef34ee1)
