/*
HongJeongMo C++

Chapter 8_12
Friend Function

*/

#include <iostream>

using namespace std;

class A;
class B;
class C; //forward declaration

class A
{
private:
	int m_value = 1;
	
	friend void doSomething(A& a, B& b); //declare friendfunction, friend function signature

	friend class B;
};



class B
{
private:
	int m_value = 2;

	friend void doSomething(A& a, B& b);

	friend class C; //friend class
public:
	void doSomething2(A& a)
	{
		cout << a.m_value << endl;
	}
};


class C
{
private:
	int m_value = 3;
public:
	void doSomething3(B& b)
	{
		cout << b.m_value << endl;
	}
};




void doSomething(A& a, B& b) //although int m_value is private, doSomething can access m_value, cause it's class A'friend function
{
	cout << a.m_value << " " << b.m_value <<  endl;
}


int main()
{
	A a;
	B b;
	b.doSomething2(a);
	return 0;
}