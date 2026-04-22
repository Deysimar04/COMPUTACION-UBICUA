# Laboratorio 2

## Simulación
[Ver simulación en Tinkercad](https://www.tinkercad.com/things/2ACBBnwg4Yi-laboratorio-2)


Código 1 – LED con encendido tipo interruptor (toggle)
¿Qué hace el programa?

Este código permite encender y apagar un LED usando un pulsador, funcionando como un interruptor: cada vez que presionas, cambia el estado.

Componentes
Pulsador (pin 2)
LED (pin 7)
Funcionamiento
1. Configuración
El pulsador usa INPUT_PULLUP (activo en LOW).
El LED se configura como salida.
2. Lógica
Cuando se presiona el botón:
Cambia el estado del LED (encendido/apagado).
Usa un while para esperar a que se suelte el botón.
Tiene un pequeño delay para evitar rebotes.
Resumen

El LED cambia de estado cada vez que se presiona el botón (modo interruptor).

Código 2 – LED controlado directamente por pulsador
¿Qué hace el programa?

Este código enciende el LED solo mientras el botón está presionado.

Componentes
Pulsador (pin 2)
LED (pin 3)
Funcionamiento
1. Configuración
Pulsador con INPUT_PULLUP.
LED como salida.
2. Lógica
Si el botón NO está presionado (HIGH):
LED encendido
Si el botón está presionado (LOW):
LED apagado

