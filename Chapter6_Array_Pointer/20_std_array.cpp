/*
HongJeongMo C++

Chapter 6_20

#include <array>
std::array
*/

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}


int main_std_array()
{
	//int array[] = {1,2,3,4,5}
	array<int, 5> my_arr = { 1,2,3,4,5 }; //array<datatype of element, length>
	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2, };
	my_arr = { 3,2,1,0,4 };

	cout << my_arr[2] << endl;
	cout << my_arr.at(2) << endl;//with exception
	cout << my_arr.size() << endl;
	printLength(my_arr);


	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	sort(my_arr.begin(), my_arr.end()); //ascending
	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	sort(my_arr.rbegin(), my_arr.rend()); //descending
	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}