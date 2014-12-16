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
  
void strobe()  {
 int rand = (random(9)+5);
 for(int i = 0; i <1000; i++){
  rand = (random(8)+6);
  digitalWrite(rand, HIGH);
  delay(10);
  digitalWrite(rand, LOW);
  }
}

void fillFromOutside(){
 for(int i = 0; i < 4; i++){
   digitalWrite((i+6), HIGH);
   digitalWrite((13-i), HIGH);
   delay(500);
 }  
  for(int i = 0; i <4; i++){
   digitalWrite((i+6), LOW);
   digitalWrite((13-i), LOW);
   delay(500);
 } 
  
}

void allFlash()  {
 for(int i = 6; i < 14; i++){
  digitalWrite(i, HIGH);
 } 
 delay(250);
 for(int i = 6; i < 14; i++){
  digitalWrite(i, LOW);
 }
 delay(250);
}

void intervalFlash(){
  for(int z = 0; z < 10; z++){ 
    for(int i = 6; i < 13; i=i+2){
        digitalWrite(i, HIGH);
        digitalWrite(i+1, LOW);
   } 
     delay(500);
     for(int i = 6; i < 13; i=i+2){
        digitalWrite(i, LOW);
        digitalWrite(i+1, HIGH);
     } 
     delay(500);
  }
   for(int i = 6; i < 14; i++){
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
  strobe();
  fillFromOutside();
  allFlash();
  intervalFlash();
}
