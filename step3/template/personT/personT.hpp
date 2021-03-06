#ifndef __person_hpp
#define __person_hpp

#include <iostream>
#include <string>

using namespace std;

template <class NameType = string, class AgeType = int>
class Person
{
public:
	NameType m_Name;
	AgeType m_Age;

	Person(NameType name, AgeType age) : m_Name(name), m_Age(age) {}

	void showInfo();
	//{
	//	cout << endl;
	//	cout << "name: " << m_Name << '\t' << "age: " << m_Age << endl;
	//	cout << endl;
	//}
};

//template <class NameType, class AgeType>
template <class T1, class T2>
//void Person<NameType, AgeType>::showInfo()
void Person<T1, T2>::showInfo()
{
	cout << endl;
	cout << "name: " << m_Name << '\t' << "age: " << m_Age << endl;
	cout << endl;
}

void test()
{
	Person <> p1("ming",18);
	Person <> p2("uzi",20);
	p1.showInfo();
	p2.showInfo();
}


#endif
