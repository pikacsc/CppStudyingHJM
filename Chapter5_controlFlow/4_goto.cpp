/*
HongJeongMo C++

Chapter 5_4

Jump
¢ºgoto, break, continue

*/

#include <iostream>
#include <cmath> //sqrt()

using namespace std;

int goto_main()
{
	double x;


tryAgain : //label : , you can use "goto label;" then jump to this line 
	cout << "Enter a unsigned integer number :" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain;

	cout << sqrt(x) << endl;

	



	return 0;
}