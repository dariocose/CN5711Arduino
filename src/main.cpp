#include <Arduino.h>

#define ARDUINO__
//#define ESP32__
//#define ATTINY85__

#ifdef ARDUINO__
  #include "cn5711_Arduino.h"
#endif

#ifdef ESP32__
  #include "cn5711_Esp32.h"
#endif

#ifdef ATTINY85__
  #include "cn5711_Attiny85.h"
#endif