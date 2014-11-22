#ifndef OOP_Building
#define OOP_Building

#include <iostream>

class Virus;
class Engine;
class Vaccine;
class Statistics;

class Building{
private:
	double Activity[4];	//On,Off-line 활동 정도 4경우
	double Security[3];	//보안의식 세 단계 상중하
	double Contribute_to_Vaccine;	//백신에 기여하는 정도
	int total_pc;
	int infected_pc;
	int uninfected_pc;
	int downed_pc;
	int live_pc;
public:
	double& getActivity1();
	double& getSecurity();
	double getContribute_to_Vaccine();
	int getTotal_pc;	//각각 get,set다 만들고?
}




#endif