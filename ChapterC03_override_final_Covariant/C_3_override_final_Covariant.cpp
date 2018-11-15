/*
HongJeongMo C++

Chapter C_3 override, final, Covariant

*/
#include <iostream>
using namespace std;

class A
{
public:
	virtual void print(int x) { cout << "A" << endl; }
	virtual void NoOverridePrint() final { cout << "You can't override this because of 'final" << endl; } // To block override, use 'final'
	virtual A* getThis() { 
		cout << "A::getThis()" << endl;
		return this; }
};


class B : public A
{
public:
	void print(int x) override { cout << "B" << endl; } // if you use 'override' then compiler will override this function forcefully
	//otherwise warning show up
	virtual B* getThis() { 
		cout << "B::getThis()" << endl;
		return this; }
};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
//	void NoOverridePrint() {} // X
};


int main()
{
	A a;
	B b;

	A &ref = b;
	ref.print(1);
	cout << endl;

	b.getThis()->print(1);
	ref.getThis()->print(2);

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;
	return 0;
}