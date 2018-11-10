/*
HongJeongMo C++

Chapter 3_8
Bitwise Operators

*/



#include <iostream>
#include <bitset>



int getChapter3_Bitwise();

int main()
{
	using namespace std;

	unsigned int a = 0b1100;
	unsigned int b = 0b0110;
	unsigned int c = 0b0110;

	cout << bitset<4>(a & b) << endl; // 0100
	cout << bitset<4>(a | b) << endl; // 1110
	cout << bitset<4>(a ^ b) << endl; // 1010
	cout << bitset<16>(a & b) << " " << (a & b) << endl; // bitwise AND, 1 when both a && b are 1
	cout << bitset<16>(a | b) << " " << (a | b) << endl; // bitwise OR, 1 when a || b
	cout << bitset<16>(a ^ b) << " " << (a ^ b) << endl; // bitwise XOR,1 when a || b only
	cout << endl;


	unsigned int d = 5;
	unsigned int e = 12;
	unsigned int f = 10;


	cout << bitset<4>(c >> 2) << " " << (c >> 2) << endl; //1
	cout << endl;

	cout << bitset<8>(d) << " " << d << endl;
	cout << bitset<8>(e) << " " << e << endl;
	cout << "d | e : " << (d | e) << endl;
	cout << "d & e : " << (d & e) << endl;
	cout << "d ^ e : " << (d | e) << endl;
	cout << endl;

	cout << f << " : " << bitset<8>(f) << endl;
	cout << "\n\n\n\n" << endl;
	
	const int iAttack = 0x00000001; //1 // 1
	const int iArmor = 0x00000002; //10 // 2
	const int iHP = 0x00000004; // 100 // 4 
	const int iMP = 0x00000008; //1000 // 8
	const int iCritical = 0x00000010;// 10000 // 16

	       
	int iBuf = iAttack | iHP | iCritical; // 1 | 100 | 10000 // 10101, which means, all buffs on now

	cout << "iBuf : " << bitset<8>(iBuf) << endl;
	cout << "Attack : " << ((iBuf & iAttack)? "on": "off") << endl;
	cout << "Critical : " << ((iBuf & iCritical) ? "on" : "off") << endl;
	cout << endl;


	iBuf ^= iAttack; //buffer off 
	cout << "iBuf : " << bitset<8>(iBuf) << endl;
	cout << "Attack : " << ((iBuf & iAttack) ? "on" : "off") << endl;
	cout << "Critical : " << ((iBuf & iCritical) ? "on" : "off") << endl;
	cout << endl;

	iBuf |= iArmor;
	cout << "Armor on!" << endl;
	cout << "iBuf : " << bitset<8>(iBuf) << endl;
	cout << "Attack : " << ((iBuf & iAttack) ? "on" : "off") << endl;
	cout << "Armor : " << ((iBuf & iArmor) ? "on" : "off") << endl;
	cout << "Critical : " << ((iBuf & iCritical) ? "on" : "off") << endl;
	cout << endl;

	iBuf = iArmor & iCritical;
	cout << "iBuf : " << bitset<8>(iBuf) << endl;
	cout << "Attack : " << ((iBuf & iAttack) ? "on" : "off") << endl;
	cout << "Armor : " << ((iBuf & iArmor) ? "on" : "off") << endl;
	cout << "Critical : " << ((iBuf & iCritical) ? "on" : "off") << endl;



	// buff on  |= OR
	// buff off ^= XOR
	

	return 0;
}



int getChapter3_Bitwise()
{
	using namespace std;

	// don't confuse with input, output operator
	// << left shift
	// >> right shift
	// ~, &, |, ^

	unsigned int a = 3;
	unsigned int b;

	cout << bitset<16>(a) << endl; // bitset<byte>(variable), variable to binary
	cout << endl;

	b = a << 1; //0110 , 6
	cout << bitset<16>(b) << endl;
	cout << endl;

	b <<= 1; // 1100 , 12
	cout << bitset<16>(b) << endl;
	cout << endl;

	b <<= 1; // 11000 , 24
	cout << bitset<16>(b) << endl;
	cout << endl;
	cout << endl;


	b = 6;

	b <<= 1;
	cout << bitset<16>(b) << endl;
	cout << endl;

	b <<= 2;
	cout << bitset<16>(b) << endl;
	cout << endl;

	b <<= 3;
	cout << bitset<16>(b) << endl;
	cout << endl;

	b <<= 4;
	cout << bitset<16>(b) << endl;
	cout << endl;

	b >>= 10;
	cout << bitset<16>(b) << endl;
	cout << endl;

	cout << bitset<16>(~b) << endl;
	cout << endl;

	a = 0b1100;
	b = 0b0110;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	cout << bitset<16>(a & b) << endl; // bitwise AND, 1 when both a && b are 1
	cout << bitset<16>(a | b) << endl; // bitwise OR, 1 when a || b
	cout << bitset<16>(a ^ b) << endl; // bitwise XOR,1 when a || b only

	return 0;
}