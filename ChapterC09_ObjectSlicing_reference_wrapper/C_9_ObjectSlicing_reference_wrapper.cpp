/*
HongJeongMo C++

Chapter C_9 Object Slicing, reference wrapper

*/
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base &b)
{
	b.print();
}

void doSomething2(Base b) //object slicing
{
	b.print();
}


int main()
{
	Derived d;
	Base &b = d;
	Base bs = d; //object slicing

	b.print(); //I'm derived
	bs.print(); //I'm base

	doSomething(d); //I'm derived
	doSomething2(d); // I'm base
	cout << endl;

	Base b2;

	//std::vector<Base> my_vec; //object slicing
	std::vector<std::reference_wrapper<Base>> my_vec; // std::vector<Base&> my_vec
	my_vec.push_back(b2);
	my_vec.push_back(d);

	for (auto & ele : my_vec)
		ele.get().print();

	return 0;
}