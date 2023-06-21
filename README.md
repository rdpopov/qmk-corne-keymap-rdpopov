# Corne keymap with mouse support
This is a modification of the stock

Made with [Corne kit](https://mechboards.co.uk/products/helidox-corne-kit#), and 2 pro micros

## Config location
Located in ./crkbd/rev1/keymaps/rdpopov/ , I had to include the whole dir just
cos it requires Mouse support and that has to be enabled in one of the build
files

## Keymap
### Layer 1 - Base
TODO
### Layer 2 - Symbols
TODO
### Layer 3 - Navigation
TODO
### Layer 4 - Adjust
TODO

## Keymap Justification
Almost unalteded form the standard query keymap, the most useful keys are in a
more neutral position. The layer keys are in a position that can be reached from
other fingers than the thumb.
Also some things that require direction are split down the middle, so the
association is easier - left bracket = left hand

## Hardware Build Process
Easy.

High-stakes legos


## Software Build Process
1. copy the crkbd folder in ~/qmk_firmware/keyboards/
2. qmk compile -kb crkbd/rev1 -km rdpopov
3. qmk flash -kb crkbd/rev1 -km rdpopov
