/*
HongJeongMo C++

Chapter 5_7

Loops
while, do while, ¢º for


*/


#include <iostream>

int pow(int base, int exponent)
{
	int result = 1;
	for (int count = 1; count <= exponent; ++count)
	{
		result *= base;
	}
	return result;
}

int For_main()
{
	using namespace std;

	int j = 0;

	for (int i = 0; i < 10, j < 10; ++i, ++j) 
	{
		cout << i << endl;
		cout << j << endl;
	}// j is still exist but i is not

	cout << pow(2, 4) << endl;

	for (int a = 0; a < 9; ++a)
		for (int b = 0; b < 9; ++b)
		{
			cout << a << " " << b << endl;
		}

	return 0;
}