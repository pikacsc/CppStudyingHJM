/*
HongJeongMo C++

Chapter 7_14
assert(condition);
Run-time condition check

you can use it only Debug mode, in Release mode, assert wouldn't work

assert(condition); while running if condition is false then stop running


static_assert(condition);
compile-time condition check


*/

#include <iostream>
#include <cassert> // assert.h
#include <array>	
using namespace std;

void printValue(const array<int, 5> &my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);
	cout << my_array[ix] << endl;
}


int main()
{
	int number = 5;
	assert(number == 5); //always number should be 5, otherwise stop running;
	array<int, 5> my_array{ 1,2,3,4,5 };
	cout << my_array[5] << endl;

	printValue(my_array, 5); //runtime error


	const int number2 = 10;
	static_assert(number2 == 10, "always number should be 10(you can see this comment with error message)"); // 

	return 0;
}