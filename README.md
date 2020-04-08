# mbedos2-cli-ps2controller-host

mbed host application for PS2 controller

## Requirement

- LPC1768
- Mbed CLI platform for windows (see [wiki](https://github.com/bigw00d/research-mcu-development-platform/wiki/Mbed-CLI))
- USB Connector (Mini B)

##  Pin connections

|USB Connector  |LPC1768  |Note  |
|---|---|---|
|+5V  |VIN  ||
|GND  |GND  ||
|D+  | D+ ||
|D-  | D- ||

### Quick start 

1. build & upload project
```txt
C:\WorkSpace\mbed-repo\mbedos2-cli-example-basic>mbed compile -m LPC1768 -t GCC_ARM
C:\WorkSpace\mbed-repo\mbedos2-cli-example-basic>copy BUILD\LPC1768\GCC_ARM\mbedos2-cli-ps2controller-host D:\
```
or
```txt
C:\WorkSpace\mbed-repo\mbedos2-cli-example-basic>mbed compile -c -m LPC1768 -t GCC_ARM
C:\WorkSpace\mbed-repo\mbedos2-cli-example-basic>copy BUILD\LPC1768\GCC_ARM\mbedos2-cli-ps2controller-host D:\
```
(clean build)

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

