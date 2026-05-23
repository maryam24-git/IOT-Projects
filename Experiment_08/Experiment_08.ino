void setup() {
  pinMode(2, INPUT_PULLUP); // Internal resistor use kar rahe hain
  Serial.begin(9600);
}
void loop() {
  // PULLUP mode mein: button dabane par 0, chhorne par 1 aata hai
  Serial.println(digitalRead(2)); 
  delay(200);
}
