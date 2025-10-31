#include <Adafruit_CircuitPlayground.h>

int value;
int freq;
void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(A3);

  Serial.println(value);

  freq=map(value, 0, 1023, 100, 1000);
  CircuitPlayground.playTone(freq, 1000);
}
