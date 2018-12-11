# simple esp8266 :signal_strength: internet status led :vertical_traffic_light:
eps8266 internet status led using wemos d1 mini (esp8266) and ws2812 leds)

I got tired of my girlfriend asking if the internet is working :grinning: so i created this simple device.

The wemos Pings google.com every 10 seconds if it can the leds turn green if it fails the leds turns red.


### hardware :nut_and_bolt: :
##### BOM :clipboard::
1. Wemos D1 mini (or similar esp8266 based device)
2. ws2812 (or similar)

##### Connections :electric_plug: (easy): 

| Wemos | ws2812 |
| ------------- | ------------- |
| 5v | 5v |
| GND | GND |
| D4 | Din |

![Alt text](https://i.imgur.com/pfbCADV.png?raw=true "Title")


### software :floppy_disk: :

1. Enter http://arduino.esp8266.com/stable/package_esp8266com_index.json into Additional Board Manager URLs field. You can add multiple URLs, separating them with commas.
2. Open Boards Manager from Tools > Board menu and install esp8266 platform (and don't forget to select your ESP8266 board from Tools > Board menu after installation).
3. Open the Library Manager and search for "NeoPixelBus by Makuna" and install 
4. Download :arrow_down:: https://github.com/dancol90/ESP8266Ping and extract to arduino libraries folder.
5. Download :arrow_down:: https://github.com/beukhof1/simple-eps8266-internet-status-led and extract to arduino sketch folder
6. Open the .ino
7. Edit the following: 
    * ssid
    * password
    * pinout 
    * number of leds
8. Flash :zap:
9. profit! :v:


### Tips:
- keep the number of pixels under 24 so you can it can be powered over the microusb port.
- You can use any D port on the device not just D4.
- Stay in school. :grin:
