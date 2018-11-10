/*
HongJeongMo C++

Chapter 2_9
symbolic constants

*/

#include <iostream>
using namespace std;

void printNumber(int my_number);

int main()
{

	printNumber(123);
	constexpr double gravity{ 9.8 }; //initialization none-changable variable, compile-time type

	int inputNum;
	cin >> inputNum;

	const int special_number(inputNum); // you can't use constexpr, cause it's run-time type


	return 0;
}


void printNumber(const int my_number)//you can't redefinite value
{
	cout << my_number << endl;
}
