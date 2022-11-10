# Molise Firmware

Youtube Channel : [Dtcreation 3D](https://www.youtube.com/channel/UCQOsiY8l6Of56zkFhtDT0Sw)

Facebook group : [Molise Firmware](https://www.facebook.com/groups/molisefirmware)

TFT Firmware :  [disponible sur ce repository](https://github.com/Dtcreation/Firmware-Molise-TFT)

## FRENCH

### Qu'est ce que le firmware Molise

Molise est un firmware modifié pour les imprimantes de la marque [Artillery](https://artillery3d.com/). Le firmware support atuellement les Sidewinder X1 et X2, les Genius et Genius Pro et la Hornet.

Le Firmware est découpé en 2 parties

- Pour la carte mère : Marlin Molise
- Pour l'écran TFT : Basé sur le firmware de Bigtreetech. [Sources disponible ici](https://github.com/Dtcreation/Firmware-Molise-TFT)

## ENGLISH

### What is Molise firmware

Molise is modified firmware for brand printers [Artillery](https://artillery3d.com/). The firmware also supports Sidewinder X1 and X2, Genius and Genius Pro and la Hornet.

Firmware is split in 2

- For the motherboard: Marlin Molise
- For TFT screen: Based on Bigtreetech firmware. [Sources available here](https://github.com/Dtcreation/Firmware-Molise-TFT)

## Current version

Latest version of Molise __4.0__ based on [Marlin 2.1.1](https://github.com/MarlinFirmware/Marlin/releases/tag/2.0.9.3)

## About Molise Firmware

Molise firmware is provided to you free of charge in an "as is" state. We cannot be held responsible for any damage it may do to your 3D printer if it occurs. Please proceed with caution.

## Marlin Printer Firmware

Molise has a simple and advanced configuration assistant in 7 sections.

Supported Artillery printers :

- Genius
- Genuis Pro
- Sidewinder X1
- Sidewinder X2
- Hornet

Supported boards :

- Stock Board for Genuis and X1
- Stock Board for Genuis Pro, X2 and Hornet
- MKS GEN L V2.1, SGEN L V1, SGEN L V2, ROBIN NANO V3
- BigTreeTech SKR 1.3, SKR 1.4, SKR 1.4 Turbo, SKR 2.0 (Rev A and B)

Supported drivers :

- TMC 2208
- TMC 2209
- LV8729

Supported Extruders :

- Titan (Stock Extruder)
- BMG, BMG Wind
- HEMERA
- Matrix

Others supported Options :

- BlTouch (High Speed Mode, 5x5)
- TouchMi with or without LED on X1
- GraphicalLCD
- Sensorless Homing
- MBL
- M600 & Nozzle Park / Advanced Pause
- NeoPixels
- PID Tune
- EEPROM
- Linear Advance
- S Curve Acceleration
- ABL Bilinear Subdivision
- Z Steppers Auto-Alignment (G34)
- Mesh Validation Pattern (G26)
- Etc ...

## How to build

### VSCode

The simplest way to build is to switch the PlatformIO project environment in VSCode (as the screenshot below) and use one of the presets:

![Platform IO env](screenshots/switch_env.png)

- For the Sidewinder X1:
  - __env:x1_mbl__: with Mesh Bed Leveling
  - __env:x1_bltouch__: with BL Touch
  - __env:x1_touchmi__: with Touch Mi
- For the Genius:
  - __env:genius_mbl__: with Mesh Bed Leveling
  - __env:genius_bltouch__: with BL Touch
  - __env:genius_touchmi__: with Touch Mi
- For the Sidewinder X2: __env:x2__
- For the Genius Pro: __env:geniuspro__
- For the Hornet: __env:hornet__

If you're using VSCode extension for PlatformIO, you should be able to pick the environment you want directly from the bottom bar.

If you need more fined-grained configuration (e.g. custom board or custom extruder), you may stay on the default PlatformIO environment and follow through the instructions in [Marlin/Configuration.h](Marlin/Configuration.h). To build custom Molise Firmware, replace "CHANGE_VALUE" in [platformio.ini](platformio.ini) with the required configuration, save file and change platform.io env to `default`

![platform.ini CHANGE_VALUE](screenshots/platform.io-change_value.png)

![Platform.ini env:default](screenshots/switch_env_custom.png)

The code in the `Configuration.h` file has been split into 7 sections to make the code more readable. So, for people who want to compile code from source, the job will be easier. For more explanation on the code compilation, please refer to the [dedicated wiki](https://github.com/Dtcreation/Firmware-Molise-Artillery/wiki)

### PIO Command Line Interface

You can also build from `pio` command line directly, for instance:

> pio run -e x1_mbl

## TFT Screen Firmware

The Molise Firmware is supplied with a second firmware, this is the firmware of the TFT screen. This TFT Firmware is based on the Official Firmware of Bigtreetech with the support among others of the following touch functions:

- M600
- Babystepping
- ABL
- MBL
- Z Offset
- Autotune PID
- Assisted filament loading-unloading
- Assisted E-step calibration
- UART management
- Various configurations

And all preconfigured in French and English

If you like it or would like to contribute to other improvements to this firmware, please consider the possibility of donating to:

### Installation and configuration

In order to help you in installing and configuring the Firmware, please take a look at the [Wiki](https://github.com/Dtcreation/Firmware-Molise-Artillery/wiki)

### Update Molise

On the Sidewinder X1 and Genius printers, the USB port on the motherboard used to connect the printer to a PC (e.g. Octoprint) is wired to a serial bus. This bus is also shared by the TFT and the motherboard. Sharing the serial bus does not allow easy flashing of Marlin firmware due to collisions in the bus.

Three possible solutions have normally been adopted to allow Marlin firmware updates with a prerequisite, disconnecting the black and red cable from the TFT screen (definitely, this cable is mainly used to block the flash):

1) physical disconnection of the TFT serial cable so that the serial bus is no longer shared with the TFT. This solution requires removing the cover under the chassis and possibly losing all warranty.

2) Turn on the printer from the main power button (on the back of the printer)
from the TFT, press the "Menu-> Parameters-> Connection-> Disconnect" button. A black background with text asking to touch the screen to reconnect the TFT is prompted. DO NOT press the screen to keep the TFT disconnected from the serial bus.
from the PC, open the application you usually use to flash the Marlin firmware.
connect a USB cable from the PC to the USB port on the motherboard and connect the application to the printer
follow the instructions provided by your application to flash the Marlin firmware.
After the Marlin firmware is flashed, disconnect the application from the printer and restart the printer.

3) deport the TFT connection to the EXP1 port, you can then flash without any worries

![MKS_GEN_LnewTFTwiring](https://user-images.githubusercontent.com/60579620/107208792-598fb080-6a02-11eb-8e8a-aaaefea56d4c.jpg)

## Thanks

Molise Firmware is provided to you by David TOUTON, Thomas Bourcey and [the awesome 3D printing community on Facebook](https://www.facebook.com/groups/molisefirmware), and of course, we can't forget the team Marlin who spent countless days, nights and years building Marlin to where it is today.
