void setup()
{
    pinMode(12,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(1,OUTPUT);
}

void loop()
{
    digitalWrite(12,HIGH);
    delay(2000);//wait for 2000 milliseconds
    digitalWrite(12,LOW);
    delay(1000);//wait for 1000 milliseconds
    digitalWrite(11,HIGH);
    delay(3000);//wait for 3000 milliseconds
    digitalWrite(11,LOW);
    delay(1000);//wait for 1000 milliseconds
    digitalWrite(10,HIGH);
    delay(4000);//wait for 4000 milliseconds
    digitalWrite(10,LOW);
    delay(1000);//wait for 1000 milliseconds
    digitalWrite(3,HIGH);
    delay(2000);//wait for 2000 milliseconds
    digitalWrite(3,LOW);
    delay(1000);//wait for 1000 milliseconds
    digitalWrite(2,HIGH);
    delay(3000);//wait for 3000 milliseconds
    digitalWrite(2,LOW);
    delay(1000);//wait for 1000 milliseconds
    digitalWrite(1,HIGH);
    delay(4000);//wait for 4000 milliseconds
    digitalWrite(1,LOW);
    delay(1000);//wait for 1000 milliseconds
}