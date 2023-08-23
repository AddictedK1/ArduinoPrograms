byte led_1 = 2;
byte led_2 = 3;
byte led_3 = 4;
byte led_4 = 5;
byte led_5 = 6;
byte led_6 = 7;
byte warning_led = 8;
int echo = 9;
int trigger = 10;
int duration;
int distance;

void setup()  {
  pinMode(led_1, OUTPUT);  
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(warning_led, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  Serial.begin(9600);
}

void loop()  {
  digitalWrite(trigger, LOW);      // THIS
  delay(2);                        // WILL
  digitalWrite(trigger, HIGH);     // CREATE
  delay(10);                       // AN
  digitalWrite(trigger, LOW);      // PULSE OF 10 MILLISECONDS

  duration = pulseIn(echo, HIGH);
  distance = (duration * 0.034) / 2;
  Serial.println(distance);
  delay(100);

  if(distance <= 50)  {
    digitalWrite(led_1, HIGH);
    }
  if(distance <= 40)  {
    digitalWrite(led_2, HIGH);  
    }
  if(distance <= 30)  {
    digitalWrite(led_3, HIGH);
    }
  if(distance <= 20)  {
    digitalWrite(led_4, HIGH);  
    }
  if(distance <= 15)  {
    digitalWrite(led_5, HIGH);
    }
  if(distance <= 10)  {
    digitalWrite(led_6, HIGH);  
    }
  if(distance <= 6)  {
    Serial.println("you'r way too clode DAWG, get out of here..  :|");
    delay(100);
    digitalWrite(warning_led, HIGH);
    delay(50);
    digitalWrite(warning_led, LOW);
    delay(10);

    }
  
  
  if(distance >= 50)  {
    digitalWrite(led_1, LOW);
    }
  if(distance >= 40)  {
    digitalWrite(led_2, LOW);  
    }
  if(distance >= 30)  {
    digitalWrite(led_3, LOW);
    }
  if(distance >= 20)  {
    digitalWrite(led_4, LOW);  
    }
  if(distance >= 15)  {
    digitalWrite(led_5, LOW);
    }
  if(distance >= 10)  {
    digitalWrite(led_6, LOW);  
    }

}
