const int LEDpin = 9;
const int buttonpin = 2;
int state;

void setup()
{
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonpin, INPUT_PULLUP);
}

void loop()
{
  state = digitalRead(buttonpin);
  if(state == HIGH){
    digitalWrite(LEDpin, LOW);
  }
  else{
    digitalWrite(LEDpin, HIGH);
}
}
