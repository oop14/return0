//
//  engine.cpp
//  OOP_proj
//
//  Created by dblab on 2014. 11. 17..
//  Copyright (c) 2014년 dblab. All rights reserved.
//

#include "engine.h"


RC virus_propagation_in_a_building  (Building* obj) {
	obj->virus_propation_in_a_building();

	return 0;
}

RC population_movement              (Building* from, Building* to) {
	from->pupulation_move_to(to);
	return 0;
}

RC vaccine_developement_progress    () {

	return 0;
}

RC wait_for_next_step               () {

	return 0;
}