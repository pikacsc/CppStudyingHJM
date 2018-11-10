/*
HongJeongMo C++

Chapter 8_14
nested types

*/

#include <iostream>

using namespace std;



class Fruit
{
public:
	enum FruitType //nested types
	{
		APPLE,
		BANANA,
		CHERRY
	};

private:
	FruitType m_type;
public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};


int main()
{
	Fruit apple(Fruit::APPLE);

	if (apple.getType == Fruit::APPLE)
	{
		cout << "Apple" << endl;
	}
	return 0;
}