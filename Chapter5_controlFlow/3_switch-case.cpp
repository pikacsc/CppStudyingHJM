/*
HongJeongMo C++

Chapter 5_3
Conditional branches
if, ¢º switch case

*/

#include <iostream>
#include <string>

using namespace std;



enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	switch (static_cast<int>(color))
	{
		int a; // you can declare variable but not initialization
		case 0:
			a = 2; // however you can define variable here, but define only
			cout << "color is Black " << a << endl;
			break;
		case 1:
			cout << "color is white";
			break;
		case 2:
			cout << "color is red";
			break;
		case 3:
			cout << "color is green";
			break;
		default:
			cout << "color is blue";
			break;
	}
}

int switchCase()
{

	printColorName(Colors::BLACK);

	


	return 0;
}