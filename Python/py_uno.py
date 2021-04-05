from pyfirmata import Arduino, util
board = Arduino('/dev/cu.usbmodem144201') #COM PORT UNO IS CONNECTED TO ON YOUR COMPUTER
import time
it = util.Iterator(board)
it.start()

analog0 = board.get_pin('a:0:i') #H
analog1 = board.get_pin('a:1:i') #T
analog2 = board.get_pin('a:2:i') #L
while(1):
    time.sleep(1)
    h = analog0.read()
    t = analog1.read()
    l = analog2.read()
    print("Temp:{}, Humid:{}, Luminus:{}".format(t,h,l))

# include <Firmata.h>
# include "dht.h"

byte analogPin;

void analogWriteCallback(byte pin, int value)
{
  pinMode(pin, OUTPUT);
  analogWrite(pin, value);
}

// void analogRead_call(int analogPin){
//   if(analogPin == 0){
//     Firmata.sendAnalog(analogPin, 500);
//   }else{

//   }
// }

void setup()
{
  Firmata.setFirmwareVersion(FIRMATA_MAJOR_VERSION, FIRMATA_MINOR_VERSION);
  Firmata.attach(ANALOG_MESSAGE, analogWriteCallback);
  Firmata.begin();
}

void loop()
{
  while (Firmata.available()) {
    Firmata.processInput();
  }
  
  DHT.read11(dht_apin);
  
  for (analogPin = 0; analogPin < TOTAL_ANALOG_PINS; analogPin++) {
    if(analogPin == 0){
      Firmata.sendAnalog(analogPin, DHT.humidity));
    }else if(analogPin == 1){
      Firmata.sendAnalog(analogPin, DHT.temperature));
    }else{
      Firmata.sendAnalog(analogPin, analogRead(analogPin));
    }
  }
}