/*
HongJeongMo C++

Chapter C_6 Virtual Function Table


Dynamic Binding with virtual function table

if function is a virtual and
if overrided function exist then 
binding with overrided function (virtualfunction : O, overrided function : O)

else if no overrided function exist
binding with virtual function (virtualfunction : O, overrided function : X)
	

else if function is not virtual
binding with allocated function (virtualfunction : X)


*/

#include <iostream>
using namespace std;

class Base
{
public:
	//FunctionPointer *__vptr;
	virtual void fun1() {};
    void fun2() {};
};

class Der : public Base
{
public:
	//FunctionPointer *__vptr;
	void fun1() {};
};


int main()
{ 
	Base s_b;
	Der s_d;
	Base *base = new Base;
	Der *der = new Der;
	cout << sizeof(base) << endl;
	cout << sizeof(der) << endl;
	
	delete base;
	base = nullptr;
	delete der;
	der = nullptr;
	return 0;
}