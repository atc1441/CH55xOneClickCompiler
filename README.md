# CH55xOneClickCompiler
This Compile example is Compatible with the WCH CH551, CH552, CH553 and CH554 Microcontroller(https://lcsc.com/products/WCH_11013.html) and uses the SDCC(http://sdcc.sourceforge.net/) open source compiler.

The Example itself will just toggle every pin of the CH55x Microcontroller.

for an CH559 Example see here:(https://github.com/atc1441/CH559sdccUSBHost)

### You can support my work via paypal: https://paypal.me/hoverboard1 this keeps projects like this comming.

# This is made to get quickly started no need to install any software.
Just open Compile.bat and it will compile your project with the included SDCC, after that it will also try to flash the CH55x Chip via usb with my Python chflasher(https://github.com/atc1441/chflasher), Please install the libusb-win32 driver with the zadig tool ( https://zadig.akeo.ie/ ) to enable access to usb for the tool.

If you want to add additional .c files also add them to the Compile.bat, my suggestion is to make one copy of the whole folder per project. 


Explanation video of the CH55x Microcontroller:(click on it)

[![YoutubeVideo](https://img.youtube.com/vi/IDCQNa2ywiM/0.jpg)](https://www.youtube.com/watch?v=IDCQNa2ywiM)

