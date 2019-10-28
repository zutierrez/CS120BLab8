/*	Author: zguti001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #8  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

void ADC_init(){
	ADCSRA |= (1 << ADEN) | (1<< ADSC) | (1<< ADATE);
	}


unsigned short x = ADC;
unsigned short my_short = 0xABCD;
my_char = (char)(my_short >> 4); //my_char = 0xBC

int main(void) {
    DDRB = 0xFF; PORTB = 0x00; //output LEDs
    DDRD = 0xFF; PORTD = 0x00; //output LEDs
    DDRA = 0x00; PORTA = 0xFF; //input POTentiometer
    
    ADC_init();

    while (1) {

    }
    return 1;
}
