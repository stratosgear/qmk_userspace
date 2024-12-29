# DZ60

To recompile the firwmare from scratch:

- Clone locally: `git clone git@github.com:stratosgear/qmk_userspace.git`
- cd to repo
- Set qmk userspace: `qmk config user.overlay_dir="$(realpath qmk_userspace)"`
- Set current keyboard: `qmk config user.keyboard=winry/winry315`
- Set current keymap: `qmk config user.keymap=stratosgear`
- Verify qmk environment is OK: `qmk doctor`
- Verify qmk userspace is OK: `qmk userspace-doctor`
- Compile: `qmk compile -c` (-c will rebuild from scratch)
- Firmware will be compiled locally at: `winry_winry315_stratosgear.hex`
- Run: `qmk flash` to flash it.
- It will wait for Bootloader to be available:
- Set keyboard to bootloader mode:
  - If the keyboard is working and has a previous boot loader mode use it:
    - Previous `stratosgear` layouts should have it on: bottom right button
  - If keyboard is malfunctioning due to bad firmware, press the reset button at the bottom of the keyboard
- That keyboard half will reboot with new firware


## Notes

