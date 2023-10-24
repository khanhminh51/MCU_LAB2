/*
 * control_clock_buffer.h
 *
 *  Created on: Oct 22, 2023
 *      Author: DELL
 */

#ifndef INC_CONTROL_CLOCK_BUFFER_H_
#define INC_CONTROL_CLOCK_BUFFER_H_

#define MAX_LED 	4
extern int index_led;
extern int led_buffer [];

void updateClockBuffer();

#endif /* INC_CONTROL_CLOCK_BUFFER_H_ */
