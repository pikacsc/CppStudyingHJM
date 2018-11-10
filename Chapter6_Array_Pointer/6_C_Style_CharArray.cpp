/*
HongJeongMo C++

Chapter 6_6
C style Char Array
*/

#include <iostream>

using namespace std;

int mainCharArray()
{
	char myString[255] = "string";

	cin.getline(myString, 255);

	int ix = 0;
	while (true)
	{
		if (myString[ix] == '\0') break;
		cout << myString[ix] << " " << (int)myString[ix] << endl;
		++ix;
	}

	cout << endl;
	
	char source[] = "Copy this!";
	char dest[50];
	if (strcmp(source, dest) == 0)
	{
		cout << "same text" << endl;
	}// strcmp : string comparing, 0 means true, -1 means false



	return 0;
}
