int PULSADOR = 2;
int LED = 7;  
bool estadoLED = LOW;

void setup() {
  pinMode(PULSADOR, INPUT_PULLUP); 
  pinMode(LED, OUTPUT);
}

void loop() {

  
  if (digitalRead(PULSADOR) == LOW) {

    estadoLED = !estadoLED;
    digitalWrite(LED, estadoLED);

    
    while (digitalRead(PULSADOR) == LOW) {
      // espera
    }

    delay(50); 
  }
}
