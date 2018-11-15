/*
HongJeongMo C++

Chapter B_4 derived class contruct, initalization

*/

#include <iostream>
using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int & i_in = 0)
		: m_i(i_in)
	{
		cout << "Mother construction " << endl;
	}


	int getValue()
	{
		return m_i;
	}

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}
};

class Child : public Mother
{
public:
	float m_d;
public:
	Child()
		: m_d(1.f), Mother(1024)/*¡çhided */   // even if 'm_d(1.0)' is in front, always base class constructor excute first
	{
		cout << "Child contruction " << endl;
	}
};


class A 
{
public:
	A(int a)
	{
		cout << "A : " << a << endl;
	}

	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B(int a,double b)
		: A(a)
	{
		cout << "B : " << b << endl;
	}

	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		:B(a, b)
	{
		cout << "C : " << c << endl;
	}

	~C()
	{
		cout << "Destructor C" << endl;
	}
};


int main()
{
	Child c1;
	cout << sizeof(Mother) << endl; //4 sizeof(m_i)
	cout << sizeof(Child) << endl; //8 sizeof(m_d) + sizeof(m_i)
	cout << endl;

	C c(1024, 3.14, 'a');
	/*result
	A : 1024
	B : 3.14
	C : a
	Destructor C
	Destructor B
	Destructor A
	
	*/
	return 0;
}