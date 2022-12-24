/*
 * command.c
 *
 *  Created on: Dec 20, 2022
 *      Author: DELL
 */
#include "command.h"

void command_fsm() {
	switch(status_parser) {
	case INIT_STR:
		if(temp == '!') {
			status_parser = WAIT_END;
			command_index = 0;
		}
		break;

	case WAIT_END:
		if(temp == '#') {
			status_parser = INIT_STR;
			command[command_index] = '\0';
			command_flag = 1;
		}
		// Else
		else {
			if (temp == '!')
				command_index = 0;
			else {
			// Else, continue reading the command
				command[command_index++] = temp;
				if (command_index == MAX_BUFFER_SIZE) command_index = 0;
			}
		}
		break;
	default:
		break;
	}
}
