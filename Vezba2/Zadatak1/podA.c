
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
   DDRD = 0xff; //port D -> izlaz
   DDRB |= 1 << 4; //PB4 -> izlaz
   PORTB &= ~(1 << 4); //PB4 = 0, cime se ukljucuje tranzistor Q0
 while(1)
 {
    PORTD = 0xfe;
    _delay_ms(500);
    PORTD = 0xff;
    _delay_ms(500);
 }
 return 0;
}
