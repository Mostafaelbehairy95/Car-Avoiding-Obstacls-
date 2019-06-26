/*
 * Servo.h
 *
 * Created: 6/14/2017 1:35:41 AM
 *  Author: elbehairy
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#ifndef SERVO_H_
#define SERVO_H_

#include "PWM.h"

void Servo_init();
void write_angle(int ang);
int convertFromTo(double value, double fromst, double fromend, double tost, double toend);


#endif /* SERVO_H_ */