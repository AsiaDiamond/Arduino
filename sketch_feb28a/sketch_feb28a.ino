int MQ2pin = 36;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int mq2Val = analogRead(MQ2pin);
  Serial.println(mq2Val);
}
