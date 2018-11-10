/*
HongJeongMo C++

Chapter 1_11 header file, link error

error LNK1120
:compiler can't find the definition part of function in the files(file missing)
*/

#include <iostream> // <compiler's_header_file> 
#include "calculator.h" // "user_header_file.h"
using namespace std;


int main()
{
	cout << add(2, 3) << endl;
	return 0;
}


// move to calculator.cpp
//int add(int a, int b)
//{
//	return a + b;
//}