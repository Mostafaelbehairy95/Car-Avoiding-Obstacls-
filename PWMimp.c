/*
 * PWMimp.c
 *
 * Created: 4/15/2017 10:00:13 PM
 *  Author: elbehairy
 */ 

#include "PWM.h"

void init_PWM_8bit(){
	
	TCCR0A |= (1 << COM0A1)|(1 << COM0B1)| (1 << WGM00); // Clear OC0A and on Compare Match when up-counting. Set OC0A and OC0B on Compare Match when down-counting.
													  //Phase Correct its top 0xFF
	TCCR0B |= (1 << CS02) ; // Prescaler 256
	TCNT0 = 0;
	OCR0A = 0;
	OCR0B = 0;
}
void PWM_Write(int _0A, int _0B){
	OCR0A = _0A;
	OCR0B = _0B;
}

void init_PWM_16bit(){
	TCCR1A |= (1 << COM1A1) | (1 << COM1B1) | (1 << WGM11); //Clear OC1A/OC1B on Compare Match, set OC1A/OC1B at BOTTOM (non-inverting mode) 
	TCCR1B |= (1 << WGM12)| (1 << WGM13) | (1 << WGM11) | (1<<CS11) | (1<<CS10); // Mode 14, Prescale 64
}
void PWM_Write_16(int _1A){
	OCR1A = _1A;
}
