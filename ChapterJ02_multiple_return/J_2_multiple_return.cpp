/*
HongJeongMo C++

Chapter J_2 multiple return with tuple

*/
#include <iostream>
#include <tuple>
using namespace std;


auto my_func()
{
	//return tuple<int, int, int>(123, 456, 789);
	return tuple(123, 456, 789); //in c++17 you can omit <int, int, int>
}

int main()
{
	cout << "Hello, world" << endl;

	auto result = my_func();

	cout << get<0>(result) << " " << get<1>(result) << " " << get<2>(result) <<  endl; //123 456 789
	
	auto[a, b, c] = my_func(); // you can intialize variable with multiple return

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	return 0;
}