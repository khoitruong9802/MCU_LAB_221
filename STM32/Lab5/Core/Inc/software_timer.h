 /*
 * software_timer.h
 *
 *  Created on: Dec 20, 2022
 *      Author: DELL
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define NUM_OF_TIMERS 	2

extern int TIME_CYCLE;

extern int timer_flag[NUM_OF_TIMERS];

void setTimer(int index, int duration);
void clearTimer(int index);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
