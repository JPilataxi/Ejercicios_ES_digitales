#include <Arduino.h>

// Contador de 8 bits
uint8_t contador = 0;

void IncrementarContador()
{
    contador++;
    // Mostrar los 4 bits inferiores en los LEDs
    PORTC = (PORTC & 0xF0) | (contador & 0x0F);

    // Mostrar valor por Serial
    Serial.print("Contador = ");
    Serial.println(contador);

}

void setup()
{
    // PD2 como entrada (Arduino D2)
    DDRD &= ~(1 << PD2);
    // pull-up interno activado para PD2
    PORTD |= (1 << PD2);

    // PC0-PC3 como salidas (Arduino A0-A3)
    DDRC |= 0x0F;

    // Inicializar las salidas de los LEDs
    PORTC &= 0xF0;

    // Inicializar comunicación serial
    // PD0 (RX) y PD1 (TX) quedan reservados para Serial
    Serial.begin(9600);

    // Mostrar valor inicial
    Serial.print("Contador = ");
    Serial.println(contador);
}

void loop()
{
    // Leer pulsador conectado a PD2 (Arduino D2)
    if ((PIND & (1 << PD2)) == 0)
    {
        IncrementarContador();
        
    }
    delay(200);
}

