#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL

int main()
{
	/* Set pin 7 from PORT B to output */
	DDRB |= 0b00100000;

	while(1) {
		/* Toggle pin 7 from PORT B */
		PORTB ^= 0b00100000;
		_delay_ms(1000);
	}

	return 0;
}
