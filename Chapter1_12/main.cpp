/*
HongJeongMo C++

Chapter 1_12 header file, link error

error C2084
:double including functions because of none header guard(#pragma once) 
*/


#include <iostream>
#include "taskfunctions.h"
#include "calculation.h"

using namespace std;

int main()
{
	DoSomething();
	return 0;
}



