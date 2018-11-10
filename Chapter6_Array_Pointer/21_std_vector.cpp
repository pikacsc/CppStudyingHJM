/*
HongJeongMo C++

Chapter 6_21

#include<vector>
std::vector

'std::vector' can be dynamic memory allocated,
plus it will be deleted automatically, no need to do 'delete vector; vector = nullptr;'
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> array = { 1,2,3,4,5 };
	vector<int> array2 = { 1,2,3,4,5 };
	vector<int> array3{ 1,2,3,4,5,6 };


	cout << array.size() << endl;
	cout << array2.size() << endl;
	cout << array3.size() << endl;
	
	for (auto &itr : array)
		cout << itr << " ";
	cout << endl;


	cout << array[1] << endl;
	cout << array.at(1) << endl;

	array.empty();
	array.resize(2);
	cout << array.size() << endl; // you can resize vector

	return 0;
}