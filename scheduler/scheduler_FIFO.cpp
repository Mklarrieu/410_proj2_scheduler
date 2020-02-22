/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements FIFO scheduling algorithm
 *      not pre-emptive
 */

//TODO fill in content

#include "../includes/scheduler_FIFO.h"
#include <queue>

//	Scheduler_FIFO::Scheduler_FIFO(std::queue<PCB> &queue):Scheduler(queue, false, UNINITIALIZED){};
//	Scheduler_FIFO::~Scheduler_FIFO(){};

	bool Scheduler_FIFO::time_to_switch_processes(int tick_count, PCB &p){
		return false;
	}

	void Scheduler_FIFO::sort(){

	}
