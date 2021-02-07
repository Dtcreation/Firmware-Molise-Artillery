# Molise Firmware 

Téléchargez aussi Molise et son super [fang](#) sur [Thingiverse](https://www.thingiverse.com/thing:4589399)

N'hésitez pas à me soutenir. Payez moi une 🍺 ou un ☕ : [https://paypal.me/dtouton](https://paypal.me/dtouton)

Rejoignez notre groupe facebbok : [Molise Firmware](https://www.facebook.com/groups/molisefirmware)

Les sources pour l'écran TFT sont [disponible sur ce repository](https://github.com/SckyzO/firmware-molise-tft)

## FRENCH

### Qu'est ce que le firmware Molise

Molise est un firmware modifié pour les imprimantes de la marque [Artillery](https://artillery3d.com/). Le firmware support atuellement l'artillery X1 et Genius. 

Le Firmware est découpé en 2
- Pour la carte mère : Marlin
- Pour l'écran TFT : Basé sur le firmware de Bigtreetech. [Sources disponible ici](https://github.com/SckyzO/firmware-molise-tft)

### Version actuelle

Dernière version de Molise __1.2.2__ basée sur [Marlin 2.0.7.2](https://github.com/MarlinFirmware/Marlin/releases/tag/2.0.7.2)

### A propos du Firmware Molise

Voici un listing de ce que propose actuellement le Firmware : 

Le Firmware supporte actuellement le hardware suivant : 

- Drivers TMC 22008 ou 2209 et LV8729
- Carte mère SKR 1.3, 1.4, 1.4 Turbo et MKS SGEN L v1 and v2
- Extruder BMG, Hemera et Matrix
- BlTouch (avec ou sans Waggster Mod)
- TouchMi avec ou sans LED sur X1

Le Firmware apporte les modifications suivantes à Marlin (par rapport à la version stock)
- Auto Bed Leveling with Stock Sensor [plus d'information sur le site 3dprintbeginner](https://3dprintbeginner.com/sidewinder-x1-auto-bed-leveling-stock-sensor/) 
- Graphical LCD (besoin de plus d'explication)
- Sensorless Homing (besoin de plus d'explication)
- HYBRID_THRESHOLD (besoin de plus d'explication)
- Le M600 (permet de changer de couleur en cours de print)
- Mesh Bed Leveling (MBL - Permet de palper manuellement plusieurs points de votre plateau comme un BLTouch le ferait automatiquement)
- Alignement automatique des stepper Z (Z_STEPPER_AUTO_ALIGN)
- Solution au problème de communication d'Octoprint
- Etc…

Le code du ficheir `Configuration.h` a été découpé en 7 sections afin de rendre le code plus lisible. Ainsi, pour les personnes souhaitant compiler le code à partir des sources, le travail sera plus simple. Pour plus d'explication sur la compilation du code, merci de vous reporter à la page du [wiki dédiée](#)

Le firmware Molise 1.2 vous est fourni gratuitement, dans un état « tel quel ». Nous ne pouvons pas être tenus responsables des dommages qu’il pourrait fait à votre imprimante 3D le cas échéant. S’il vous plaît procéder avec prudence.

Pour vous faciliter la tâche, le firmware molise vous est fourni "pré-compilé" pour les 6 cas de figures suivants:
- X1 Stock
- X1 Stock + BLTouch
- X1 Stock + TouchMi
- Genius Stock
- Genius Stock + BLTouch
- Genius Stock + TouchMi


Le Firmware Molise est fourni avec un second firmware, il s'agit du firmware de l'écran TFT. Ce Firmware TFT est basé le firmware Officiel de Bigtreetech avec la prise en charge entre autre des fonctions tactiles suivantes : 
- M600, 
- Babystepping, 
- ABL, 
- Z Offset, 
- PID Auto
- Etc… 

Et le tout préconfiguré pour X1 et Genius, en Français et Anglais

Si vous l'aimez ou si vous souhaitez contribuer à d'autres améliorations de ce firmware, veuillez envisager la possibilité de faire un don à :

https://paypal.me/dtouton

Merci !


### Installation et configuration

Afin de vous aider dans l'installation et la configuration du Firmware, merci de faire un tour sur le [Wiki](#)

#### Créer un Wiki avec les données suivantes 

PROCÉDURES DE MISE À JOUR DE MARLIN FW:

Sur les imprimantes Sidewinder X1 et Genius, le port USB de la carte mère utilisé pour connecter l'imprimante à un PC (par exemple à Octoprint) est câblé à un bus série. Ce bus est également partagé par le TFT et la carte mère. Le partage du bus série ne permet pas de flasher facilement le firmware Marlin en raison de collisions dans le bus.

Deux solutions possibles ont normalement été adoptées pour permettre les mises à jour du firmware Marlin:
1) déconnexion physique du câble série TFT afin que le bus série ne soit plus partagé avec le TFT. Cette solution nécessite de retirer le capot sous le châssis et éventuellement de perdre toute garantie.
2) utiliser un script sous Linux OS essayant de verrouiller le bus série sur le TFT

Ce firmware TFT fournit une troisième solution facile à utiliser pour flasher le firmware Marlin.
Pour flasher le firmware Marlin, suivez les étapes ci-dessous dans le même ordre où elles sont signalées:
1) allumez l'imprimante à partir du bouton d'alimentation principal (à l'arrière de l'imprimante)
2) depuis le TFT, appuyez sur le bouton "Menu-> Paramètres-> Connexion-> Déconnecter". Un fond noir avec un texte demandant de toucher l'écran pour reconnecter le TFT est invité. N'appuyez PAS sur l'écran pour que le TFT continue d'être déconnecté du bus série.
3) à partir du PC, ouvrez l'application que vous utilisez habituellement pour flasher le firmware Marlin.
4) branchez un câble USB du PC au port USB de la carte mère et connectez l'application à l'imprimante
5) suivez les instructions fournies par votre application pour flasher le firmware Marlin
6) Une fois le micrologiciel Marlin flashé, déconnectez l'application de l'imprimante et redémarrez l'imprimante (éteindre et rallumer ou appuyer sur le bouton de réinitialisation du TFT si vous avez un Sidewinder X1 v4)


### Changelog

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

Le firmware Molise 1.2 vous est fourni par David TOUTON, [la géniale communauté d’impression 3D sur Facebook](https://www.facebook.com/groups/molisefirmware), et bien sûr, nous ne pouvons pas oublier l’équipe Marlin qui a passé d’innombrables jours, nuits et années à construire Marlin jusqu’où il est aujourd’hui.



## ENGLISH


TODO