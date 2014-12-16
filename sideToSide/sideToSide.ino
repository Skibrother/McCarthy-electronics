//Will McCarthy
//LED Blink

void blink()  {
for(int i = 12; i >6; i--){ 
  digitalWrite(i, HIGH);
  delay(1000);
  digitalWrite(i, LOW);
}
for(int i = 6; i <14; i++){
  digitalWrite(i, HIGH);
  delay(1000);
  digitalWrite(i, LOW);
}
}
  

void setup()  {
  for(int i = 6; i<14; i++){
  pinMode(i, OUTPUT);
  }
}

void loop()  {
  blink();
}
