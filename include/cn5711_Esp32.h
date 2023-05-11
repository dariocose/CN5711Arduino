#define pinLed 14  
#define freq 1800 		//pwm frequency
#define ledChannel 0
#define resolution 8	//8 bit resolution (0 - 255)

#define ledOff  0
#define ledOn 250 //255 is the maximum pwm value

int value = 0;  //pwm value

void setup() {
   ledcSetup(ledChannel, freq, resolution); //configure pwm
   ledcAttachPin(ledPin, ledChannel);		//attach channel to pin
 }

 void loop(){
  //blink
  ledcWrite(ledChannel, ledOff);  // Turn off led
  delay(1000);                  // Wait a second
  ledcWrite(ledChannel, ledOn);   // Turn on led
  delay(1000);                  // Wait a second
  ledcWrite(ledChannel, ledOff);  //...
  delay(1000);
  ledcWrite(ledChannel, ledOn);
  delay(1000);
	
  //dimm
  for (value = ledOn; value > ledOff; value --) {  //decrease the light by decreasing "value"
    ledcWrite(ledChannel, value);
    delay(20);    
  }

  for (value = ledOff; value < ledOn; value ++) {  //increase the light by increasing "value"
    ledcWrite(ledChannel, value);
    delay(20);
  }
}
