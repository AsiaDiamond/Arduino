#include <SoftwareSerial.h>
SoftwareSerial ArduinoSerial(2,3);
int i = 0;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(115200);
  ArduinoSerial.begin(4800);
}

void loop() {
  ArduinoSerial.println(i);
  i++;
}
