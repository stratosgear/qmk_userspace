# Kyria rev3.0

To recompile the firwmare from scratch:

- Clone locally
- cd to repo
- Set qmk userspace: `qmk config user.overlay_dir="$(realpath qmk_userspace)"`
- Set current keyboard: `qmk config user.keyboard=splitkb/kyria/rev3`
- Set current keymap: `qmk config user.keymap=stratosgear`
- Verify qmk environment is OK: `qmk doctor`
- Verify qmk userspace is OK: `qmk userspace-doctor`
- Compile: `qmk compile -c` (-c will rebuild from scratch)
- Firmware will be compiled locally at: `splitkb_kyria_rev3_stratosgear.uf2`
- Double press the Boot button on the keyboard half that is powered. It is now in firmware mode
- A new usb device would have been mounted. See it with a File Manager
- Copy the `splitkb_kyria_rev3_stratosgear.uf2` file in it.
- That keyboard half will reboot with new firware
- Change power supply to other half and repeat the 4 previous steps.



## Notes

Consult `./kyria-layouts.png` for the full keymaps.
(available online at: https://www.keyboard-layout-editor.com/#/gists/48be26feaeb29e429aa2c1c8e00dee31)


## User Modules

QMK now supports Community Modules.

The functionality provided for select_word, that had custom code included in
this repo, has now (Aug 2025) migrated to these Community Modules.

Setting it up is documented:

- by QMK: https://docs.qmk.fm/features/community_modules
- by the author of select_word: https://getreuer.info/posts/keyboards/qmk-community-modules/index.html
