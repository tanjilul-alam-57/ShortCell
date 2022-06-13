/*
 * CCellDatabase.h
 *
 *  Created on: Mar 27, 2019
 *      Author: Tanjil
 */

#ifndef CCELLDATABASE_H_
#define CCELLDATABASE_H_

#include "CCellDatabase.h"
#include "CTemplateDatabase.h"
#include"CCell.h"
#include <list>

class CCellDatabase : public CTemplateDatabase<CCell>
{

public:

	CCellDatabase();

	void addCell( const CCell& cell);

	void print();

	void clear();

};


#endif /* CCELLDATABASE_H_ */
