// Librería para usar el sensor de temperatura y humedad DHT11
#include <Bonezegei_DHT11.h>

// Librería para comunicación I2C (la usa el módulo del LCD)
#include <Wire.h>

// Librería para controlar el LCD con módulo I2C
#include <LiquidCrystal_I2C.h>

// Creamos el objeto del sensor DHT11 conectado al pin 8 del Arduino
Bonezegei_DHT11 dht(8);

// Creamos el objeto del LCD
// 0x27 es la dirección I2C del módulo
// 16 columnas y 2 filas del display
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {

  // Inicia la comunicación con el monitor serial
  Serial.begin(9600);

  // Inicializa el LCD
  lcd.init();

  // Enciende la luz del LCD
  lcd.backlight();

  // Coloca el cursor en la columna 0 fila 0
  lcd.setCursor(0,0);

  // Muestra un mensaje de inicio
  lcd.print("Iniciando...");

  // Espera 2 segundos
  delay(2000);

  // Limpia la pantalla del LCD
  lcd.clear();
}

void loop() {

  // Lee los datos del sensor DHT11
  if(dht.getData()){

    // Guarda la temperatura en una variable
    int temperatura = dht.getTemperature();

    // Guarda la humedad en una variable
    int humedad = dht.getHumidity();

    // Muestra la temperatura en el monitor serial
    Serial.print("Temp: ");
    Serial.println(temperatura);

    // Muestra la humedad en el monitor serial
    Serial.print("Hum: ");
    Serial.println(humedad);

    // Limpia la pantalla del LCD antes de escribir nuevos datos
    lcd.clear();

    // Coloca el cursor en la primera fila
    lcd.setCursor(0,0);

    // Muestra la temperatura en el LCD
    lcd.print("Temp: ");
    lcd.print(temperatura);
    lcd.print(" C");

    // Coloca el cursor en la segunda fila
    lcd.setCursor(0,1);

    // Muestra la humedad en el LCD
    lcd.print("Hum: ");
    lcd.print(humedad);
    lcd.print(" %");
  }

  // Espera 2 segundos antes de volver a leer el sensor
  delay(2000);
}