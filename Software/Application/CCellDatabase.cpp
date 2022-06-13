/*
 * CCellDatabase.cpp
 *
 *  Created on: Mar 27, 2019
 *      Author: Tanjil
 */

#include "CCellDatabase.h"
#include <string>

using namespace std;

CCellDatabase::CCellDatabase()
{
}

void CCellDatabase::addCell( const CCell& cell)
{
	 CTemplateDatabase<CCell>::addData(cell);
}


void CCellDatabase::print()
{
	CTemplateDatabase<CCell>::print();
}

void CCellDatabase::clear()
{
	CTemplateDatabase<CCell>::clear();
}




