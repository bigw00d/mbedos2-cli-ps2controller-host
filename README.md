# mbedos2-cli-ps2controller-host

mbed host application for PS2 controller

## Requirement

- LPC1768
- Mbed CLI platform for windows (see [wiki](https://github.com/bigw00d/research-mcu-development-platform/wiki/Mbed-CLI))
- USB Connector (Mini B)

##  Pin connections

|Controller  |LPC1768  |Note  |
|---|---|---|
|Data | p6 |insert 1k pull-up to 5V|
|CMD  | p5 ||
|GND  | GND ||
|3V3  | 3V3 ||
|SEL  | P21 ||
|CLK  | p7 ||

### Quick start 

1. build & upload project
```txt
C:\WorkSpace\mbedos2-cli-ps2controller-host>mbed config root .
C:\WorkSpace\mbedos2-cli-ps2controller-host>mbed compile -m LPC1768 -t GCC_ARM
C:\WorkSpace\mbedos2-cli-ps2controller-host>copy BUILD\LPC1768\GCC_ARM\mbedos2-cli-ps2controller-host.bin D:\
```
or
```txt
C:\WorkSpace\mbedos2-cli-ps2controller-host>mbed config root .
C:\WorkSpace\mbed-repo\mbedos2-cli-ps2controller-host>mbed compile -c -m LPC1768 -t GCC_ARM
C:\WorkSpace\mbed-repo\mbedos2-cli-ps2controller-host>copy BUILD\LPC1768\GCC_ARM\mbedos2-cli-ps2controller-host.bin D:\
```
* '-c' is clean build option
* You only need to do  'mbed config root .' the first time you use.

### Note 

```txt
C:\WorkSpace\mbed-repo\mbedos2-cli-example-basic>mbed deploy
```
is command Extracting USBDevice from web.

### Related Links

* [PS_PAD(mbed library for PS controller)](https://os.mbed.com/users/okini3939/code/PS_PAD/).
* [USBMouseKeyboard](https://os.mbed.com/users/samux/code/USBMouseKeyboard_HelloWorld/)

### License and contributions

The software is provided under Apache-2.0 license. Contributions to this project are accepted under the same license. Please see contributing.md for more info.

This project contains code from other projects. The original license text is included in those source files. They must comply with our license guide.

