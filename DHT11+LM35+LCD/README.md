[ver simulacion](https://wokwi.com/projects/458768705024606209)

Documentación del código – Sensor de temperatura y humedad

Este código mide:

Temperatura con el sensor LM35
Temperatura y  humedad con el DHT11

Y muestra los resultados en:

Monitor serial
Pantalla LCD I2C

Componentes usados
Arduino
Sensor DHT11 (pin 8)
Sensor LM35 (A0)
Pantalla LCD I2C (0x27)

Funcionamiento
🔹 1. Lectura del LM35
Lee un valor analógico
Lo convierte a voltaje
Luego a temperatura en °C
🔹 2. Lectura del DHT11
Obtiene temperatura y humedad
Si falla, muestra error
🔹 3. Salida de datos
En el monitor serial:
Muestra temperatura del LM35
Temperatura y humedad del DHT11
En la LCD:
Línea 1: DHT11 (temperatura y humedad)
Línea 2: LM35 (temperatura)

Ciclo del programa
Se actualiza cada 2 segundos
