### Arduino CN5711 Led Driver

[Full tutorial](https://www.instructables.com/How-to-Drive-a-Led-With-Arduino-or-Potentiometer-C/ "Full tutorial")

A few months ago I found a [led driver module](https://s.click.aliexpress.com/e/_DEpyKXJ "led driver module") composed of a CN5711 IC, a resistor and a variable resistor.

From the CN5711 datasheet:

> **General Description:** The CN5711 is a current regulation integrated circuit operating from an input voltage of 2.8V to 6V, the constant output current can be set up to 1.5A with an external resistor. The CN5711 is ideal for driving LEDs. [...] The CN5711 adopts the temperature regulation instead of temperature protection function, the temperature regulation can make the LED being turned on continuously in case of high ambient temperature or high voltage drop.[...]
**Applications:** Flashlight, High-brightness LED driver, LED headlights, Emergency lights and lighting [...]
**Features: **Operating Voltage Range: 2.8V to 6V, On-chip Power MOSFET, Low Dropout Voltage: 0.37V @ 1.5A, LED Current up to 1.5A, Output Current Accuracy: ± 5%, Chip Temperature Regulation, Over LED Current Protection [...]


------------



There are 3 modes of operation for this IC:

1. With a PWM signal directly applied to the CE pin, the frequency of the PWM signal should be less than 2KHz
2. With a logic signal applied to the gate of an NMOS (Figure 4)
3. With a potentiometer (Figure 5)

![https://www.instructables.com/How-to-Drive-a-Led-With-Arduino-or-Potentiometer-C/](https://content.instructables.com/FQU/IIKR/LDSTRQIP/FQUIIKRLDSTRQIP.png?auto=webp&frame=1&fit=bounds&md=ebbb943babbc3c60d9e653b4a0c4c9d5 "https://www.instructables.com/How-to-Drive-a-Led-With-Arduino-or-Potentiometer-C/")

[![](https://content.instructables.com/FNN/6XYL/LDSTRQHP/FNN6XYLLDSTRQHP.png?auto=webp&frame=1&fit=bounds&md=72d85cabc86a3a250cd0c454676f869b)](https://www.instructables.com/How-to-Drive-a-Led-With-Arduino-or-Potentiometer-C/)

[![](https://content.instructables.com/FQB/DP5N/LDSTRQHO/FQBDP5NLDSTRQHO.png?auto=webp&frame=1&fit=bounds&md=f567eb9bad5edb9c32272c499861a215)](https://www.instructables.com/How-to-Drive-a-Led-With-Arduino-or-Potentiometer-C/)


Using the PWM signal it is very easy to drive the IC with a microcontroller like [Arduino](https://s.click.aliexpress.com/e/_DFI8pE1 "Arduino"), [Esp32](https://s.click.aliexpress.com/e/_Dem7d77 "Esp32") and [AtTiny85](https://s.click.aliexpress.com/e/_DEYHbJ7 "AtTiny85").

[![](https://content.instructables.com/FBG/HE7S/LDSTRW43/FBGHE7SLDSTRW43.png?auto=webp&frame=1&fit=bounds&md=4ca2944fc81de7a9467b3b567b3fc5e1)](https://www.instructables.com/How-to-Drive-a-Led-With-Arduino-or-Potentiometer-C/)

In the "include" folder you find the working code for Arduino, Esp32 and Attiny85.
The project is built with Platformio but you can copy and paste the code into the Arduino ide.