void setup() {
  pinMode(13, OUTPUT);   // pin 13 como salida
}

void loop() {
  digitalWrite(13, HIGH); // pin 13 a nivel alto (LED encendido)
  delay(2000);            // demora de 1.2 segundos

  digitalWrite(13, LOW);  // pin 13 a nivel bajo (LED apagado)
  delay(2000);            // demora de 1.2 segundos
}
