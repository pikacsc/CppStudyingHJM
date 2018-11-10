/*
HongJeongMo C++

Chapter 8_10
Static Member Variable
*/

#include <iostream>
using namespace std;

class Something
{
public:
	static const int s_value = 1; //static const should be initialized 
};

//int Something::s_value = 1; //static variable should be defined in cpp file

int main()
{
	//all same address

	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;
	
	//st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	//Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}