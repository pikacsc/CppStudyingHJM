/*
HongJeongMo C++

Chapter 6_8
pointer and static array

static array : array length defined in compile time
*/


#include <iostream>

using namespace std;

struct MyStruct
{
	int array[5] = { 9, 7, 5, 3, 1 };
};


//void printArray(int array[])
void printArray(int *array) 
{
	cout << sizeof(array) << endl; // 4
	cout << *array << endl;
	*array = 100;
}

void doSomething(MyStruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}


int main_StaticArray()
{
	MyStruct ms;
	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;
	doSomething(&ms);
	int array[5] = { 9, 7, 5, 3, 1 };
	cout << array[0] << " " << array[1] << endl;
	cout << array << endl;
	cout << &(array[0]) << endl;
	
	cout << *array << endl;

	int *ptr = array;
	cout << "ptr: " << ptr << endl;
	cout << "*ptr: " << *ptr << endl;

	printArray(array);

	cout << array[0] << " " << *array << endl;
	/*char name[] = "jackjack";
	cout << *name << endl;
*/
	return 0;
}