byte echo = 9;
byte trigger = 10;
int duration;
int distance;

void setup()  {
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);  
  Serial.begin(9600);
}

void loop()  {
  digitalWrite(trigger, LOW);     //THIS
  delay(2);                       //WILL
  digitalWrite(trigger, HIGH);    //CREATE
  delay(10);                      //AN
  digitalWrite(trigger, LOW);     //PULSE
 
  duration = pulseIn(echo, HIGH);
  distance = (duration * 0.034) / 2;
  Serial.println(distance); 
  delay(100);
}
