/*
 * CCell.h
 *
 *  Created on: Mar 27, 2019
 *      Author: Tanjil
 */

#ifndef CCELL_H_
#define CCELL_H_
using namespace std;
#include <iostream>
#include<string>
#include<stdlib.h>

class CCell {

private :
	double m_RSRP;
	double m_RSRQ;
	double m_SINR;
	string m_Cell_ID;

public:
	CCell(double RSRP=0, double RSRQ=0, double SINR=0, string Cell_ID="");
	void print();
	double getRSRP();
	double getRSRQ();
	double getSINR();
	string getCELLID();
	bool Compare_RSRP(CCell, CCell);

};

#endif /* CCELL_H_ */
