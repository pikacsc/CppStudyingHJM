/*
HongJeongMo C++

Chapter 3_9
Bitflags, Bitmasks


*/

#include <iostream>
#include <bitset>

int getChapter3_Bitmasks()
{
	using namespace std;

	//bool item1_flag = false;
	//bool item2_flag = false;
	//bool item3_flag = false;
	//bool item4_flag = false;

	////event!
	//item1_flag = true;

	////die! item lost
	//item1_flag = false;

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	unsigned char items_flag = 0;


	cout << "No Item state  :" << bitset<8>(items_flag) << endl;

	//item0 on
	items_flag |= opt0;

	//item3 on
	items_flag |= opt3;

	cout << "Item0 obtained :" << bitset<8>(items_flag) << endl;
	cout << "Item3 obtained  :" << bitset<8>(items_flag) << endl;

	//item3 lost
	items_flag &= ~opt3;
	cout << "Item3 lost  :" << bitset<8>(items_flag) << endl;





	return 0;
}
