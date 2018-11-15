/*
HongJeongMo C++

Chapter C_10 Dynamic Casting

*/

#include <iostream>
#include <string>

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

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};


class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

int main()
{
	Derived1 d1;
	Base *base = &d1;
	auto *base_to_d1 = dynamic_cast<Derived1*>(base);
	cout << base_to_d1->m_j << endl;
	if (base_to_d1 == nullptr) // when you use dynamic_cast, if it fail, return nullptr;
	{
		cout << "dynamic_cast fail" << endl;
		exit(1);
	}

	auto *base_to_d2 = dynamic_cast<Derived2*>(base);
	if (base_to_d2 == nullptr)
	{
		cout << "dynamic_cast fail" << endl;
		exit(1);
	}
	cout << base_to_d2->m_name << endl;
/*
	auto *StaticCast_base_to_d2 = static_cast<Derived2*>(base); 
	StaticCast_base_to_d2->print();
	//static_cast wouldn't be fail but no runtime error checking
	//it can be useful sometimes but not recommended

	*/

	return 0;
}