/*
HongJeongMo C++

Chapter 8_13
Anonymous class
*/

#include <iostream>

using namespace std;

class A
{
public:
	void print()
	{
		cout << "Hello" << endl;
		cout << this << endl;
	}
	~A()
	{
		cout << this << "destructed" << endl;
	}
};

int main()
{
	
	A().print(); //Anonymous class, you can't reuse class A
	//A a;
	//a.print();

	A().print();
	return 0;
}