int PULSADOR = 2; 
int LED = 3; 
 
void setup() { 
  pinMode(PULSADOR, INPUT_PULLUP);
  pinMode(LED, OUTPUT); 
} 
 
void loop() { 
  if (digitalRead(PULSADOR) == HIGH) { 
    digitalWrite(LED, HIGH); 
  } else { 
    digitalWrite(LED, LOW); 
  } 
}