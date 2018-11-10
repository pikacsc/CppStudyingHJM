/*
HongJeongMo C++

Chapter 6_17
C++11 For-each
*/

#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>


int main_forEach()
{
	using namespace std;

	int fibonacci[] = { 0, 1, 1, 2 ,3, 5, 8, 13, 21, 34, 55, 89 };

	int max_number = numeric_limits<int>::lowest();

	for (const auto &n : fibonacci)
		max_number = max(max_number, n);
	cout << max_number << endl;




	vector<int> fibonacci2 = { 0, 1, 1, 2 ,3, 5, 8, 13, 21, 34, 55, 89 }; // using vector


	for (const auto &n : fibonacci2)
		max_number = max(max_number, n);
	cout << max_number << endl;






	//output
	for (int number : fibonacci) //for(int i : array)
		cout << number << " ";
	cout << endl;


	//change array values
	for (int& i : fibonacci)
	{
		i = 10;
		cout << i << " ";
	}

	cout << endl;

	for (auto& number : fibonacci)// you can use 'auto'
	{
		number = 2;
		cout << 2 << " ";
	}

	cout << endl;


	return 0;
}