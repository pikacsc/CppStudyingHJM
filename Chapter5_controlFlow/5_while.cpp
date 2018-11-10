/*
HongJeongMo C++

Chapter 5_5

Loops
¢ºwhile, do while, for

*/

#include <iostream>

using namespace std;

int while_main()
{
	cout << "while-loop test" << endl;

	int count = 0; 

	while (count < 10) 
	{
		cout << count << endl;
		count++;
		if (count == 10) break;// jump to out
	}


//make while() logic with goto label;
keepCounting :
	count++;
	cout << count << endl;
	if (count >= 20)
		goto endCounting;
	else
		goto keepCounting;
endCounting :
	return 0;



}