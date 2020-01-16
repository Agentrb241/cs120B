/*	Author: rbadi002
 *  Partner(s) Name: Rhea
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

unsigned char GetBit(unsigned char x, unsigned char k) {
	return ((x & (0x01 << k)) != 0);
}

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs, initialize to 1s
	DDRC = 0xFF; PORTC = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	DDRB = 0x00; PORTB = 0xFF;
	//unsigned char tmpB = 0x00; // You are UNABLE to read from output pins. Instead you
	unsigned char button = 0x00;
    /* Insert your solution below */
    while (1) {
		unsigned char tempA = PINA;
		unsigned char tempB = PINB;
//		button = PINA & 0x01;
  		unsigned char counter = 0; 	
		unsigned char i;
		for(i = 0; i < 8; ++i) {
			if (GetBit(tempA, i)) {
				++counter;
			}
		}
		for (i = 0; i <8; ++i) {
			if (GetBit(tempB, i)) {
				++counter;
			}
		}

		PORTC = counter;

	}
    return 0;
}
