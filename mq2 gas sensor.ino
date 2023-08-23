byte mq2 = A0;

void setup()  {
  Serial.begin(9600);    
}

void loop()  {
  int reading = analogRead(mq2);
  Serial.println(reading);
  delay(200);
}
