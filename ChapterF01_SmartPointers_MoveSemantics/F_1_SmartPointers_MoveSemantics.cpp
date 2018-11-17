/*
HongJeongMo C++

Chapter F_1 SmartPointers and move semantics

*/

#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;
using namespace MyClass;
// RAII : resource acquisition is initialization

void doSomething()
{
	try
	{
		//Resource *res = new Resource; 
		
		AutoPtr<Resource> res(new Resource); // smart pointer
		
		return;

		//work with res
		if (true)
		{
			throw - 1; //exception
		}
		//delete res;
		//res = nullptr;
	}
	catch (...)
	{

	}
	
	return;
}


int main()
{
	doSomething();
	cout << endl;
	{
		AutoPtr<Resource> res1(new Resource);
		AutoPtr<Resource> res2;

		cout << boolalpha;

		cout << "res1 : " << res1.m_ptr << endl;
		cout << "res2 : " << res2.m_ptr << endl;

		res2 = res1; // move semantics
		//if res1, res2 pointing same address, when res1 destructed, res2 will also destructed as well
		//This will occurred run-time error

		cout << "res1 : " << res1.m_ptr << endl;
		cout << "res2 : " << res2.m_ptr << endl;
	}

	//value semantics (copy semantics)
	//reference semantics (pointer)
	//move semantics (move)

	return 0;
}