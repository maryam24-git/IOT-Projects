void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("LDR Value: ");
  Serial.println(sensorValue);
  delay(500);
}
