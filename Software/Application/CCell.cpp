/*
 * CCell.cpp
 *
 *  Created on: Mar 27, 2019
 *      Author: Tanjil
 */

#include "CCell.h"

CCell::CCell(double RSRP, double RSRQ, double SINR, string Cell_ID) {

	m_RSRP = RSRP;
	m_RSRQ = RSRQ;
	m_SINR = SINR;
	m_Cell_ID = Cell_ID;
}

void CCell::print() {

	cout << "RSRP= " << m_RSRP << endl;
	cout << "RSRQ= " << m_RSRQ << endl;
	cout << "SINR= " << m_SINR << endl;
	cout << "CELL_ID= " << m_Cell_ID << endl;
}

double CCell::getRSRP() {

	return m_RSRP;
}

double CCell::getRSRQ() {
	return m_RSRQ;
}

double CCell::getSINR() {
	return m_SINR;
}

string CCell::getCELLID() {
	return m_Cell_ID;
}

bool CCell::Compare_RSRP(CCell First, CCell Next) {

	if (First.getRSRP() < Next.getRSRP())
		return true;

	if (First.getRSRP() > Next.getRSRP())
		return false;

	return true;
}

