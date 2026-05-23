int enA = 10;
int in1 = 8;
int in2 = 7;

void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  // Motor direction
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void loop()
{
  // Slow speed
  analogWrite(enA, 80);
  delay(2000);

  // Medium speed
  analogWrite(enA, 150);
  delay(2000);

  // Full speed
  analogWrite(enA, 255);
  delay(2000);
}

