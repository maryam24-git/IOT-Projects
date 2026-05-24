int temp1Pin = A0;   // LM35 Alternative
int ldrPin = A1;     // LDR
int temp2Pin = A2;   // DHT11 Alternative
int humPin = A3;     // Humidity Emulator
int trigPin = 3;     // Ultrasonic Trigger
int echoPin = 4;     // Ultrasonic Echo

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // 1. Temp Sensor 1 (LM35)
  float temp1 = ((analogRead(temp1Pin) * 5.0 / 1024.0) - 0.5) * 100;
  
  // 2. LDR
  int ldrValue = analogRead(ldrPin);
  
  // 3. Temp Sensor 2 (DHT11)
  float temp2 = ((analogRead(temp2Pin) * 5.0 / 1024.0) - 0.5) * 100;
  
  // 4. Humidity (Potentiometer)
  int humidity = map(analogRead(humPin), 0, 1023, 0, 100);
  
  // 5. Distance
  digitalWrite(trigPin, HIGH); delayMicroseconds(10); digitalWrite(trigPin, LOW);
  float distance = pulseIn(echoPin, HIGH) * 0.034 / 2;

  // Output
  Serial.print("LM35 Temp: "); Serial.print(temp1);
  Serial.print(" C | LDR: "); Serial.print(ldrValue);
  Serial.print(" | DHT11 Temp: "); Serial.print(temp2);
  Serial.print(" C | Hum: "); Serial.print(humidity);
  Serial.print("% | Dist: "); Serial.print(distance);
  Serial.println(" cm");

  delay(2000);
}
