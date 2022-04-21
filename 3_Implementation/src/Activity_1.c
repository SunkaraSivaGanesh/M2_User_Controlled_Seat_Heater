/*
 * CFile1.c
 *
 * Created: 21-04-2022 10.19.10 AM
 *  Author: DELL
 */ 

#include "Activity_1.h"

void Activity1_init(){

	DDRB = DDRB |  (1<<PB0);
	PORTB = PORTB & ~(1<<PB0);

	//Set D0 as Input and initialize it to high
	DDRD = DDRD & ~(1<<PD0);
	PORTD = PORTD | (1<<PD0);

	//Set D1 as Input and initialize it to high
	DDRD = DDRD & ~(1<<PD1);
	PORTD = PORTD | (1<<PD1);
}
