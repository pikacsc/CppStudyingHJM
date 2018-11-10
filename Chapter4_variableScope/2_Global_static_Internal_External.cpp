/*
HongJeongMo C++

Chapter 4_2
Global variable, Static, Internal, External


int g_x; // 'g' means global, external linkage
static int g_x; // internal linkage
const int g_x; // X

extern int g_z;
extern const int g_z; //should initialized in other cpp file not header file


int g_y(1);
static int g_y(1);
const int g_y(1);

extern int g_w(1);
extern const int g_w(1);

linkage means link each obj files
Compiler, do compiling one cpp file to one obj file


*/



#include <iostream>
#include "Constants.h"


using namespace std;

void func();

int GlobalStaticInternalExternal()
{
	cout << "In this cpp file " << Constants::pi << "\treference :" << &Constants::pi << endl;
	func();

	return 0;
}