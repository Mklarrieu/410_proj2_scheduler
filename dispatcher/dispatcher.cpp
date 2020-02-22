/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

//TODO fill in content

#include "../includes/dispatcher.h"


	CPU *cpu;
	bool is_valid_job_on_cpu;
//	Dispatcher::Dispatcher(CPU &cpu):cpu(&cpu),is_valid_job_on_cpu(false){}
//	Dispatcher::~Dispatcher(){}

	PCB Dispatcher::get_from_CPU(){
		return cpu->get_process_off_core();
	}

	void Dispatcher::put_on_CPU(PCB &process){
		cpu->put_process_on_core(process);
	}
	bool Dispatcher::isValidJobOnCPU(){
		return is_valid_job_on_cpu;
	}


