/*	Author: rbadi002
 *  Partner(s) Name: Rhea Prashant
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

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
//	unsigned char tmpA = 0x00; // Temporary variable to hold the value of B
//	unsigned char tmpB = 0x00; // Temporary variable to hold the value of A
unsigned char temp = 0x00;

    /* Insert your solution below */
/*

    while (1) {
temp = PINA & 0x03;  
if(temp != 0x01) {
PORTB = 0x00;

}
else {

PORTB =0x01; 

}
}
*/

unsigned int emptySpace = 0;
unsigned int j = 0;
for (unsigned int i = 0; i < 3; i++){
	while(1){
		j++;
	}
}
emptySpace = 4 - j;

return 0;
}
