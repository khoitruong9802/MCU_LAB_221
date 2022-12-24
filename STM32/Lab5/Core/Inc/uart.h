/*
 * uart.h
 *
 *  Created on: Dec 20, 2022
 *      Author: DELL
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h"
#include "software_timer.h"
#include "global.h"
#include "command.h"
#include <stdio.h>

void uart_communiation_fsm(ADC_HandleTypeDef hadc1, UART_HandleTypeDef huart2);

#endif /* INC_UART_H_ */
