byte led_1 = 2;
byte led_2 = 3;
byte led_3 = 4;
byte led_4 = 5;
byte led_5 = 6;
byte led_6 = 7;
byte button_up = 11;
byte button_down = 10;
int count = 1;

void setup()  {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(button_up, INPUT_PULLUP);
  pinMode(button_down, INPUT_PULLUP);

  for(int j=0; j<=2; j++)  {
      for(int i=2; i<=7; i++)  {
      digitalWrite(i, HIGH);
      delay(30);
      digitalWrite(i, LOW);
      delay(30);
    }
  for(int i=7; i>=2; i--)  {
      digitalWrite(i, HIGH);
      delay(30);
      digitalWrite(i, LOW);
      delay(30);
    }
    }
  for(int i=2; i<=7; i++)  {
      digitalWrite(i, HIGH);
      delay(30);
      digitalWrite(i, LOW);
      delay(30);
    }
  for(int k=1; k<=4; k++)  {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, HIGH);
    digitalWrite(led_3, HIGH);
    digitalWrite(led_4, HIGH);
    digitalWrite(led_5, HIGH);
    digitalWrite(led_6, HIGH);
    delay(200);
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
    digitalWrite(led_4, LOW);
    digitalWrite(led_5, LOW);
    digitalWrite(led_6, LOW);
    delay(50);
    }
}

void loop()  {
//  int count = 1;
  int up;
  int down;
  
  up = digitalRead(button_up);
  down = digitalRead(button_down);

  if(up == 0)  {
    count = count + 1;
    delay(200);
    }
  if(down == 0)  {
    count = count - 1;
    delay(200);
    }
  if(count > 6)  {
    count = 1;
    }
  if(count < 0)  {
    count = 6;
    }
  switch(count)  {
    case 1:
      digitalWrite(led_1, HIGH);
      digitalWrite(led_6, LOW);
      digitalWrite(led_2, LOW);
      break; 
    case 2:
      digitalWrite(led_2, HIGH);
      digitalWrite(led_3, LOW);
      digitalWrite(led_1, LOW);
      break;
    case 3:
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, LOW);
      digitalWrite(led_2, LOW);
      break;
    case 4:
      digitalWrite(led_4, HIGH);
      digitalWrite(led_5, LOW);
      digitalWrite(led_3, LOW);
      break;
    case 5:
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, LOW);
      digitalWrite(led_4, LOW);
      break;
    case 6:
      digitalWrite(led_6, HIGH);
      digitalWrite(led_1, LOW);
      digitalWrite(led_5, LOW);
      break;
    
    }
}
