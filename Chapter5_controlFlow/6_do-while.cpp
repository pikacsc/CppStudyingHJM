/*
HongJeongMo C++

Chapter 5_6

Loops
while, ¢ºdo while, for

The difference between 'while' and 'do-while' is 
in while, check the condition first then do code later
however, in do-while, do code first then check the condition later
*/

#include <iostream>

int main_dowhile()
{
	using namespace std;
	// must be declared outside do/while loop

	int selection;
	do
	{
		cout << "1.add" << endl;
		cout << "2.sub" << endl;
		cout << "3.mult" << endl;
		cout << "4.div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected " << selection << endl;

	return 0;
}