//
// vaccine.h
// OOP_proj
//
// Created by So 2014. 11. 24..
// Copyright (c) So. All rights reserved.
//

#ifndef _OOP_proj__vaccine_
#define _OOP_proj__vaccine_

class Virus;

class Vaccine {
private:
	VirusStatus* Vstatus;
	Building** pBuilding;
	double developing_point;
	double develop_speed;
public:
	Vaccine(Virus* _virus, Building** _pBuilding) {
		_virus->getVirusStatus(Vstatus);
		pBuilding = _pBuilding;
		vaccine_point = 0;	
	};
	~Vaccine();
	void developement_progress(bool& developed);
	void getVaccine(double& vaccine) { vaccine = developing_point; }
};

#endif _OOP_proj__vaccine_