/*
HongJeongMo C++

Chapter 6_7a
NULL Pointer
assign NULL or 0 value for preventing garbage
*/

#include<iostream>
#include<cstddef>

using namespace std;

void doSomething(double *ptr)
{
	cout << "address of pointer variable in doSomething() " << &ptr << endl;
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << std::endl;
	}
}


int main_nullptr()
{
	double *ptr = NULL; // null pointer , or you can put 0;
	double *ptr2 = nullptr; //modern c++
	double *ptr3{ nullptr };

	doSomething(ptr);
	doSomething(nullptr);
	double d = 123.4;
	doSomething(&d);

	ptr = &d;
	
	doSomething(ptr);

	nullptr_t nptr{ nullptr } ; // null pointer only variable
	
	cout << "address of pointer variable in main() " << &ptr << endl;
	

	return 0;
}