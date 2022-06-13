//============================================================================
// Name        : SortedList.cpp
// Author      : Md Tanjilul Alam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include"CCell.h"
#include"CCellDatabase.h"

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	CCell c1(.44, .55, .88, "017636516980");
	CCell c2(.46, .53, .81, "01567199000");
	CCell c3(.47, .54, .82, "01783809489");
	CCellDatabase db;
	db.addCell(c1);
	db.addCell(c2);
	db.addCell(c3);
	db.print();

  system("pause"); // <----------------------------------
	//c1.print();
	return 0;
}

