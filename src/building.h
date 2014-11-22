#ifndef OOP_Building
#define OOP_Building

#include <iostream>

class Virus;
class Engine;
class Vaccine;
class Statistics;

class Building{
private:
	double Activity[4];	//On,Off-line Ȱ�� ���� 4���
	double Security[3];	//�����ǽ� �� �ܰ� ������
	double Contribute_to_Vaccine;	//��ſ� �⿩�ϴ� ����
	int total_pc;
	int infected_pc;
	int uninfected_pc;
	int downed_pc;
	int live_pc;
public:
	double& getActivity1();
	double& getSecurity();
	double getContribute_to_Vaccine();
	int getTotal_pc;	//���� get,set�� �����?
}




#endif