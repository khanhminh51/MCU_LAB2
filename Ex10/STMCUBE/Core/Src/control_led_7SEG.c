/*
 * control_led_7SEG.c
 *
 *  Created on: Oct 22, 2023
 *      Author: DELL
 */


#include "control_led_7SEG.h"
#include "main.h"



void display7SEG(int num){
	  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  switch(num){
		  case 0:
			  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			  break;
		  case 1:
			  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			  break;
		  case 2:
			  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
			  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			  break;
		  case 3:
			  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			  break;
		  case 4:
			  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			  break;
		  case 5:
			  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			  break;
		  case 6:
			  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			  break;
		  case 7:
			  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			  break;
		  case 8:
			  break;
		  case 9:
			  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			  break;
		  default:
			  break;
	  }
}

void update7SEG (int index){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
	switch (index){
		case 0:
			// Display the first 7 SEG with SEG1uffer [0]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
			display7SEG(led_buffer[0]);
			break ;
		case 1:
			// Display the second 7 SEG with SEG1uffer [1]
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
			display7SEG(led_buffer[1]);
			break ;
		case 2:
			// Display the third 7 SEG with SEG1uffer [2]
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
			display7SEG(led_buffer[2]);
			break ;
		case 3:
			// Display the forth 7 SEG with SEG1uffer [3]
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
			display7SEG(led_buffer[3]);
			break ;
		default :
			break ;
	}
}
