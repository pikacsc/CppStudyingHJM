/*
HongJeongMo C++

Chapter 4_8
C++11,scoped enumerations(Enum Class)
*/


#include <iostream>



int EnumClass()
{
	using namespace std;

	enum Color
	{
		COLOR_RED,
		COLOR_BLUE
	};

	enum Fruit
	{
		FRUIT_BANANA,
		FRUIT_CHERRY
	};

	Color color = COLOR_RED;
	Fruit fruit = FRUIT_BANANA;

	if (color == fruit) 
		cout << "Color is fruit ?" << endl;



	//use enum class
	enum class EColor
	{
		ECOLOR_RED,
		ECOLOR_BLUE
	};

	enum class EFruit
	{
		EFRUIT_BANANA,
		EFRUIT_CHERRY
	};

	EColor ecolor = EColor::ECOLOR_RED; // class::variable
	EFruit efruit = EFruit::EFRUIT_BANANA;

	return 0;
}