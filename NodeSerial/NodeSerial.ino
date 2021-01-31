#include <SoftwareSerial.h>
SoftwareSerial NodeSerial(D2,D3);

void setup() {

  Serial.begin(115200);
  NodeSerial.begin(4800);
}

void loop() {
  while(NodeSerial.available()>0){
    float val = NodeSerial.parseFloat();
    if(NodeSerial.read()== '\n'){
      Serial.println(val);
    }
    Serial.println(val);
  }
delay(100);
}
