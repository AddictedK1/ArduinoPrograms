byte led_pin = 11;

void setup() {
 pinMode(led_pin, OUTPUT);
}

void loop() {
  for(int bright = 0; bright <= 255; bright = bright + 5)  {
    analogWrite(led_pin, bright);
    delay(35);
    }
  for(int bright = 255; bright >= 0; bright = bright - 5)  {
    analogWrite(led_pin, bright);
    delay(35);
    }
  delay(1000);
}
