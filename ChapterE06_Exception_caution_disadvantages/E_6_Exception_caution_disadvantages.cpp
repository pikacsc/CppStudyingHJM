/*
HongJeongMo C++

Chapter E_6 Exception disadvantages and caution

if you can spot the exception then use 'if' rather then 'catch'

cover try{} only in really unexpected exception can be occurred, and make it short

*/
#include <iostream>
#include <memory> // smart pointer
using namespace std;

class A
{
public:
	~A()
	{
		//throw "error"; //warning C4297, in destructor, can't throw exception
	}
};


int main()
{
	try
	{
		int *i = new int[10000000];

		unique_ptr<int> up_i(i); // if you use unique_ptr(smart pointer) then it will delete *i automatically

		// do something with i
		throw "error";
		
		delete[]i; // if you don't use unique_ptr and "error" occurred then 
		//delete[]i; will be dead code, so memory leak will occurred
		
		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}
	return 0;
}