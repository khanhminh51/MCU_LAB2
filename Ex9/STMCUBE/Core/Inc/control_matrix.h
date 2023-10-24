/*
 * control_matrix.h
 *
 *  Created on: Oct 16, 2023
 *      Author: DELL
 */

#ifndef INC_CONTROL_MATRIX_H_
#define INC_CONTROL_MATRIX_H_

#include "main.h"

#define  MAX_LED_MATRIX		8
extern int index_led_matrix;
extern uint8_t matrix_buffer [];

void updateLEDMatrix(int index);
void displayLEDMatrix(int row, int col);


#endif /* INC_CONTROL_MATRIX_H_ */
