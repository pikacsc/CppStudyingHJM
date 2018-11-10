/*
HongJeongMo C++

Chapter 8_11
Static Member Function
*/

#include <iostream>

using namespace std;

class Something
{
public:
	class _init //inner class
	{
	public:
		_init()
		{
			s_value = 9876; 
		}
	};


private:
	static int s_value;
	int m_value;
	
	static _init s_initialzier;

public:
	Something()
		: m_value(123)
	{}


	static int getValue() //Static Member Function
	{
		return s_value; 
		//return m_value; // X
	}

	int temp() //none static
	{
		return this->s_value; // 'this' can only be referenced inside non-static member functions
	}
};

int Something::s_value;
Something::_init Something::s_initialzier;

int main()
{
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;

	int (Something::*fptr1)() = &Something::temp;
	cout << (s2.*fptr1)() << endl;

	int (*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;

	return 0;
}