//Will McCarthy
//LED Blink

void blink()  {
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);  
}
void blinkGreen()  {
  delay(1000); 
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
}
  

void setup()  {
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()  {
  blink();
  blinkGreen();
}
