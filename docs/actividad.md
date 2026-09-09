# Ejercicio 01 — Contador digital

## 1. Objetivo

En esta actividad se implementará un **contador digital de 4 bits** utilizando entradas y salidas digitales del ATmega328P.

El estado del contador se representará mediante cuatro LEDs. Un pulsador permitirá incrementar el contador cada vez que sea presionado. *El segundo pulsador permitira decrementar y el tercer pulsador inicializa el contador en cero.*

---

## 2. Funcionamiento esperado

El programa inicial proporciona una implementación básica del contador.

El valor del contador se mostrará mediante los cuatro LEDs.

Por ejemplo:

| Decimal | Binario | LED3 | LED2 | LED1 | LED0 |
| ------: | :-----: | ---: | ---: | ---: | ---: |
|       0 |   0000  |    ○ |    ○ |    ○ |    ○ |
|       1 |   0001  |    ○ |    ○ |    ○ |    ● |
|       2 |   0010  |    ○ |    ○ |    ● |    ○ |
|       3 |   0011  |    ○ |    ○ |    ● |    ● |
|       4 |   0100  |    ○ |    ● |    ○ |    ○ |
|     ... |   ...   |  ... |  ... |  ... |  ... |
|      15 |   1111  |    ● |    ● |    ● |    ● |

---

# 3. Actividad 1 — Ejecutar el programa inicial

Abra el proyecto y ejecute el programa proporcionado.

Observe el comportamiento del contador al presionar el pulsador.

---



# 2. Actividad 2 — El problema de mantener presionado el pulsador

Observe cuidadosamente el programa inicial.

Suponga que el programa utiliza una estructura equivalente a:

```c
if ((PIND & (1 << PD2)) == 0)
{
    contador++;
}
```

En caso de que el contador incremente más de una vez por pulsación. Corregir.

# 2. Actividad 3 — Demas pulñsadores

Implementar el funcionamiento de los demas pulsadores.