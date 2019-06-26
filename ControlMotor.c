/*
 * ControlMotor.c
 *
 * Created: 6/14/2017 12:50:08 AM
 *  Author: elbehairy
 */ 

#include "ControlMotor.h"

void Motor_init(){
	DDRD |= (1 << MotorA) | (1 << MotorB) | (1 << MotorA1) | (1 << MotorB1)| (1 << MotorB2);
	DDRB |= (1 << MotorA2);
	
	PORTD &= ~((1 << MotorA) | (1 << MotorB) | (1 << MotorA1) | (1 << MotorB1)| (1 << MotorB2));
	PORTB &= ~(1 << MotorA2);
	
	init_PWM_8bit();
}
void speed(int motA, int motB){
	PWM_Write(motA,motB);
}

void direction(char *dir){
	if(strncmp(dir,"forward") == 0){
		forward();
	}else if(strncmp(dir,"backward") == 0){
		backward();
	}else if(strncmp(dir,"left") == 0){
		left();
	}else if(strncmp(dir,"right") == 0){
		right();
	}else if(strncmp(dir,"stop") == 0){
		stop();
	}
}

void forward(){
	PORTD |= (1 << MotorA1) | (1 << MotorB1);
}
void left(){
	speed(155,255);
}
void right(){
	speed(255,155);
}
void backward(){
	PORTD |= (1 << MotorB2);
	PORTB |= (1 << MotorA2);
}
void stop(){
	speed(0,0);
}