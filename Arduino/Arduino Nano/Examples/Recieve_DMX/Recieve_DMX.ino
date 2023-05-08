#include <DMXSerial.h>

//dmx address
const int dmxAdress = 1; 

void setup() {
  DMXSerial.init(DMXReceiver);
}


void loop() {
  //dmx adress 1
  DMXSerial.read(dmxAdress) //value from 0-255

  //dmx adress 2
  DMXSerial.read(dmxAdress + 1) //value from 0-255

  //...
}
