/*
HongJeongMo C++

Chapter 7_9
Function Pointer
Even function has own memory address
*/

#include <iostream>
#include <array>
#include <functional> //c++11 support

using namespace std;

int func(int x)
{
	return x + 5;
}

int func2()
{
	return 10;
}

int func3(int x)
{
	return 10 + x;
}

bool isEven(const int &element)
{
	if (element % 2 == 0) return true;
	else return false;
}

bool isOdd(const int &element)
{
	if (element % 2 != 0) return true;
	else return false;
}


void printNumbers(const array<int, 10> &my_array, bool (*check_fcn)(const int&)) //  function<bool(const int &)> check_fcn , std::function
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element << endl;
	}
}


int main()
{
	int(*fcnptr)(int);//function pointer declare : datatype(*identifier)(parameterDatatypes)
	function<int(int)> fcnptr2; //Use functional::std::function, function<datatype(parameter)> identifier 


	fcnptr = func;
	cout << fcnptr(5) << endl; 
	//fcnptr = func2; // X , func2 has no parameter
	fcnptr = func3; // O
	cout << fcnptr(5) << endl;

	fcnptr2 = func;
	cout << fcnptr2(1) << endl;
	cout << endl;

	array<int, 10> my_array{ 1,2,3,4,5,6,7,8,9,10 };

	printNumbers(my_array,isEven);
	cout << endl;

	printNumbers(my_array,isOdd);



	return 0;
}