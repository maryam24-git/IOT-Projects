void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(A0);
  float voltage = reading * (5.0 / 1024.0);
  float temperatureC = (voltage - 0.5) * 100;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  
  delay(1000);
}
