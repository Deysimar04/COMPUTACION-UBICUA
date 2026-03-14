// Librería para usar el sensor DHT11
#include <Bonezegei_DHT11.h>

// Librería I2C
#include <Wire.h>

// Librería LCD
#include <LiquidCrystal_I2C.h>

// Sensor DHT11 en pin 8 (aunque no usaremos humedad)
Bonezegei_DHT11 dht(8);

// LCD
LiquidCrystal_I2C lcd(0x27,16,2);

// Pin del LM35
int pinLM35 = A0;

void setup() {

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Hola profe");

  delay(2000);
  lcd.clear();
}

void loop() {

  // Leer temperatura del LM35
  int valor = analogRead(pinLM35);

  float voltaje = valor * (5.0 / 1023.0);

  float temperatura = voltaje * 100;

  // Mostrar en monitor serial
  Serial.print("Temperatura LM35: ");
  Serial.print(temperatura);
  Serial.println(" C");

  // Mostrar en LCD
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Temperatura LM35:");

  lcd.setCursor(0,1);
  lcd.print(temperatura);
  lcd.print(" C");

  delay(2000);
}
