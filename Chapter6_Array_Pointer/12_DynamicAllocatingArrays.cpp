/*
HongJeongMo C++

Chapter 6_12

Dynamic Allocating Arrays

*/

#include<iostream>

using namespace std;

int main_DynamicAllocatingArrays()
{
	//static allocating array
	//const int length = 5;
	//int array[length];

	
	//Dynamic Allocating Arrays

	int length;
	cin >> length;
	int *array = new int[length](); // new int[length]() : initialize 0 value
	

	for (int i = 0; i < length; i++)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}
	cout << endl;

	for(int i = 0; i < length; i++)
	{
		array[i] = i+1;
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	//keep in mind, always delete and assigning nullptr;
	delete [] array;
	array = nullptr;


	int fixedArray[] = { 1,2,3,4,5 };
	int *array2 = new int[5]{ 1,2,3,4,5 };
	//new int[length]{1,2,3,4,5,6,7} you can initialize like this, however becareful runtime error
	//you can't omit 'length'

	delete[]array2;
	array2 = nullptr;
	return 0;
}