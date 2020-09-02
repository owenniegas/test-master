int movement = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(11, INPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  movement = digitalRead(4);
  delay(2000);
  if (movement == HIGH) {
    tone(50, 100, 500);
  } else {
    digitalWrite(11,LOW);
  }
  if (movement == HIGH) {
    digitalWrite(10,HIGH);
  } else {
    digitalWrite(10,LOW);
   }
}