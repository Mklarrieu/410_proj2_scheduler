/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 */

//TODO fill in content
#include "../includes/stats.h"
#include <vector>

float av_wait_time;
float av_turnaround_time;
float av_response_time;
std::vector<PCB> *vec;


	Stats::Stats(std::vector<PCB> &finished_vector){
		for(int i = 0; i < finished_vector.size(); i++){
			vec->push_back(finished_vector[i]);
		}
		calcStats();
	}
//	Stats::~Stats(){}
	void Stats::showAllProcessInfo(){
	}

	float Stats::get_av_response_time(){
		return av_response_time;
	}
	float Stats::get_av_turnaround_time(){
		return av_turnaround_time;
	}
	float Stats::get_av_wait_time(){
		return av_wait_time;
	}


	void Stats::calcStats(){
		float total_wait = 0;
		float total_turnaround = 0;
		float total_response = 0;
		for(int i = 0; i < vec->size(); i++){
			PCB p;
			p = vec->at(i);
			float response = p.start_time - p.arrival_time;
			float turn = p.finish_time - p.arrival_time;
			float wait = p.finish_time - p.arrival_time - p.required_cpu_time;
			total_wait += wait;
			total_turnaround += turn;
			total_response += response;
		}
		float num_processes = vec->size();
		av_wait_time = total_wait/num_processes;
		av_turnaround_time = total_turnaround/num_processes;
		av_response_time = total_response/num_processes;
	}



