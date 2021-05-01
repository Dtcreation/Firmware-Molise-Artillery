# Molise Firmware

N'hésitez pas à me soutenir. Payez moi une 🍺 ou un ☕ : [https://paypal.me/dtouton](https://paypal.me/dtouton)

Ma chaine Youtube : [Dtcreation 3D](https://www.youtube.com/channel/UCQOsiY8l6Of56zkFhtDT0Sw)

Ma page Instagram : [Dtcreation 3D](https://www.instagram.com/dtcreation3d/)

Mon Twitter : [Dtcreation 3D](https://twitter.com/Dtcreation3)

Rejoignez notre groupe facebook : [Molise Firmware](https://www.facebook.com/groups/molisefirmware)

Les sources pour l'écran TFT sont [disponible sur ce repository](https://github.com/Dtcreation/Firmware-Molise-TFT)

Téléchargez le super fang pour BLtouch sur [Thingiverse](https://www.thingiverse.com/thing:4589399)

Téléchargez le super fang pour TouchMi sur [Thingiverse](https://www.thingiverse.com/thing:4713319)

## FRENCH - ENGLISH DOWN

### Qu'est ce que le firmware Molise

Molise est un firmware modifié pour les imprimantes de la marque [Artillery](https://artillery3d.com/). Le firmware support atuellement l'artillery X1 et Genius.

Le Firmware est découpé en 2

- Pour la carte mère : Marlin Molise
- Pour l'écran TFT : Basé sur le firmware de Bigtreetech. [Sources disponible ici](https://github.com/Dtcreation/Firmware-Molise-TFT)

### Version actuelle

Dernière version de Molise __2.0__ basée sur [Marlin 2.0.8](https://github.com/MarlinFirmware/Marlin/releases/tag/2.0.8)

### A propos du Firmware Molise

Voici un listing de ce que propose actuellement le Firmware :

Le Firmware supporte actuellement le hardware suivant :

- Drivers TMC 2100, 2208 ou 2209 et LV8729 et mode UART
- Carte mère SKR 1.3, 1.4, 1.4 Turbo et MKS SGen L v1 and v2, MKS Gen L v1 et v2.1, MKS Robin Nano v3
- Extruder BMG, Hemera et Matrix
- BlTouch (avec ou sans Waggster Mod)
- TouchMi avec ou sans LED sur X1

Le Firmware apporte les modifications suivantes à Marlin (par rapport à la version stock)
- Support du BlTouch et du TouchMi
- Auto Bed Leveling with Stock Sensor [plus d'information sur le site 3dprintbeginner](https://3dprintbeginner.com/sidewinder-x1-auto-bed-leveling-stock-sensor/)
- Graphical LCD : Mode Marlin pour les écrans Bigtreetech et clônes
- Sensorless Homing : Permet de positionner un axe sans avoir besoin d'un interrupteur de fin de course physique
- Le M600 : permet de changer de couleur en cours de print (Compatible avec la carte SD, la clé USB et Ocotprint)
- Mesh Bed Leveling : MBL - Permet de palper manuellement plusieurs points de votre plateau comme un BLTouch le ferait automatiquement
- Alignement automatique des stepper Z (Z_STEPPER_AUTO_ALIGN)
- Solution au problème de communication d'Octoprint via changement de la connexion de l'écran TFT sur la MKS Gen L (option)
- Déport du capteur de fin de filament sur la carte mère pour compatibilité avec Octoprint et lecteur SD sur carte mère (Option) (pour la carte mère d'origine, brancher sur le pin D2 du connecteur X+)

Le code du fichier `Configuration.h` a été découpé en 7 sections afin de rendre le code plus lisible. Ainsi, pour les personnes souhaitant compiler le code à partir des sources, le travail sera plus simple. Pour plus d'explication sur la compilation du code, merci de vous reporter à la page du [wiki dédiée](https://github.com/Dtcreation/Firmware-Molise-Artillery/wiki)

Le firmware Molise 2.0 vous est fourni gratuitement, dans un état « tel quel ». Nous ne pouvons pas être tenus responsables des dommages qu’il pourrait faire à votre imprimante 3D le cas échéant. S’il vous plaît procéder avec prudence.

Pour vous faciliter la tâche, le firmware molise vous est fourni "pré-compilé" pour les 6 cas de figures suivants:

- X1 Stock + MBL
- X1 Stock + BLTouch (Waggster Mod)
- X1 Stock + TouchMi
- Genius Stock + MBL
- Genius Stock + BLTouch (Waggster Mod)
- Genius Stock + TouchMi

Le Firmware Molise est fourni avec un second firmware, il s'agit du firmware de l'écran TFT. Ce Firmware TFT est basé le firmware Officiel de Bigtreetech avec la prise en charge entre autre des fonctions tactiles suivantes :

- M600
- Babystepping
- ABL
- MBL
- Z Offset
- PID Autotune
- Chargement-Déchargement de filament assisté
- Calibration des E-steps assisté
- Gestion de l'UART
- COnfigurations diverses

Et le tout préconfiguré pour X1 et Genius, en Français et Anglais

Si vous l'aimez ou si vous souhaitez contribuer à d'autres améliorations de ce firmware, veuillez envisager la possibilité de faire un don à :

https://paypal.me/dtouton

Merci !


### Installation et configuration

Afin de vous aider dans l'installation et la configuration du Firmware, merci de faire un tour sur le [Wiki](https://github.com/Dtcreation/Firmware-Molise-Artillery/wiki)

PROCÉDURES DE MISE À JOUR DE MARLIN FW:

Sur les imprimantes Sidewinder X1 et Genius, le port USB de la carte mère utilisé pour connecter l'imprimante à un PC (par exemple à Octoprint) est câblé à un bus série. Ce bus est également partagé par le TFT et la carte mère. Le partage du bus série ne permet pas de flasher facilement le firmware Marlin en raison de collisions dans le bus.

Trois solutions possibles ont normalement été adoptées pour permettre les mises à jour du firmware Marlin avec un prérequis, débrancher le câble noir et rouge de l'écran TFT (définitivement, ce câble sert surtout à bloquer le flash):

1) déconnexion physique du câble série TFT afin que le bus série ne soit plus partagé avec le TFT. Cette solution nécessite de retirer le capot sous le châssis et éventuellement de perdre toute garantie.

2) allumez l'imprimante à partir du bouton d'alimentation principal (à l'arrière de l'imprimante)
depuis le TFT, appuyez sur le bouton "Menu-> Paramètres-> Connexion-> Déconnecter". Un fond noir avec un texte demandant de toucher l'écran pour reconnecter le TFT est invité. N'appuyez PAS sur l'écran pour que le TFT continue d'être déconnecté du bus série.
à partir du PC, ouvrez l'application que vous utilisez habituellement pour flasher le firmware Marlin.
branchez un câble USB du PC au port USB de la carte mère et connectez l'application à l'imprimante
suivez les instructions fournies par votre application pour flasher le firmware Marlin.
Une fois le micrologiciel Marlin flashé, déconnectez l'application de l'imprimante et redémarrez l'imprimante.

3) déportez la connexion du TFT sur le port EXP1, vous pourrez alors flasher sans aucun soucis

![MKS_GEN_LnewTFTwiring](https://user-images.githubusercontent.com/60579620/107208792-598fb080-6a02-11eb-8e8a-aaaefea56d4c.jpg)

### Changelog

#### 2.0

- Upgrade to Marlin 2.0.8
- Bugfix for MKS SgenL V2
- Reduce Z feedrate
- Change manual Z Probe start

#### 1.4.0

Changelog Molise Marlin :

- Add M48 For TouchMi
- Align version number with Molise for Wanhao D12

Changelog Molise TFT 5.0 :

- Add Level Corner With Probe
- Desactivate TFT M600 Emulation to use Marlin M600 (you can reactivate it in config.ini)
- Change notifications style
- Bugfix

#### 1.3.2

- Add support for BMG Wind
- Adjust junction deviation
- Active S Curve
- Change K value to 0
- Adjust Genius size bed for BLTouch Y problem
- Neopixel bugfix
- Add M73 support

#### 1.3.1

- Bugfix Z_STEPPER_AUTO_ALIGN with TouchMi
- Bugfix G34 with TouchMi
- Add TouchMi Neopixel LED support
- Add personal Neopixel LED for SKR
- Change PREHEAT_BEFORE_PROBING by PREHEAT_BEFORE_LEVELING

#### 1.3.0

- Upgrade with Marlin BugFix 2.0.X
- Return to 250.000 connection speed (old bug fixed - don't forget to change the connection speed on the TFT screen)
- Some bugfix for TouchMi (Z_auto_alignement problem still here)
- Add Offset for fan duct with 5015 : <https://www.thingiverse.com/thing:4548854>
- Add LEVEL_CORNERS_USE_PROBE (works only with LCD screen or Marlin Mode for now)
- Add auto pre-heat bed when probe
- Add BINARY_FILE_TRANSFER (for flashing Molise with Octoprint for boards with sd reader)

#### 1.2.7

- Add MKS Gen L v2.1
- Optimise ABL
- Optimise Sensorless Homing
- Add Readme.md
- Add Github Wiki

#### 1.2.6

- Compilation with MKS Gen L and Z steppers Alignment bugfix

#### 1.2.5

- Small bugfix
- Support BTT TFT35, TFT43

#### 1.2.4

- Improves travel for SKR board
- Support for TMC2209 Standalone

#### 1.2.3

- TouchMi bugfix
- Graphical LCD bug fix

#### Version 1.2.2

##### Fixed

- TFT and Marlin bug fix for Octoprint
- Add option in section 6 if you want to plug runout sensor filament on the mainboard

#### Version 1.2.1

##### Fixed

- Communication bug fix
- New TFT firmware

#### Version 1.2.0

##### Fixed

- Add support for TouchMi
- Add Solution to Octoprint communication problem (you have to change the connection of the TFT on the mainboard, see jpg file included) communication speed : 115000
- New TFT firmware with TouchMi and Z steppers Align button
- Linear Advance 0.13 by default with experimental Scurve

#### Version 1.1.2

##### Fixed

- Bug fixes
- Add support for LV8729
- Add Support for Matrix extruder
- Add Z_STEPPER_AUTO_ALIGN with G34 (only for advanced users - Z belt
- remove obligation) in BLTouch options

#### Version 1.1.1

##### Fixed

- Bug fixes
- Active or not MBL in section 5
- M600 works with Octoprint
- TFT Firmware based on last Bigtreetech Version

#### Version 1.1.0

##### Fixed

- Marlin 2.0.7.2
- Major Bug fixes
- Ajout du MBL
- Fixed bug "erreur de détection de fin de filament"
- Choix de la langue du TFT dans Screen->Language menu

#### Version 1.0.3

##### Fixed

- Add support for MKS SGEN L V1 and V2

#### Version 1.0.2

##### Fixed

- TFT bug fix

#### Version 1.0.1

##### Fixed

- Buffers bug fix

#### Version 1.0

##### Fixed

- First release

# Remerciement

Le firmware Molise 2.0 vous est fourni par David TOUTON, [la géniale communauté d’impression 3D sur Facebook](https://www.facebook.com/groups/molisefirmware), et bien sûr, nous ne pouvons pas oublier l’équipe Marlin qui a passé d’innombrables jours, nuits et années à construire Marlin jusqu’où il est aujourd’hui.



## ENGLISH

# Molise Firmware

Please do not hesitate to support me. Pay me a 🍺 or a ☕: [https://paypal.me/dtouton](https://paypal.me/dtouton)

My Youtube channel: [Dtcreation 3D](https://www.youtube.com/channel/UCQOsiY8l6Of56zkFhtDT0Sw)

My Instagram : [Dtcreation 3D](https://www.instagram.com/dtcreation3d/)

My Twitter : [Dtcreation 3D](https://twitter.com/Dtcreation3)

Join our facebook group: [Molise Firmware](https://www.facebook.com/groups/molisefirmware)

The sources for the TFT screen are [available on this repository](https://github.com/Dtcreation/Firmware-Molise-TFT)

Super fang for BLtouch [Thingiverse](https://www.thingiverse.com/thing:4589399)

Super fang for TouchMi [Thingiverse](https://www.thingiverse.com/thing:4713319)

### What is Molise firmware

Molise is modified firmware for brand printers [Artillery](https://artillery3d.com/). The firmware also supports X1 and Genius artillery.

Firmware is split in 2

- For the motherboard: Marlin Molise
- For TFT screen: Based on Bigtreetech firmware. [Sources available here](https://github.com/Dtcreation/Firmware-Molise-TFT)

### Current version

Latest version of Molise __2.0__ based on [Marlin 2.0.8](https://github.com/MarlinFirmware/Marlin/releases/tag/2.0.8)

### About Molise Firmware

Here is a listing of what the Firmware currently offers:

Firmware currently supports the following hardware:

- TMC 2100, 2208 or 2209 and LV8729 drivers and UART mode
- Motherboard SKR 1.3, 1.4, 1.4 Turbo and MKS SGen L v1 and v2, MKS Gen L v1 and v2.1
- Extrude BMG, Hemera and Matrix
- BlTouch (with or without Waggster Mod)
- TouchMi with or without LED on X1

The Firmware makes the following changes to Marlin (compared to the stock version)
- Support of BlTouch and TouchMi
- Auto Bed Leveling with Stock Sensor [more information on the 3dprintbeginner website](https://3dprintbeginner.com/sidewinder-x1-auto-bed-leveling-stock-sensor/)
- Graphical LCD: Marlin mode for Bigtreetech and clone screens
- Sensorless Homing: Allows positioning of an axis without the need for a physical limit switch
- The M600: allows you to change color during printing (Compatible with SD card, USB key and Ocotprint)
- Mesh Bed Leveling: MBL - Allows you to manually palpate several points of your plate as a BLTouch would do it automatically
- Automatic alignment of Z steppers (Z_STEPPER_AUTO_ALIGN)
- Solution to the Octoprint communication problem by changing the connection of the TFT screen on the MKS Gen L (option)
- Removal of the runout filament sensor on the motherboard for compatibility with Octoprint and SD reader on the motherboard (Option) (for the original motherboard, plug it on D2 pin X+ connector)

The code in the `Configuration.h` file has been split into 7 sections to make the code more readable. So, for people who want to compile code from source, the job will be easier. For more explanation on the code compilation, please refer to the [dedicated wiki](https://github.com/Dtcreation/Firmware-Molise-Artillery/wiki)

Molise 2.0 firmware is provided to you free of charge in an "as is" state. We cannot be held responsible for any damage it may do to your 3D printer if it occurs. Please proceed with caution.

To make your task easier, the molise firmware is supplied to you "pre-compiled" for the following 6 cases:

- X1 Stock
- X1 Stock + BLTouch (Waggster Mod)
- X1 Stock + TouchMi
- Genius Stock
- Genius Stock + BLTouch (Waggster Mod)
- Genius Stock + TouchMi

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

And all preconfigured for X1 and Genius, in French and English

If you like it or would like to contribute to other improvements to this firmware, please consider the possibility of donating to:

https://paypal.me/dtouton

Thank you !


### Installation and configuration

In order to help you in installing and configuring the Firmware, please take a look at the [Wiki](https://github.com/Dtcreation/Firmware-Molise-Artillery/wiki)

#### Create a Wiki with the following data

MARLIN FW UPDATE PROCEDURES:

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

### Changelog

#### 2.0

- Upgrade to Marlin 2.0.8
- Bugfix for MKS SgenL V2
- Reduce Z feedrate
- Change manual Z Probe start

#### 1.4.0

Changelog Molise Marlin :

- Add M48 For TouchMi
- Align version number with Molise for Wanhao D12

Changelog Molise TFT 5.0 :

- Add Level Corner With Probe
- Desactivate TFT M600 Emulation to use Marlin M600 (you can reactivate it in config.ini)
- Change notifications style
- Bugfix

#### 1.3.2

- Add support for BMG Wind
- Adjust junction deviation
- Active S Curve
- Change K value to 0
- Adjust Genius size bed for BLTouch Y problem
- Neopixel bugfix
- Add M73 support

#### 1.3.1

- Bugfix Z_STEPPER_AUTO_ALIGN with TouchMi
- Bugfix G34 with TouchMi
- Add TouchMi Neopixel LED support
- Add personal Neopixel LED for SKR
- Change PREHEAT_BEFORE_PROBING by PREHEAT_BEFORE_LEVELING

#### 1.3.0

- Upgrade with Marlin BugFix 2.0.X
- Return to 250.000 connection speed (old bug fixed - don't forget to change the connection speed on the TFT screen)
- Some bugfix for TouchMi (Z_auto_alignement problem still here)
- Add Offset for fan duct with 5015 : <https://www.thingiverse.com/thing:4548854>
- Add LEVEL_CORNERS_USE_PROBE (works only with LCD screen or Marlin Mode for now)
- Add auto pre-heat bed when probe
- Add BINARY_FILE_TRANSFER (for flashing Molise with Octoprint for boards with sd reader)

#### 1.2.7

- Add MKS Gen L v2.1
- Optimizes ABL
- Optimizes Sensorless Homing
- Add Readme.md
- Add Github Wiki

#### 1.2.6

- Compilation with MKS Gen L and Z steppers Alignment bugfix

#### 1.2.5

- Small bugfix
- Support BTT TFT35, TFT43

#### 1.2.4

- Improves travel for SKR board
- Support for TMC2209 Standalone

#### 1.2.3

- TouchMi bugfix
- Graphical LCD bug fix

#### Version 1.2.2

##### Fixed

- TFT and Marlin bug fix for Octoprint
- Add option in section 6 if you want to plug runout sensor filament on the mainboard

#### Version 1.2.1

##### Fixed

- Bug fix communication
- New TFT firmware

#### Version 1.2.0

##### Fixed

- Add support for TouchMi
- Add Solution to Octoprint communication problem (you have to change the connection of the TFT on the mainboard, see jpg file included) communication speed: 115000
- New TFT firmware with TouchMi and Z steppers Align button
- Linear Advance 0.13 by default with experimental Scurve

#### Version 1.1.2

##### Fixed

- Fixed bug
- Add support for LV8729
- Add Support for Matrix extruder
- Add Z_STEPPER_AUTO_ALIGN with G34 (only for advanced users - Z belt
- remove obligation) in BLTouch options

#### Version 1.1.1

##### Fixed

- Fixed bug
- Active or not MBL in section 5
- M600 works with Octoprint
- TFT Firmware based on last Bigtreetech Version

#### Version 1.1.0

##### Fixed

- Marlin 2.0.7.2
- Major Bug fixes
- Addition of MBL
- Fixed bug "end of filament detection error"
- Choice of TFT language in Screen-> Language menu

#### Version 1.0.3

##### Fixed

- Add support for MKS SGEN L V1 and V2

#### Version 1.0.2

##### Fixed

- TFT bug fix

#### Version 1.0.1

##### Fixed

- Bug fix buffers

#### Version 1.0

##### Fixed

- First release

# Thanks

Molise 2.0 firmware is provided to you by David TOUTON, [the awesome 3D printing community on Facebook](https://www.facebook.com/groups/molisefirmware), and of course, we can't forget the team Marlin who spent countless days, nights and years building Marlin to where it is today.
