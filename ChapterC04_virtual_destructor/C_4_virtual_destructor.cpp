/*
HongJeongMo C++

Chapter C_4 virtual destructor

When you construct class with dynamic allocating memory and upcasting it 
if you don't use virtual destructor, then memory leak will be held
*/

#include <iostream>

using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int *m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	virtual ~Derived()  
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	Derived *derived = new Derived(5);
	Base *base = derived;
	delete base; //without virtual destructor() : delete base only, memory leak
	//with virtual destructor() : delete derived, base, no memory leak
	return 0;
}