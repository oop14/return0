//
//  engine.h
//  OOP_proj
//
//  Created by dblab on 2014. 11. 17..
//  Copyright (c) 2014년 dblab. All rights reserved.
//

#ifndef __OOP_proj__engine__
#define __OOP_proj__engine__

#include <iostream>
#include <vector>

#include "internal.h"

class Virus;
class Building;
class Vaccine;
class Statistics;

class Engine {
private:
    Virus*                  virus;
  //  Building** buildings;
    std::vector<Building*>  buildings;
    Vaccine*                vaccine;
    AI*						ai;
    double	speed_of_game;
	int coin;
public:
    
	Engine() { coin=0;};
    ~Engine();
    
	void initGame();
    void one_step_progress();

	void wait_for_next_step();
};

#endif /* defined(__OOP_proj__engine__) */
