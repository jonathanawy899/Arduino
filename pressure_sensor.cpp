int potPin = 3;
int ledPin = 9;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(potPin);
  Serial.println(sensorValue, DEC);

  /*sensorValue = sensorValue/4;
  analogWrite(ledPin, sensorValue);*/
  delay(200);
}