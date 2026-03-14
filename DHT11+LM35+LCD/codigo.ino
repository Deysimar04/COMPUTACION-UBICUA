
// Librería para usar el sensor DHT11
#include <Bonezegei_DHT11.h>

// Librería I2C
#include <Wire.h>

// Librería LCD
#include <LiquidCrystal_I2C.h>

// Sensor DHT11 en pin 8
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

  // -------- LM35 (Temperatura principal) --------
  
  int valor = analogRead(pinLM35);
  float voltaje = valor * (5.0 / 1023.0);
  float temperatura = voltaje * 100;

  // -------- DHT11 (solo humedad) --------
  
  if(dht.getData()){

    int humedad = dht.getHumidity();

    Serial.print("Temp LM35: ");
    Serial.print(temperatura);
    Serial.print(" C  Hum: ");
    Serial.print(humedad);
    Serial.println(" %");

    // -------- LCD --------

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.print(temperatura);
    lcd.print(" C");

    lcd.setCursor(0,1);
    lcd.print("Hum: ");
    lcd.print(humedad);
    lcd.print(" %");
  }

  delay(2000);
}
