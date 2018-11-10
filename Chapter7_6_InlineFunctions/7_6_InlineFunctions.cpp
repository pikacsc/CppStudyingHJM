/*
HongJeongMo C++

Chapter 7_6
Inline Functions

if you make function with 'inline' or '_inline'
like this

inline int min(int x, int y)
{
	return x + y;
}

then

compiler will copy the body of function and paste to call part : min(5,6)
however compiler will do this when beneficial only



__forceinline

whether beneficial or not, compiler will copy and paste to call part : min(5,6), but not always


plus, nowadays 2018, compiler just use inline automatically, for optimization,
and build size can be big
*/

#include <iostream>

using namespace std;

inline int InlineMin(int x, int y)
{
	return x > y ? y : x;
}

int NoInlineMin(int x, int y)
{
	return x > y ? y : x;
}


int main()
{
	int num1, num2;
	num1 = NoInlineMin(1, 3);


	num2 = InlineMin(2, 4);
	// inline, so compiler will copy and paste of the function body like this
	/*num2 = inline InlineMin(2,4)   
	{
		return 2 > 4 ? 4 : 2;
	}*/


	cout << NoInlineMin(3, 2) << endl;
	cout << InlineMin(5, 6) << endl; // cout << ( 5 > 6 ? 6 : 5) << endl;


	return 0;
}