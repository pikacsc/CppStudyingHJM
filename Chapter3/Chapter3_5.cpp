/*
HongJeongMo C++

Chapter 3_5
Relational Operators
*/

#include <iostream>
#include <iomanip>
int getChapter3_5()
{
	using namespace std;
	int x, y;

	cin >> x >> y;
	cout << "Your input values are : " << x << " " << y <<endl;
	cout << endl;

	if (x == y)
		cout << "equal" << endl;
	if (x != y)
		cout << "not equal" << endl;
	if (x > y)
		cout << "x is bigger than y" << endl;
	if (x < y)
		cout << "x is less than y" << endl;
	if (x >= y)
		cout << "x is bigger than y or equal" << endl;
	if (x <= y)
		cout << "x is less than or equal to y" << endl;

	cout << endl;
	//floatingPoint case

	double d1(100 - 99.99); // 0.001
	double d2(10 - 9.99); // 0.001

	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;
		/*if (d1 > d2) cout << "d1 > d2" << endl;
		else
			cout << "d1 < d2" << endl;*/
		cout << ((d1 > d2) ? "d1 > d2" : "d1 < d2") << endl;
		cout << setprecision(16) << endl;
		cout << "d1 :" << d1 << endl;
		cout << "d2 :" << d2 << endl;
	}
	cout << endl;

	//
	const double epsilon = 1.0;
	if (abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
		
	return 0;
}