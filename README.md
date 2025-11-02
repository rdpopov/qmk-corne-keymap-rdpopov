# Info
- model - `corne rev 1` , `crkbd rev1` , `corne 46 key`
- model as far as qmk is concerned - `crkbd/rev1`
- microcontroller is kb2040

## Building firmware

1. Set this up - https://qmk.fm/guide
1.1 or this is the online builder - https://config.qmk.fm/#/crkbd/rev1/LAYOUT_split_3x6_3

2. this repo should go in this path - :
   ./qmk_firmware/keyboards/crkbd/keymaps/rdpopov
   ``` bash
    ls -la ./qmk_firmware/keyboards/crkbd/keymaps/rdpopov

    drwxrwxr-x 4 rosko rosko  4096 Nov  2 19:18 ./
    drwxrwxr-x 4 rosko rosko  4096 Jan 14  2025 ../
    -rw-rw-r-- 1 rosko rosko  1486 Aug 26 23:07 config.h
    drwxrwxr-x 8 rosko rosko  4096 Nov  2 19:09 .git/
    -rw-rw-r-- 1 rosko rosko 19420 Aug 26 23:01 keymap.c
    -rw-rw-r-- 1 rosko rosko   562 Nov  2 19:18 README.md
    -rw-rw-r-- 1 rosko rosko   386 Aug 26 23:02 rules.mk

   ```

3.  Build with this command  in qmk_firmware folder:
``` bash
qmk compile --keyboard crkbd/rev1 --keymap rdpopov -e CONVERT_TO=kb2040
```

The keymap name is the same as the folder name - my keymap is `rdpopov`

4. Flashing the firmware -  On kb 2040 microcontroller :
- Connect keyboard to pc
- on the outside rim of the keybard, just behind the  microcontroller and one of
  the switches is the reset button - press it 2 times quickly
- Should show up as usb device
- From root of qmk_firmware folder should be a 
  ```bash 
    # This is the firmware that needs to be flashed
     ls -la ./qmk_firmware/
    -rw-rw-r--    1 rosko rosko  83968 Nov  2 19:28 crkbd_rev1_rdpopov_kb2040.uf2
  ```
- Copy the uf2 file to the kb2040 usb device. 
- The keyboard should restart and be flashed with new firmware

## Layouts 
- [Miryoky layout](https://github.com/thrly/corne-keyboard-layout.md)
- [Some guy with interesting keymap for smaller keyboard](https://www.youtube.com/watch?v=8wZ8FRwOzhU.md)
- [Some normal guy](https://www.youtube.com/watch?v=wTMcH7u-vu0&t=245s.md)
- This is for a smaller keyboard but ideas still hold: [My ferris sweep keymap](https://github.com/rdpopov/zmk-config-kai-simple-dongle/blob/main/config/kai_simple.keymap.md)
- [Reddit](https://www.reddit.com/r/ErgoMechKeyboards/)
- [Discord](https://discord.gg/qmk.md) - everything is on there
