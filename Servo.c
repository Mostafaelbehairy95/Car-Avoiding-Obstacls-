/*
 * Servo.c
 *
 * Created: 6/14/2017 1:36:01 AM
 *  Author: elbehairy
 */ 

#include "Servo.h"

void Servo_init(){
	init_PWM_16bit();
	ICR1=4999;  //fPWM=50Hz (Period = 20ms)
	DDRB |= (1 << PORTB1);
	
}
int convertFromTo(double value, double fromst, double fromend, double tost, double toend){
	 double result;
	 fromend -= fromst;
	 toend -= tost;
	 result = (((value * toend)/fromend) + tost);
	 return (int)round(result);
}
void write_angle(int ang){
	PWM_Write_16(convertFromTo(ang,0, 180, 97, 535));
}