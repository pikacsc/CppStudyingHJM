/*
HongJeongMo C++

Chapter 2_8
literal constants

*/

#include <iostream>

int getChapter2_8()
{
	using namespace std;
	
	//careful these letter, u, L, f, ul 
	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e100;

	//Octal : 0 1 2 3 4 5 6 7 10 11 12 13 14 15 16 17 20 21 22 ...
	//Hexa  : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int x = 012; // Octal
	cout << x << endl;
	cout << endl;

	int y = 0xF; //Hexa
	cout << y << endl;
	cout << endl;

	//C++ 14, binary literal
	int z = 0b1010'1111'1010;
	cout << z << endl;
	cout << endl;


	//Warning
	int num_items = 123;
	int price = num_items * 10; // if 10 is magic number, then you shouldn't put that number in the code
	//cause other people wouldn't understand about 10


	const int price_per_item = 10;
	int price2 = num_items * price_per_item; //Good code
	return 0;
}