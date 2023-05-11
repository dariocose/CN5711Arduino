#define pinLed  0; // LED on PB0 (pin 5) of ATtiny85 

#define ledOff  0
#define ledOn 250 //255 is the maximum pwm value

int value = 0;  //pwm value

void setup() {
  pinMode(pinLed, OUTPUT);  //setto il pin pwm come uscita
}

void loop() {
  //blink
  analogWrite(pinLed, ledOff);  // Turn off led
  delay(1000);                  // Wait a second
  analogWrite(pinLed, ledOn);   // Turn on led
  delay(1000);                  // Wait a second
  analogWrite(pinLed, ledOff);  //...
  delay(1000);
  analogWrite(pinLed, ledOn);
  delay(1000);

  //dimm
  for (value = ledOn; value > ledOff; value --) {  //decrease the light by decreasing "value"
    analogWrite(pinLed, value);
    delay(20);    
  }

  for (value = ledOff; value < ledOn; value ++) {  //increase the light by increasing "value"
    analogWrite(pinLed, value);
    delay(20);
  }
}