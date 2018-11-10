/*
HongJeongMo C++

Chapter 2_4
Floating Point Numbers

*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int getChapter2_5()
{
	using namespace std;

	float f(3.141592f);
	double d(3.141592);
	long double ld(3.141592);
	float f2(123456789.0f); // 10 significant digits


	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "floatingpoint, approximate value" << endl;
	cout << setprecision(16) << endl;
	cout << 1.0 / 3.0 << endl;
	cout << f2 << endl; //expecting value = 123456789.0f ,  real = 123456792 , 
	//because compiler put approximate value in floatingpoint varible, not absolute value
	cout << endl;
	
	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << setprecision(17);
	cout << d1 << endl; // 1
	cout << d2 << endl; //expecting value = 1 ,  real = 0.99999999999999989 , 
	cout << endl;
	cout << endl;


	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << "\t isnan :" << isnan(posinf) << "\t isinf :" << isinf(posinf) << endl; //inf
	cout << neginf << "\t isnan :" << isnan(neginf) << "\t isinf :" << isinf(neginf) << endl;  //-inf
	cout << nan << "\t isnan :" << isnan(nan) << "\t isinf :" << isinf(nan) << endl; // nan : not a number, -nan(ind) - non a number, indetermined

	//when you make the code, if you face those things then, mostly fucked up
	//To prevent those things, use isnan() from <cmath>



	return 0;
}

