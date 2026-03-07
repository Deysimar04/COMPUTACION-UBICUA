int sensorPin = A0;
int ledPin = 9;
float temperatura;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  int valor = analogRead(sensorPin);
  float voltaje = valor * (5.0 / 1023.0);
  temperatura = voltaje * 100;

  Serial.print("Temperatura: ");
  Serial.println(temperatura);

  if (temperatura > 23) {   // umbral más bajo
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  }

  delay(300);
}
