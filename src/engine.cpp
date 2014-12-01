//
//  engine.cpp
//  OOP_proj
//
//  Created by dblab on 2014. 11. 17..
//  Copyright (c) 2014년 dblab. All rights reserved.
//

#include "engine.h"

void engine::initGame() {
	virus = new Virus;

	VirusStatus* vs;
	virus.getVirusStatus(vs);
	
	buildings.push_back(new Building("빌딩1",0,100,1,vs));
	buildings.push_back(new Building("빌딩2",1,110,2,vs));
	buildings.push_back(new Building("빌딩3",2,120,3,vs));
	buildings.push_back(new Building("빌딩4",3,130,4,vs));
	buildings.push_back(new Building("빌딩5",4,140,5,vs));

	buildings.push_back(new Building("빌딩6",5,150,1,vs));
	buildings.push_back(new Building("빌딩7",6,160,2,vs));
	buildings.push_back(new Building("빌딩8",7,170,3,vs));
	buildings.push_back(new Building("빌딩9",8,180,4,vs));
	buildings.push_back(new Building("빌딩10",9,190,5,vs));

	buildings.push_back(new Building("빌딩11",10,210,1,vs));
	buildings.push_back(new Building("빌딩12",11,220,2,vs));
	buildings.push_back(new Building("빌딩13",12,230,3,vs));
	buildings.push_back(new Building("빌딩14",13,240,4,vs));
	buildings.push_back(new Building("빌딩15",14,250,5,vs));

	buildings.push_back(new Building("빌딩16",15,260,1,vs));
	buildings.push_back(new Building("빌딩17",16,270,2,vs));
	buildings.push_back(new Building("빌딩18",17,280,3,vs));
	buildings.push_back(new Building("빌딩19",18,290,4,vs));
	buildings.push_back(new Building("빌딩20",19,300,5,vs));
	
	ai = new AI(/*AI가 완성 되면 받을 것*/);
}

void engine::one_step_progress() {

    // process one step of virus propagation in a bulding.
    for(auto p : buildings) {
        p->do_operation();
    }
        
    // Vanccine
    vaccine->do_operation();

	// AI
	ai->do_operation();
/*	
	// checking coin
	for(auto p : buildings) {
        p->iscoinExist(coin_flag[i++]);
    }

	// checking AI_Command
	ai->getCOMMAND();
*/
    // wait for the next step. (depending on 'speed_of_game')
    wait_for_next_step();

    return;
}

void engine::wait_for_next_step() {

	return;
}