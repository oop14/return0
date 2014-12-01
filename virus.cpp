#include <iostream>
#include <string.h>
#include "virus.h"

//void intcpy(int* dest, char* src) {
	for(int i=0; src[i]!=NULL; i++)
		dest[i] = src[i] - '0';
}
void boolcpy(bool* dest, char* src) {
	for(int i=0; src[i]!=NULL; i++)
		dest[i] = !(src[i] == '0')
}

Virus::Virus() {
	double inf[4] = {0}, des[3] = {0};
}
Virus::~Virus() {
}
void Virus::setTech(int difficulty, int cost_buf, double vac_buf, double stat_buf) {
	
	Vstatus = new VirusStatus(inf,des,1,100+vac_buf);

	char** nameArr[3];
	char** infoArr[3];
	int* costArr[3];
	bool** indexArr[3];
	VirusStatus* statArr[3];
	int techNum[3] = {5,4,6};

	for(int i=0; i<3; i++) {
		status[i] = new TechTree(techNum[i]);
		status[i]->setMaxLevel(3);
		nameArr[i] = new char*[techNum[i]];
		infoArr[i] = new char*[techNum[i]];
		indexArr[i] = new bool*[techNum[i]];
		for(int j=0; j<techNum[i]; j++) {
			nameArr[i][j] = new char[21];
			infoArr[i][j] = new char[41];
			indexArr[i][j] = new char[techNum[i]];
		}
		costArr[i] = new int[techNum[i]];
		statArr[i] = new VirusStatus[techNum[i]];
	}


	boolcpy(indexArr[0][0],"00000"); strcpy(nameArr[0][0],"Internet");
	strcpy(infoArr[0][0],"Online ����");
	cost[0][0] = 3; statArr[0][0].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[0][1],"10000"); strcpy(nameArr[0][1],"P2P/���ϵ�");
	strcpy(infoArr[0][1],"Online ����++");
	cost[0][1] = 7; statArr[0][1].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[0][2],"00000"); strcpy(nameArr[0][2],"HDD/SSD");
	strcpy(infoArr[0][2],"Offline ����");
	cost[0][2] = 4; statArr[0][2].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[0][3],"00000"); strcpy(nameArr[0][3],"USB/SD/CD/DVD");
	strcpy(infoArr[0][3],"Offline ����");
	cost[0][3] = 2; statArr[0][3].setInfo(1,2,3,4,5,6,7,8,9);
	
	boolcpy(indexArr[0][4],"00110"); strcpy(nameArr[0][4],"Plug");
	strcpy(infoArr[0][4],"Offline ����++");
	cost[0][4] = 10; statArr[0][4].setInfo(1,2,3,4,5,6,7,8,9);



	boolcpy(indexArr[1][0],"0000"); strcpy(nameArr[1][0],"Copy");
	strcpy(infoArr[1][0],"Ctrl + C, Ctrl + V");
	cost[1][0] = 3; statArr[1][0].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[1][1],"0000"); strcpy(nameArr[1][1],"Overload");
	strcpy(infoArr[1][1],"������");
	cost[1][1] = 3; statArr[1][1].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[1][2],"0000"); strcpy(nameArr[1][2],"Modify");
	strcpy(infoArr[1][2],"����");
	cost[1][2] = 3; statArr[1][2].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[1][3],"0000"); strcpy(nameArr[1][3],"Delete");
	strcpy(infoArr[1][3],"�����");
	cost[1][3] = 3; statArr[1][3].setInfo(1,2,3,4,5,6,7,8,9);



	boolcpy(indexArr[2][0],"000000"); strcpy(nameArr[2][0],"Hiding");
	strcpy(infoArr[2][0],"�����");
	cost[2][0] = 2; statArr[2][0].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[2][1],"100000"); strcpy(nameArr[2][1],"BackDoor");
	strcpy(infoArr[2][1],"��������?!");
	cost[2][1] = 3; statArr[2][1].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[2][2],"110000"); strcpy(nameArr[2][2],"RootKit");
	strcpy(infoArr[2][2],"����?!");
	cost[2][2] = 5; statArr[2][2].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[2][3],"100000"); strcpy(nameArr[2][3],"Worm(Dummy)");
	strcpy(infoArr[2][3],"��¥ ���� ����?!");
	cost[2][3] = 2; statArr[2][3].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[2][4],"100000"); strcpy(nameArr[2][4],"Trojan horse");
	strcpy(infoArr[2][4],"�ƴ� �� ������ٰ� ������");
	cost[2][4] = 4; statArr[2][4].setInfo(1,2,3,4,5,6,7,8,9);

	boolcpy(indexArr[2][5],"110110"); strcpy(nameArr[2][5],"Vaccine Disabler");
	strcpy(infoArr[2][5],"��� ����");
	cost[2][5] = 7; statArr[2][5].setInfo(1,2,3,4,5,6,7,8,9);



	for(int i=0; i<3; i++)
		status[i]->setStruct(nameArr[i],infoArr[i],costArr[i],indexArr[i],statArr[i]);
	
	for(int i=0; i<3; i++) {
		delete[]nameArr[i];
		delete[]costArr[i];
		delete[]indexArr[i];
		delete[]statArr[i];
	}
}
void Virus::getVirusStatus const(VirusStatus* _Vstatus) {
	_Vstatus = Vstatus;
}
void Virus::setDifficulty(int _difficulty, int _sinario) {
	difficulty = _difficulty;
	sinario = _sinario;

	setTech(difficulty, difficulty/2, (sinario==1)*10+difficulty, (sinario==2));//���� ����
}
void Virus::getTechTree const(int index, TechTree* _tree) {
	_tree = NULL;
	if( index<3 && index>=0 )
		_tree = status[index];
}