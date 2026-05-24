int sensorPin = A0;   // The analog pin where the potentiometer wiper is connected
int value = 0;        // Variable to store the raw ADC value

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
}

void loop() {
  // 1. Read the raw analog value from the potentiometer (0 - 1023)
  value = analogRead(sensorPin);
  
  // 2. Convert the raw value into Voltage (0.0V - 5.0V)
  // We use 5.0 and 1023.0 to ensure floating-point calculation
  float voltage = value * (5.0 / 1023.0);
  
  // 3. Print the result to the Serial Monitor
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");
  
  // Wait for 500 milliseconds (0.5 seconds) to make the readings readable
  delay(500);
}
