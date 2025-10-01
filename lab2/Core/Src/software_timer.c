/*
 * software_timer.c
 *
 *  Created on: Oct 1, 2025
 *      Author: Admin
 */
#include "software_timer.h"
#define TIMER 10

int timer_counter[TIMER];
int timer_flag[TIMER];

void setTimer(int index, int duration){
	timer_counter[index] = duration;
	timer_flag[index] = 0;
}

int isTimerExpired(int index){
	if (timer_flag[index] == 0)
		return 0;

	return 1;
}

void timerRun(){
	for (int i = 0; i < TIMER; i++){
		if (timer_counter[i] > 0){
			timer_counter[i]--;
			if (timer_counter[i] <= 0)
				timer_flag[i] = 1;
		}
	}
}
