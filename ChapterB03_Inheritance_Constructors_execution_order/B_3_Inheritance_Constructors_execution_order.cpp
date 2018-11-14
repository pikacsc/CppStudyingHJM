/*
HongJeongMo C++

Chapter B_3 Constructors execution order

*/
#include <iostream>

class Mother
{
public:
	int m_i;

public:
	Mother(const int & i_in = 0)
		: m_i(i_in)
	{
		std::cout << "Mother construction " << std::endl;
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
	double m_d;

public:
	Child()
	//	: m_i(1024)// X 
		: m_d(1.0), Mother()/*¡çhided */   // even if 'm_d(1.0)' is in front, always base class constructor excute first
	{

		std::cout << "Child contruction " <<std::endl;

		//this->m_i = 10; // As long as Mother::m_i is public, you can access it whenever you want, but not recommended
		//this->Mother::m_i = 1024;
	}
};



class IPhone3gs
{
public:
	IPhone3gs()
	{
		std::cout << "IPhone3gs constructor" << std::endl;
	}
};


class IPhone4 : public IPhone3gs
{
public:
	IPhone4()
	{
		std::cout << "IPhone4 constructor" << std::endl;
	}
};

class IPhone5 : public IPhone4
{
public:
	IPhone5()
	{
		std::cout << "IPhone5 constructor" << std::endl;
	}
};

int main()
{
	Child c1;
	/*Constructors execution order
	
	MotherConstruction
	ChildConstruction
	*/
	std::cout << std::endl;


	IPhone5 caseA;
	/*Constructors execution order
	
	IPhone3gs constructor
	IPhone4 constructor
	IPhone5 constructor
	*/
	std::cout << std::endl;


	IPhone4 caseB;
	/*Constructors execution order
	
	IPhone3gs constructor
	IPhone4 constructor
	*/
	std::cout << std::endl;

	return 0;
}