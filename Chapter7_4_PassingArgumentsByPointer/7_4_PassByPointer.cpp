/*
HongJeongMo C++

Chapter 7_4
Passing Arguments by Pointer (Call by pointer)

*/


#include <iostream>

using namespace std;

void foo(int *ptr) // initialize new int *ptr and copy address
{
	cout << "in function *ptr : "<< *ptr << " ptr : " << ptr << " &ptr : " << &ptr << endl;
}

int main()
{
	int value = 5;

	cout << "in main value : " << value << " " << "&value : " << &value;

	int *ptr = &value;

	cout << " &ptr : " << &ptr << endl;

	foo(ptr);
	foo(&value); 
	
	return 0;
}