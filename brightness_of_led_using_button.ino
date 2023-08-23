byte led_pin = 3;
byte button_up = 7;
byte button_down = 8;
int brightness = 0;
void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(button_up, INPUT);
  pinMode(button_down, INPUT);
}

void loop() {
  if(digitalRead(button_up) == HIGH) {
    brightness = brightness + 10;
    delay(300);
    analogWrite(led_pin, brightness);
    if(brightness > 250)  {
       brightness = 0;
      }
    }
  if(digitalRead(button_down) == HIGH) {
    brightness = brightness - 10;
    delay(300);
    analogWrite(led_pin, brightness);
    if(brightness < 0)  {
       brightness = 0;
      }
    }
}     
