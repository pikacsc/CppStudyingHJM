/*
HongJeongMo C++

Chapter E_5 Exception function try

*/
#include <iostream>
using namespace std;

class A
{
private:
	int m_x;
public:
	A(int x) : m_x(x)
	{
		if (x <= 0)
			throw 1;
	}
};

class B : public A
{
public:
	//B(int x)
	//	: A(x)
	//{
	//}
	
	//function try
	B(int x) 
		try : A(x)
	{
		// do initialization
	}
	catch (...)
	{
		cout << "Catch in B constructor" << endl;
		// even though, there is no rethrow here, but automatically rethrowing
	}

};


int main()
{
	try
	{
		B b(0);
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}

	/*
	Catch in B constructor
	Catch in main()
	*/
	return 0;
}