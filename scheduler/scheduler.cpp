/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

//TODO fill in content

#include "../includes/scheduler.h"
#include <queue>

//	std::queue<PCB> *ready_q;
//	bool preemptive;
//	int time_slice;

//	Scheduler::Scheduler(std::queue<PCB> &queue, bool preemptive = false, int time_slice =
//					UNINITIALIZED) :	ready_q(&queue), preemptive(preemptive), time_slice(time_slice){
//
//		}
//	Scheduler::~Scheduler() {
//
//		}

	void Scheduler::add(PCB p){
		ready_q->push(p);
	}
	PCB Scheduler::getNext(){
		if(ready_q->empty()){
			return PCB();
		}
		PCB p = ready_q->front();
		ready_q->pop();
		return p;
	}
	bool Scheduler::isEmpty(){
		return ready_q->empty();
	}
	bool Scheduler::time_to_switch_processes(int tick_count, PCB &p){
		if(p.remaining_cpu_time > 0 ){
//			ready_q->pop();
			return false;
		}
		return true;
	}







