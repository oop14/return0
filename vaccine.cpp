#include "vaccine.h"
#include "virus.h"

void Vaccine::developement_progress(bool& developed) {
	develop_speed = 0;

	for(int i=0; i<B_NUMBER; i++)
		pBuilding[i]->getC2V(develop_speed);

	developing_point += develop_speed

	double vac_Max;
	virus->getVacMax(vac_Max);

	developed = (developing_point >= vac_Max);
}