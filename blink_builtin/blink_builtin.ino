
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  for(int i = 0; i < 3; i++){
    blink();
  }
  
  delay(3000);
}

void blink() 
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}
