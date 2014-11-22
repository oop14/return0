//
//  engine.h
//  OOP_proj
//
//  Created by dblab on 2014. 11. 17..
//  Copyright (c) 2014³â dblab. All rights reserved.
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
public:

	Engine();
	~Engine();

	RC one_step_progress() {

		// process one step of virus propagation in a bulding.
		for (auto p : buildings) {
			virus_propagation_in_a_building(p);
		}

		// process one step of virus propagation between two different buildings.
		for (auto from : buildings) {
			for (auto to : buildings) {
				if (from != to) {
					population_movement(from, to);
				}
			}
		}

		// Vaccine
		vaccine_developement_progress();

		// wait for the next step. (depending on 'speed_of_game')
		wait_for_next_step();

		return 0;
	}

	RC virus_propagation_in_a_building(Building* obj);
	RC population_movement(Building* from, Building* to);
	RC vaccine_developement_progress();
	RC wait_for_next_step();


private:
	Virus*                  virus;
	//  Building** buildings;
	std::vector<Building*>  buildings;
	Vaccine*                vaccine;
	Statistics*             stat;

	double speed_of_game;
	int num_buildings;
};

#endif /* defined(__OOP_proj__engine__) */