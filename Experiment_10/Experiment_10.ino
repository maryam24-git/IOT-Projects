int tempPin = A1; 
int value;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(tempPin);
  
// Map the 0-1023 sensor range to a 0-100 degree temperature scale.
  temperature = map(value, 0, 1023, 0, 100); 
  
  Serial.print("Simulated Temp: ");
  Serial.print(temperature);
  Serial.println(" C");
  
  delay(1000);
}
