![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)

<img src="https://github.com/pixelEDI/ESP32_ble_laserpointer/blob/98e361a5c8090f8a5223e96744d5e7a8cad44f0a/collage.jpg" width="400">


## General info 

The ultimate gadget for your presentations: A ESP32 and the magic of the BleKeyboard library (https://github.com/T-vK/ESP32-BLE-Keyboard )

Navigate through your slides effortlessly as you wield the ESP32, sending "Enter" key commands via Bluetooth to your PC.

But wait, there's more! We've added the perfect gimik, - a laser pointer nestled within the presenter. With just a short click, the "Enter" key dances across the screen, moving you one slide closer to presentation perfection. And when you need to accentuate a point or highlight critical details, a long click activates the laser pointer, allowing you to cast a spotlight on brilliance.

## Code
* We use a selfmade Class for controlling the Button clicks
* The BleKeyboard library takes care of the bluetooth connection and pairing
* A short click <500ms will send a KeyStroke to the PC
* A long click >500ms will start the laserpoint

## Hardware
* ESP32-C3 XIAO
* Laserpointer
* LiPo Batterie


<img src="https://github.com/pixelEDI/ESP32_ble_laserpointer/blob/98e361a5c8090f8a5223e96744d5e7a8cad44f0a/wiring.jpg" width="400">


## 3D Case

https://www.thingiverse.com/thing:6212490


You like it? Then I would be very happy if you treat me to a coffee on [ko-fi.com/pixeledi](https://www.ko-fi.com/pixeledi)
