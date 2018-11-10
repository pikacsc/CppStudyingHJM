/*
HongJeongMo C++

Chapter 6_14

Reference Variable
			
Reference Variable is can be used as a nickname of some variable

Strct ot;
int &v1 = ot.st.v1;
v1 = 1; // ot.st.v1 = 1;


*/

#include <iostream>

using namespace std;


void doSomething(int n) //pass by value, make temp variable and copy value
{
	n = 10;
	cout << "In doSomething(int n) " << n << " address : " << &n <<  endl;
}


void doSomething2(int *n) //pass by pointer, make temp pointer variable and copy address, no copy value
{
	*n = 30;
	cout << "In doSomething2(int *n) " << *n << " address : " << &n << endl;
}

void doSomething3(int &n) //pass by reference, pass the variable itself, no copy address and value
{
	n = 20;
	cout << "In doSomething3(int &n) " << n << " address : " << &n << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};


int main_ReferenceVariable()
{
	int value = 5;

	int *ptr = nullptr;
	ptr = &value;


	//Reference Variable
	int &ref = value; //it should be initialized


	cout << "&value : " << &value << endl;
	cout << "&ref : " << &ref << endl;  // int value = 5; int &ref = value; &ref address is same with value's address
	cout << "ptr : " << ptr << endl; 
	cout << "&ptr : " << &ptr << endl; // pointer variable has own address
	ref = 10; // *ptr = 10;
	cout << "ref = 10;" << endl;
	cout << endl;

	cout << ref << endl;
	cout << *ptr << endl;

	const int y = 8;
	const int &ref2 = y;


	int n = 5;
	cout << n << endl;
	doSomething(n); 
	cout <<" In main : " <<  n << endl;
	cout <<" In main : " << &n << endl;
	cout << endl;

	doSomething2(&n); 
	cout << " In main : " << n << endl;
	cout << " In main : " << &n << endl;
	cout << endl;

	doSomething3(n);  
	cout << " In main : " << n << endl;
	cout << " In main : " << &n << endl;
	cout << endl;



	Other ot;

	int &v1 = ot.st.v1; 
	v1 = 1; //ot.st.v1 = 1;
	
	int value2 = 5;
	int *const ptr2 = &value2;
	ref = value2;  // ref = value2; ==  int *const ptr2 = &value2;

	cout << *ptr2 << endl;
	cout << ref << endl;

	return 0;
}