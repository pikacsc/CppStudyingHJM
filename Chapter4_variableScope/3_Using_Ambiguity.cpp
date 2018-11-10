/*
HongJeongMo C++

Chapter 4_3
Using and Ambiguity


using namespace shouldn't be in header file 
because it would affect in all the codes 
and you can't cancel using namespace later



*/

#include <iostream>

namespace a
{
	int my_var(10);
}


namespace b
{
	int my_var(20);
}

int UsingNameSpace()
{
	
	//using namespace std; 
	using std::cout;
	using std::endl;
	
	cout << "Hello" << endl;
	
	cout << a::my_var << endl; // you can specify namespace::variable 
	cout << b::my_var << endl;

	


	//you can use block scope {} and coding like below
	{
		using namespace a;
		cout << my_var << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}





	return 0;
}