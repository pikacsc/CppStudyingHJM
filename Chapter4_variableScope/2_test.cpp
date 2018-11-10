#include <iostream>
#include "Constants.h"

extern int a = 123;

void func()
{
	using namespace std;
	cout << "In test.cpp " << Constants::pi << "\treference :"<< &Constants::pi  << endl;
}