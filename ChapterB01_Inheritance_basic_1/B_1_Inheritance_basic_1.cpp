/*
HongJeongMo C++

Chapter B_1 Inheritance(is-a relationship)_basic_1 
*/

#include <iostream>

using namespace std;

class Mother // base class
{
	//protected: //access granted to derived class only 
private: //In private, derived class can't access int m_i;, in this time you can use Mother::setter, Mother::getter functions
	int m_i;
public:
	Mother() // when derived class contructed , mother class also contructed
	{
	}


	Mother(const int& i_in)
		:m_i(i_in)
	{
		std::cout << "Mohter constructor" << std::endl;
	}

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};


//base class(mother class)
//derived class(child class)


//class derivedclassName : accessspecifier baseclassName
class Child : public Mother //class 'Child' is a derived class, 'Child' class is derived from 'Mother' class(base class)
{
private:
	double m_d;

public:
	Child(const int & i_in, const double & d_in)
		// : m_i(i_in), m_d(d_in) // X
		: Mother(i_in), m_d(d_in)
	{
		/*	Mother::setValue(i_in);
			m_d = d_in;*/
	}


	void setValue(const int & i_in, const double & d_in)
	{
		Mother::setValue(i_in);
		m_d = d_in;
	}

	void setValue(const double & d_in) //if derived class has a same name function then compiler follow derived class first
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

class Daughter : public Mother //derived class
{

};

class Son : public Mother //derived class
{

};

int main()
{
	Mother mother(1024);
	mother.setValue(1024);
	cout << "Mother : " << mother.getValue() << endl; //1024

	Child child(1024, 128);
	/*child.Mother::setValue(1024);
	child.setValue(128); *///child class can have int m_i like mother class
	cout << "child.Mother:: : " << child.Mother::getValue() << endl; //1024
	cout << "Child : " << child.getValue() << endl; //128
	return 0;
}