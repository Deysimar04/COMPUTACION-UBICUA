# Laboratorio 3

## Simulación en Tinkercad
[Ver simulación del circuito en Tinkercad](https://www.tinkercad.com/things/3ykYogJ9TpC-laboratorio-3)


Código 1 – Control de brillo automático (fade)
¿Qué hace el programa?

Este código hace que un LED aumente y disminuya su brillo de forma gradual usando PWM.

Componentes
LED (pin 3)
Funcionamiento
1. Aumento de brillo
Un ciclo for incrementa el valor PWM de 0 a 255.
El LED pasa de apagado a brillo máximo.
2. Disminución de brillo
Otro ciclo reduce el PWM de 255 a 0.
El LED se va apagando progresivamente.
3. Control
Se usa analogWrite() para variar el brillo.
delay(10) hace la transición suave.
Resumen

El LED realiza un efecto de encendido y apagado gradual de forma continua.

Código 2 – Control de brillo con potenciómetro
¿Qué hace el programa?

Este código permite controlar el brillo de un LED usando un potenciómetro.

Componentes
LED (pin 3)
Potenciómetro (A0)
Funcionamiento
1. Lectura del potenciómetro
Se obtiene un valor analógico entre 0 y 1023.
2. Conversión a PWM
Se usa map() para convertir el valor a un rango de 0 a 255.
3. Control del LED
El brillo del LED cambia según la posición del potenciómetro.
4. Monitor serial
Muestra:
Valor del potenciómetro
Valor PWM aplicado
