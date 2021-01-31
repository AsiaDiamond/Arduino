

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  velocity(10,20);

}

void velocity(float s, float t){
  float v = s/t;
  Serial.println(v);
  delay(1000);
  
}

