/*
 * software_timer.c
 *
 *  Created on: Oct 1, 2025
 *      Author: Admin
 */
#include "software_timer.h"
#define NUMBERS_OF_TIMER 10

int timer_counter[NUMBERS_OF_TIMER];
int timer_flag[NUMBERS_OF_TIMER];

void setTimer(int index, int duration){
	timer_counter[index] = duration;
	timer_flag[index] = 0;
}

int isTimerExpired(int index){
	return timer_flag[index];
}

void timerRun(){
	for (int i = 0; i < NUMBERS_OF_TIMER; i++){
		if (timer_counter[i] > 0){
			timer_counter[i]--;
			if (timer_counter[i] <= 0)
				timer_flag[i] = 1;
		}
	}
}
