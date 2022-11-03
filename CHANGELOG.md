# Changelog

## 3.0

- Upgrade to Marlin 2.0.9.3
- Add support for Sidewinder X2, Genius Pro and Hornet

## 2.3

- Upgrade to Marlin 2.0.9.1
- Add an option to activate Linear Advance (desactivated by default)
- Slow Z probing

## 2.0

- Upgrade to Marlin 2.0.8
- Bugfix for MKS SgenL V2
- Reduce Z feedrate
- Change manual Z Probe start

## 1.4.0

Changelog Molise Marlin :

- Add M48 For TouchMi
- Align version number with Molise for Wanhao D12

Changelog Molise TFT 5.0 :

- Add Level Corner With Probe
- Desactivate TFT M600 Emulation to use Marlin M600 (you can reactivate it in config.ini)
- Change notifications style
- Bugfix

## 1.3.2

- Add support for BMG Wind
- Adjust junction deviation
- Active S Curve
- Change K value to 0
- Adjust Genius size bed for BLTouch Y problem
- Neopixel bugfix
- Add M73 support

## 1.3.1

- Bugfix Z_STEPPER_AUTO_ALIGN with TouchMi
- Bugfix G34 with TouchMi
- Add TouchMi Neopixel LED support
- Add personal Neopixel LED for SKR
- Change PREHEAT_BEFORE_PROBING by PREHEAT_BEFORE_LEVELING

## 1.3.0

- Upgrade with Marlin BugFix 2.0.X
- Return to 250.000 connection speed (old bug fixed - don't forget to change the connection speed on the TFT screen)
- Some bugfix for TouchMi (Z_auto_alignement problem still here)
- Add Offset for fan duct with 5015 : <https://www.thingiverse.com/thing:4548854>
- Add LEVEL_CORNERS_USE_PROBE (works only with LCD screen or Marlin Mode for now)
- Add auto pre-heat bed when probe
- Add BINARY_FILE_TRANSFER (for flashing Molise with Octoprint for boards with sd reader)

## 1.2.7

- Add MKS Gen L v2.1
- Optimizes ABL
- Optimizes Sensorless Homing
- Add Readme.md
- Add Github Wiki

## 1.2.6

- Compilation with MKS Gen L and Z steppers Alignment bugfix

## 1.2.5

- Small bugfix
- Support BTT TFT35, TFT43

## 1.2.4

- Improves travel for SKR board
- Support for TMC2209 Standalone

## 1.2.3

- TouchMi bugfix
- Graphical LCD bug fix

## Version 1.2.2

### Fixed

- TFT and Marlin bug fix for Octoprint
- Add option in section 6 if you want to plug runout sensor filament on the mainboard

## Version 1.2.1

### Fixed

- Bug fix communication
- New TFT firmware

## Version 1.2.0

### Fixed

- Add support for TouchMi
- Add Solution to Octoprint communication problem (you have to change the connection of the TFT on the mainboard, see jpg file included) communication speed: 115000
- New TFT firmware with TouchMi and Z steppers Align button
- Linear Advance 0.13 by default with experimental Scurve

## Version 1.1.2

### Fixed

- Fixed bug
- Add support for LV8729
- Add Support for Matrix extruder
- Add Z_STEPPER_AUTO_ALIGN with G34 (only for advanced users - Z belt
- remove obligation) in BLTouch options

## Version 1.1.1

### Fixed

- Fixed bug
- Active or not MBL in section 5
- M600 works with Octoprint
- TFT Firmware based on last Bigtreetech Version

## Version 1.1.0

### Fixed

- Marlin 2.0.7.2
- Major Bug fixes
- Addition of MBL
- Fixed bug "end of filament detection error"
- Choice of TFT language in Screen-> Language menu

## Version 1.0.3

### Fixed

- Add support for MKS SGEN L V1 and V2

## Version 1.0.2

### Fixed

- TFT bug fix

## Version 1.0.1

### Fixed

- Bug fix buffers

## Version 1.0

### Fixed

- First release