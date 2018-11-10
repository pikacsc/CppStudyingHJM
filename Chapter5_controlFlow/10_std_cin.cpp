/*
HongJeongMo C++

Chapter 5_10
std::cin

*/

#include <iostream>

using namespace std;

int getInt()
{
	while (1)
	{
		cout << "Enter a integer number : ";
		int x;
		cin >> x;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32758, '\n'); // buffer clear
			cout << "Invalid operator, please try again" << endl;
		}
		else
		{
			cin.ignore(32758, '\n'); // buffer clear
			return x;
		}
	}
}

char getOperator()
{
	while (1)
	{
		cout << "Enter an operator (+, -) : "; // TODO: more operators *, / etc
		char op;
		cin >> op;
		return op;
		if ((op == '+') | (op == '-'))
			return op;
		else
			cout << "Invalid operator, please try again" << endl;
	}
}

void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else
	{
		cout << "Invalid operator" << endl;
	}

}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();
	
	printResult(x, op, y);

	return 0;
}
