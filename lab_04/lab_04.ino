int sensorValue = 0;

void setup() {
 Serial.begin(9600); 
  
}

void loop() {
 sensorValue = analogRead(0); 
 tone(13, sensorValue*9, 1000/60);
 //delay(1);
 Serial.println(sensorValue*2);
}
