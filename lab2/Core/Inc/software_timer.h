/*
 * software_timer.h
 *
 *  Created on: Oct 1, 2025
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void timerRun();
void setTimer(int index, int duration);
int isTimerExpired(int index);

#endif /* INC_SOFTWARE_TIMER_H_ */
