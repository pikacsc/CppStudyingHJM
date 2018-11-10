/*
HongJeongMo C++

Chapter 1_14 preprocessor
preprocessing before compiling
OS check, hardware check, etc checking processing
commonly used in multiplatform software development

*/
#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 9 //When you make macro, All caps name is recommended

#define MAX(a, b) ( ((a)>(b)) ? (a) : (b) ) 
//Nowadays, C++ compiler has std::max() already in 'algorithm' header, so we don't have to make new one

#define LIKE_APPLE 

void DoSomething2();

void DoSomething() 
{
	//conditional compiling
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange" << endl; //blurry, cause LIKE APPLE has been defined, so dead code
#endif
}

int main()
{
	cout << MY_NUMBER << endl; // 9
	cout << MAX(1 + 3, 2) << endl; // 4
	cout << max(1 + 3, 2) << endl; // 
	DoSomething(); //Apple
	DoSomething2(); //Orange, cause no #define LIKE_APPLE in anotherDoSomthing.cpp 
	return 0;


//conditional compiling
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange" << endl; //blurry, cause LIKE APPLE has been defined, so dead code
#endif
}