/*
 * PWM.h
 *
 * Created: 4/15/2017 9:59:50 PM
 *  Author: elbehairy
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#ifndef PWM_H_
#define PWM_H_

#include <avr/io.h>
#include <util/delay.h>

void init_PWM_8bit();
void PWM_Write(int _0A, int _0B);
void init_PWM_16bit();
void PWM_Write_16(int _1A);



#endif /* PWM_H_ */