/*
HongJeongMo C++

Chapter 4_4
auto, TypeInfernce

*/

#include <iostream>



auto add(int x, int y)// you can use it as a return type but not allowed as a parameter
{
	return x + y;
}

auto add2(int x, int y) -> int// you can remain 'trail' -> returntype
{
	return x + y;
}


int AutoTypeInferce()
{
	using namespace std;
	
	auto a = 123; // 123 is integer number so obvious that type of a is "int"
	//and you can use "auto" keyword, compiler do typeinferencing automatically by literal

	auto d = 123.0; // double
	auto c = 1 + 2.0; // double

	auto result = add(1, 2); 

	cout << a << endl;

	return 0;
}



