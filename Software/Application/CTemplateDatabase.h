/*
 * CTemplateDatabase.h
 *
 *  Created on: Mar 27, 2019
 *      Author: Tanjil
 */

#ifndef CTEMPLATEDATABASE_H_
#define CTEMPLATEDATABASE_H_

using namespace std;
#include<iostream>
#include<list>
#include"CCell.h"
#include<string>

using namespace std;

template <class T>
class CTemplateDatabase
{
private:
	std::list<T> m_list;
public:

	CTemplateDatabase();

	~CTemplateDatabase();
	void addData(T const& location);


	void print();

	void clear();


};

template <class T>
inline CTemplateDatabase<T>::CTemplateDatabase()
{
}

template <class T>
inline void CTemplateDatabase<T>::addData(T const& location)
{

		m_list.push_back(location);


}



template <class T>
inline void CTemplateDatabase<T>::print()
{
	typename std::list<T>::iterator itr; // important to use typename keyword
	for(itr = m_list.begin();itr!=m_list.end();++itr)
	{
		itr->print();
	}
}

template <class T>
inline void CTemplateDatabase<T>::clear()
{
	m_list.clear();
}

template<class T>
inline CTemplateDatabase<T>::~CTemplateDatabase()
{
}




#endif /* CTEMPLATEDATABASE_H_ */
