
# Receiving DMX with Arduinos

This folder explains how to recieve DMX on Arduino Microcontrollers.

**Libary:** https://github.com/mathertel/DMXSerial  
**Compatible boards:** https://github.com/mathertel/DMXSerial/blob/master/README.md#supported-boards-and-processors

## Examples
## Arduino Nano
**Example Code:** https://github.com/blockiyt/Microcontroller-DMX/tree/main/Arduino/Arduino%20Nano/Examples

![Fritzing Wiring](https://github.com/blockiyt/Microcontroller-DMX/blob/main/Arduino/Arduino%20Nano/Arduino_Nano_DMX_RS485.png?raw=true)
**Wiring:**
| RS485       | Arduino Nano | DMX |
|-------------|--------------|-----|
| VCC (PIN 8) | 5V           |     |
| GND (PIN 5) | GND          | -   |
| RO (PIN 1)  | RX0          | -   |
| RE (PIN 2)  | GND          | -   |
| DE (PIN 3)  | GND          | -   |
| DI (PIN 4)  | -            | -   |
| A (PIN 7)   | -            | 3   |
| B (PIN 8)   | -            | 2   |
| -           | GND          | 1   |
