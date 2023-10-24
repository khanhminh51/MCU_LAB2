/*
 * software_timer.c
 *
 *  Created on: Oct 22, 2023
 *      Author: DELL
 */


#include "software_timer.h"

int TIMER_CYCLE = 10;

// timer0 is used to control LED_RED and DOT
int timer0_flag = 0;
int timer0_counter = 0;

// timer1 is used to control update values for hour, minute and second
int timer1_flag = 0;
int timer1_counter = 0;

// timer2 is used to control led 7 segment
int timer2_flag = 0;
int timer2_counter = 0;

// timer3 is uesd to control led matrix
int timer3_flag = 0;
int timer3_counter = 0;


//set timer for LED_RED and DOT
void setTimer0(int duration){
	timer0_counter = duration /TIMER_CYCLE;
	timer0_flag = 0;
}

//set timer for update values for hour, minute and second
void setTimer1(int duration){
	timer1_counter = duration /TIMER_CYCLE;
	timer1_flag = 0;
}

//set timer for led 7 segment
void setTimer2(int duration){
	timer2_counter = duration /TIMER_CYCLE;
	timer2_flag = 0;
}

//set timer for led matrix
void setTimer3(int duration){
	timer3_counter = duration/TIMER_CYCLE;
	timer3_flag = 0;
}




void timer_run(){
	//counter for LED_RED and DOT
	if(timer0_counter > 0){
		timer0_counter--;
		if(timer0_counter == 0) timer0_flag = 1;
	}

	//counter for update values hour, minute, second
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter == 0) timer1_flag = 1;
	}
	//counter for led 7 segment
	if(timer2_counter > 0){
		timer2_counter--;
		if(timer2_counter == 0) timer2_flag = 1;
	}
	//counter for led matrix
	if(timer3_counter > 0){
		timer3_counter--;
		if(timer3_counter == 0) timer3_flag = 1;
	}
}
