/*
 * software_timer.h
 *
 *  Created on: Oct 22, 2023
 *      Author: DELL
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int TIMER_CYCLE;

// timer0 is used to control LED_RED and DOT
extern int timer0_flag;
extern int timer0_counter;

// timer1 is used to control update values for hour, minute and second
extern int timer1_flag;
extern int timer1_counter;

// timer2 is uesd to control led 7 segment
extern int timer2_flag;
extern int timer2_counter;

// timer3 is used to control led matrix
extern int timer3_flag;
extern int timer3_counter;

// timer4 is used to control update buffer led matrix
extern int timer4_flag;
extern int timer4_counter;


void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);



void timer_run();


#endif /* INC_SOFTWARE_TIMER_H_ */
