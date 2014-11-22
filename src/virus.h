//
// virus.h
// OOP_proj
//
// Created by So 2014. 11. 17..
// Copyright (c) So. All rights reserved.
//

#ifndef _OOP_proj__virus_
#define _OOP_proj__virus_

#include "tech.h"

class Virus {
private:
	double Infect[4];
	double destroy[3];
	double serious;
	double vaccine_MAX;
	Tech* stat[3];
	void Calculate_stat();
public:
	void getData(double* inf, double* destroy, double serious);
	void giveStruct(Tech* _stat[3]);
	void getVacMax(double* vac_Max);
}

#endif _OOP_proj__virus_