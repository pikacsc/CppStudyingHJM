/*
HongJeongMo C++

Chapter F_2 R-value References

*/
#include <iostream>
using namespace std;

void doSomething(int &lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int &&lref)
{
	cout << "R-value ref" << endl;
}


int getResult()
{
	return 100 * 100;
}


int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	//L-value references

	int &lr1 = x;	 // O  Modifiable l-values
	//int &lr2 = cs; // X  Non-modifiable l-values
	//int &lr3 = 5;  // X  R-values

	const int &lr4 = x;  // O Modifiable l-values
	const int &lr5 = cx; // O Non-modifiable l-values
	const int &lr6 = 5;  // O R-values



	//R-value references
	
	//int &&rr1 = x;  // X  Modifiable l-values
	//int &&rr2 = cx; // X  Non-modifiable l-values
	int &&rr3 = 5;    // O  R-values

	//const int &&rr4 = x;  // X  Modifiable l-values
	//const int &&rr5 = cs; // X  Non-modifiable l-values
	const int &&rr6 = 5;    // O  R-values;


	//L/R-value reference parameters
	doSomething(x);
	//doSomething(cx);
	doSomething(5);
	doSomething(getResult());




	return 0;
}