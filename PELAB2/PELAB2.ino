void setup()
{
  pinMode(10, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int SensorValue = analogRead(A1);
  float temperature = SensorValue * (4.88/10) - 50; 
  Serial.println(temperature);
  
  if(temperature >=0 && temperature <=25){
   digitalWrite(10, HIGH);
   delay(3000);
   digitalWrite(10,LOW);
   delay(3000);
  }
  else if( temperature >=26 && temperature <=100){
   digitalWrite(10, HIGH);
   delay(1000);
   digitalWrite(10,LOW);
   delay(1000);
  }
}