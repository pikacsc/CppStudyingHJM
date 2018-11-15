/*
HongJeongMo C++

Chapter C_2 Virtual Functions

*/

#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; } // if you put 'virtual' in base function, 
	//in other derived classes they can override function in upcasting 
	//however it can be slow process later
};


class B: public A
{
public:
	virtual void print() { cout << "B" << endl; } // virtual is meaningless in this line, 
	//however, you can specify this function has been overrided by 'virtual'
};

class C: public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	virtual void print() { cout << "D" << endl; }
};

int main()
{
	A a;
	a.print();

	B b;
	b.print();

	C c;
	c.print();

	D d;
	d.print();
	cout << endl;

	A &ref = b; //Upcasting
	ref.print(); //without virtual: A
	//with virtual: B

	A &ref2 = c;
	ref2.print();  //without virtual: A
	//with virtual: C


	C &ref3 = d;
	ref3.print();  //without virtual: C
	//with virtual: D

	

	return 0;
}