/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */

//TODO fill in content

#include "../includes/scheduler_RR.h"
#include "../includes/scheduler.h"
#include <queue>


//	Scheduler_RR::Scheduler_RR(std::queue<PCB> &queue,int time_slice =UNINITIALIZED):Scheduler(queue,true,time_slice){}
//	Scheduler_RR::~Scheduler_RR(){}

	bool Scheduler_RR::time_to_switch_processes(int tick_count, PCB &p){
		return false;
	}
	void Scheduler_RR::sort(){

	}
