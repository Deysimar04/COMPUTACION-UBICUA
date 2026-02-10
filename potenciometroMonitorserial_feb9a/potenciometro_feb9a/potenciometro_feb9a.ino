int pinLED = 3;
int pinPOT = A0;

void setup() {
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);   // Inicia comunicación serial
}

void loop() {
  int valor = analogRead(pinPOT);              // 0 - 1023
  int PWM = map(valor, 0, 1023, 0, 255);        // 0 - 255

  analogWrite(pinLED, PWM);

  Serial.print("Potenciometro: ");
  Serial.print(valor);
  Serial.print("  |  PWM: ");
  Serial.println(PWM);

  delay(200);
}
