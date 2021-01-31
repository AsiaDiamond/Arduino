
#include <Wire.h>
#include <Adafruit_AMG88xx.h>

Adafruit_AMG88xx amg;

float pixels[AMG88xx_PIXEL_ARRAY_SIZE];

void setup() {
  Serial.begin(9600);
  //Serial.println(F("AMG88xx pixels"));
  pinMode(13, OUTPUT);

  bool status;

  // default settings
  status = amg.begin();
  if (!status) {
    Serial.println("Could not find a valid AMG88xx sensor, check wiring!");
    while (1);
  }

  //Serial.println("-- Pixels Test --");

  //Serial.println();

  delay(100); // let sensor boot up
}


void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  //read all the pixels
  amg.readPixels(pixels);
  /*
  Serial.print("[");
  for (int i = 1; i <= AMG88xx_PIXEL_ARRAY_SIZE; i++) {
    Serial.print(pixels[i - 1]);
    Serial.print(", ");
    if ( i % 8 == 0 ) Serial.println();
  }
  Serial.println("]");
  */
  String startBracket = "[";
  String stopBracket = "]";
  String commaSign = ",";
  String joinedString = pixels[27]+commaSign+pixels[28]+commaSign+pixels[35]+commaSign+pixels[36];
  Serial.println(joinedString);
  //Serial.println();

  //delay a second
  delay(1000);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second
}
