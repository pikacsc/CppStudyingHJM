/*
HongJeongMo C++

Chapter B_8 using Base::

*/

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}


	void print2()
	{
		cout << "I'm base" << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;

public: 
	Derived(int value)
		:Base(value)
	{}

	using Base::m_i; //public: using Base::variable, variable become public  

private:
	using Base::print; // do not add (), even though Base print() is public, you can set private in Derived
	// by using Base::functionname;

	void print2() = delete; // or you can use 'delete'

};

void doSomething()
{
	Derived d2(5);
	d2.m_i = 2; //thanks to using Base::variable, now you can access it
	cout << d2.m_i << endl;
}


int main()
{
	Derived derived(7);
	derived.m_i = 1024;
	doSomething(); // 2

//	derived.print(); //X
	Base base(5);
	base.print();
	return 0;
}

