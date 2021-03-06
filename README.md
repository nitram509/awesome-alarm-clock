Awesome Alarm Clock
===================

Feature
-------

* two alarm timer
* two independant sounds, one for each
* individual sounds via MP3 configurable
* battery power, in case of power loss
* fun/pet project ;-)

Required Arduino software libraries
-----------------------------------

* 7-Segment LED HT16K33 Backpack
   * https://github.com/adafruit/Adafruit_LED_Backpack
   * https://github.com/adafruit/Adafruit-GFX-Library
* DS3231
   * https://github.com/JChristensen/DS3232RTC
* DFPlayer Mini
   * https://github.com/DFRobot/DFPlayer-Mini-mp3


BOM - bill of materials
-----------------------

* [1.2' 4 Digit 7-segment LED display](https://www.adafruit.com/products/1270)
   * color red
   * based on HT16K33 chip
   * uses i2c
* [DS3231 real time clock](http://www.ebay.de/itm/111982694049)
   * AT24C32
   * battery powered
   * uses i2c
   * capable to cascade with more i2c devices
* [DFPlayer Mini - MP3Player](http://www.ebay.de/itm/172128870456)
   * incl. amplifier
   * provides sd-card slot for playing mp3 files
   * documentation http://www.dfrobot.com/wiki/index.php/DFPlayer_Mini_SKU:DFR0299
* [Plastic housing](http://www.ebay.de/itm/361554581903)
   * 145x70x48 mm

License
-------

![CC BY-SA](http://mirrors.creativecommons.org/presskit/buttons/88x31/png/by-sa.png)

[Creative Commons Attribution-ShareAlike 4.0](https://creativecommons.org/licenses/by-sa/4.0/legalcode)
