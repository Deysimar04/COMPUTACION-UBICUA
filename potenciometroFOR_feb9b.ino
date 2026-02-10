int pinLED = 3;

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {

  // Aumenta brillo
  for (int PWM = 0; PWM <= 255; PWM++) {
    analogWrite(pinLED, PWM);
    delay(10);
  }

  // Disminuye brillo
  for (int PWM = 255; PWM >= 0; PWM--) {
    analogWrite(pinLED, PWM);
    delay(10);
  }
}
