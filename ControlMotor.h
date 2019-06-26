/*
 * ControlMotor.h
 *
 * Created: 6/14/2017 12:50:36 AM
 *  Author: elbehairy
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#ifndef CONTROLMOTOR_H_
#define CONTROLMOTOR_H_

#include "PWM.h"

#define MotorA  PORTD5
#define MotorB  PORTD6
#define MotorA1  PORTD7
#define MotorA2  PORTB0
#define MotorB1  PORTD2
#define MotorB2  PORTD4



void Motor_init();
void speed(int motA, int motB);
void direction(char *dir);

void forward();
void left();
void right();
void backward();





#endif /* CONTROLMOTOR_H_ */