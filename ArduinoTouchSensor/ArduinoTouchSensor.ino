#include <Adafruit_CircuitPlayground.h>
//Code for a touch sensor. Depending on the Connection Pad that is touched, a color willl flash randomly across all the Neopixels.
int value;
int value2;
int value3;
int a;
int b;
int c;
void setup() {
  CircuitPlayground.begin();


}

void loop() {
  CircuitPlayground.clearPixels();
  // put your main code here, to run repeatedly:
  value = analogRead(A3);
  value2 = analogRead(A2);
  value3 = analogRead(A1);
  
  //these lines make it so that the corresponding color is randomly flashed on the neopixels
  a=map(value, 0, 1023, 100, 1000);
  b=map(value2, 0, 1023, 100, 1000);
  c=map(value3, 0, 1023, 100, 1000);

  //The lines below indicate what color flashes on the neopixels (in order it is red, green, and blue)
  CircuitPlayground.setPixelColor(a, 255, 0, 0);
  CircuitPlayground.setPixelColor(b, 0, 255, 0);
  CircuitPlayground.setPixelColor(c, 0, 0, 255);
 

 
}