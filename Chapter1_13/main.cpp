/*
HongJeongMo C++

Chapter 1_13 namespace

*/


#include <iostream>

using namespace std;

namespace MySpace1
{
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2 
{
	int doSomething(int a, int b)
	{
		return a * b;
	}

	namespace InnerSpace
	{
		int subtract(int a, int b)
		{
			return a - b;
		}
	}
}


int main()
{
	cout << MySpace1::doSomething(3, 4) << endl; // MySpace1's doSomething()
	cout << MySpace2::doSomething(3, 4) << endl; // MySpace2's doSomething()

	using namespace MySpace1; //now you can omit MySpace1

	cout << doSomething(3, 4) << endl;

	MySpace2::InnerSpace::subtract(4, 2);


	using namespace MySpace2::InnerSpace; //now you can omit MySpace2::InnerSpace

	cout << subtract(4, 2) << endl;
	
	return 0;
}

