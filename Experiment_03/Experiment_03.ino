int potPin = A0; // Potentiometer A0 pin in middle

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(potPin); // You will get values in between 0 to 1023 
  
  Serial.print("Analog Value: ");
  Serial.println(sensorValue);
  
  delay(100); // Wait
}
