# Ejercicio 01 — Entradas y salidas digitales

Ejercicio de entradas y salidas digitales utilizando el microcontrolador **ATmega328P**, presente en la placa Arduino Uno.

## Objetivo

En esta actividad se estudiará el manejo básico de los puertos digitales del ATmega328P mediante el acceso directo a sus registros.

Se trabajará principalmente con:

* Configuración de entradas y salidas digitales.
* Registros de los puertos del ATmega328P.
* Operaciones lógicas sobre bits.
* Máscaras de bits.
* Variables enteras con y sin signo.
* Lectura de entradas digitales.
* Escritura de salidas digitales.

## Hardware

La actividad utiliza una placa **Arduino Uno — ATmega328P**

La conexión considera cuatro entradas digitales y cuatro salidas digitales.

| Dispositivo   | Pin ATmega328P | Pin Arduino | Tipo    |
| ------------- | -------------- | ------------| ------- |
| Pulsador 0    | PD2            | 2           | Entrada |
| Pulsador 1    | PD3            | 3           | Entrada |
| Pulsador 2    | PD4            | 4           | Entrada |
| LED 0         | PC0            | A0          | Salida  |
| LED 1         | PC1            | A1          | Salida  |
| LED 2         | PC2            | A2          | Salida  |
| LED 3         | PC3            | A3          | Salida  |
| RX            | PD0            | 0           | Entrada |
| TX            | PD1            | 0           | Salida  |


## Software

El proyecto utiliza:

* **Visual Studio Code**
* **PlatformIO**
* **C/C++**
* **ATmega328P**

El programa accede directamente a los registros de los puertos del microcontrolador. Por esta razón, en esta actividad no se utilizan funciones de alto nivel como `digitalRead()` o `digitalWrite()`.


## Registros utilizados

En esta actividad se trabajará principalmente con los registros asociados a los puertos B y D del ATmega328P:

| Registro | Función                                 |
| -------- | --------------------------------------- |
| `DDRC`   | Configuración de dirección del puerto C |
| `PORTC`  | Escritura de datos en el puerto C       |
| `DDRD`   | Configuración de dirección del puerto D |
| `PIND`   | Lectura de datos del puerto D           |

El objetivo no es solamente hacer funcionar el circuito, sino comprender cómo las operaciones sobre registros permiten controlar individualmente los bits de un puerto.



## Actividad

Para conocer las instrucciones, preguntas y modificaciones que deberán realizarse, consulte:

**[Enunciado de la actividad](docs/actividad.md)**

