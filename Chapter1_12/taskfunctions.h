//#pragma once // if you don't want to use this then make header guard like below

#ifndef My_task // if not defined My_task
#define My_task // then define My_task 

#include "calculation.h"

void DoSomething()
{
	Subtract(Add(1, 2), Multiplying(1, 2));
}

#endif 