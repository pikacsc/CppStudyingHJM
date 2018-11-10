/*
HongJeongMo C++

Chapter 4_1
local variable, scope, duration

:: ¢º scope resolution operator


*/


#include <iostream>

using namespace std;


namespace work1
{

	int a = 3;
	void plus()
	{
		a += 3;
		cout << "work1:: plus() " << a << endl;
	}




}



namespace work1::semiwork::detail //C++ 17, nested namespace
{
	int secret = 5;
}

namespace work2
{
	int b = 1;
	void plus()
	{
		b += 5;
		cout << "work1:: plus() " << b << endl;
	}

}


int main_chapter4_localvariable()
{

	int apple = 5;

	cout << apple << endl;

	{
		int apple = 1; //inside of the blocks you can initialize with same name but not recommended(namehiding)
		cout << apple << endl;// 1
							  // apple will be destoryed at the end of the block
	}

	cout << apple << endl; //5
	cout << endl;

	cout << work1::a << endl;
	cout << work2::b << endl;
	cout << endl;

	cout << work1::semiwork::detail::secret << endl;
	return 0;
}