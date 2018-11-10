/*
HongJeongMo C++

Chapter 2_6
Boolean Type

*/

#include <iostream>

bool isEqual(int a, int b);

int getChapter2_6()
{
	using namespace std;

	//true(1)
	//false(0)

	bool b1 = 0; // or you can initialize like this, bool b1 = true;
	bool b2(false); // direct initialization
	bool b3{ true }; //uniform initialization
	b3 = false;

	cout << std::boolalpha; // true, false view
	cout << b3 << endl;
	cout << b1 << endl;
	cout << "Not operator, !true : " << !true << endl;
	cout << "Not operator, !false : " << !false << endl;
	cout << endl;

	cout << !b1 << endl;// true;
	cout << !b2 << endl;// true;
	cout << endl;

	cout << (true && true) << endl; //and operator, &&, both A and B satisfied
	cout << (true || true) << endl; //or operator, ||, A or B satisfied

	if (false) // if(condition), if condition is true or anything else except 0 then do next code
		cout << "This is true" << endl;
	else 
	{
		cout << "This is false" << endl;
		cout << "and you put made the code more then one so use {}";
	}
	cout << endl;


	cout << isEqual(2, 2) << endl;
	cout << endl;

	if (5) //you can put the any number except 0, 0 is false
		cout << "True" << endl;
	else
		cout << "False" << endl;


	int c = 0;
	cout << "Type the number : ";
	cin >> c;

	if (c % 2 == 0)
		cout << "You typed even number" << endl;
	else
		cout << "You typed odd number" << endl;

	return 0;
}

bool isEqual(int a, int b)
{
	/*
	if (a == b)
		return true;
	else
		return false;*/

	bool result = (a == b);
	return result;
}