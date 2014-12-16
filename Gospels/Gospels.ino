String gospels [] = {"Mathew", "Mark", "Luke", "John"};

void setup() {
  Serial.begin(9600);
  
  for (int i = 0; i < 4; i++) {
    Serial.println(gospels[i]);
  }
}

void loop() {
  
}
