/*
HongJeongMo C++

Chapter 8_3
constructors

every class has own constructor function and it's running when class constructed

*/

#include <iostream>
#include <string>
using namespace std;


class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec; // class in class

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};





class Fraction
{
private:
	int m_numerator;
	int m_denominator;
	
	//set default 
	/*
	int m_numerator = 1; 
	int m_denominator = 1;
	*/
public:
	Fraction() // or use constructor, default constructor, usually hided
	{
		m_denominator = 1;
		m_numerator = 1;
		cout << "Fraction() constructor activated" << endl;
	}
	Fraction(const int& num_in, const int& den_in) // constructor with parameters, so it's not 'default constructor'
	{
		m_denominator = num_in;
		m_numerator = den_in;
		cout << "Fraction() constructor activated" << endl;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class Friend
{
private: 
		string m_name;
		int m_age;
public:
		Friend(const string &name, const int &age)
		{
			m_name = name;
			m_age = age;
			cout << "Friend(string &m_name, int &m_age) constructor activated" << endl;
			cout << "name : " << m_name << endl;
			cout << "age : " << m_age << endl;
		}
};


int main()
{
	Fraction frac; //if constructor() has no parameter then, omit '()'
	frac.print();
	Friend Jack("jack", 25.0f); //warning C4244,forced type casting, but still running
	Friend John{ "john", 25 };//argument type casting, Friend John{ "john", 25.0f }, no available, so error
	cout << endl;

	First first;
	/*
	1.SecondConstructor() , cause member of first class will be initialized first then execute FirstConstructor();
	2.FristConstructor() 
	*/
	return 0;
}