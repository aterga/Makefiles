/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	/* insert your hardware initialization here */
		
	DDRD = 0b00010000;
	
	//DDRD [0][0][0][1][0][0][0][0]
	
	while (1)
	{
		PORTD = 0b00010000; /* toggle the LED */
	
	
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		PORTD = 0b00000000; /* toggle the LED */
		
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
		_delay_ms(200); /* max is 262.14 ms / F_CPU in MHz */
	}
	
    return 0;   /* never reached */
}
