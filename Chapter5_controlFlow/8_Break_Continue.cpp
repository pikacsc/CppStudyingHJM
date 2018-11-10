/*
HongJeongMo C++

Chapter 5_8

Jump
goto, ¢ºbreak, ¢ºcontinue

*/


#include <iostream>

using namespace std;

void breakOrReturn()
{
	char ch;
	cin >> ch;

	while (true)
	{
		if (ch == 'b')
			break; //jump to out of the loop
		else
			return ; // end the function
	}

	cout << "end of the breakOrReturn" << endl;
}


int BreakContinue()
{
	int count = 0;

	while (true)
	{
		cout << count << endl;
		if (count == 10) break; //jump to out of loop
		count++;
	}

	breakOrReturn();

	cout << "wanna continue?" << endl;
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0) continue;// goto ++i not below logic, skip the logic keep ++i
		cout << i << endl;
	}

	while (1)
	{
		char ch;
		cin >> ch;
		if (ch == 'x')
			break;
		cout << ch << " " << count++ << endl;

	}


	return 0;
}