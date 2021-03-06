/*
 * main.c
 *
 * Created: 4/21/2022 10:12:57 AM
 *  Author: Siva
 */ 

#include <avr/io.h>
#include<util/delay.h>

#include "Activity_1.h" // B3, B2 input pins to high results B0 output pin to high
#include "Activity_2.h" // AC0 is used as input to vary temperature
#include "Activity_3.h" // OC1A (B1) to output pwm signal
#include "Totalactivity.h" // UART0 is used to actuate the amount of heat

int main(void)
{
	Activity1_init();  // Activity_1
	ADConverter_init();// Activity_2
	PWM_init();         // Activity_3
	UART_init(103);     // Total_Activity
	uint16_t temp;
	char temp1;
	while(1){
		if(SENSOR_ON) {       // Switch1 ON
			if(HEATER_ON) {    // Switch2 ON
				LED_ON;         // LED ON
				temp=Read_ADC(0);
				temp1=PWM(temp);
				Write_UART(temp1);

			}
		}

		else {
			LED_OFF;
			OCR1A=0;
		}
	}

	return 0;
}
