int potPin = A0; // Potentiometer ki middle pin A0 par

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(potPin); // 0 se 1023 tak value milegi
  
  Serial.print("Analog Value: ");
  Serial.println(sensorValue);
  
  delay(100); // Thoda ruk kar read karein
}
