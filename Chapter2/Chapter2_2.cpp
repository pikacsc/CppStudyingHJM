/*
HongJeongMo C++

Chapter 2_2
Integers

*/


#include <iostream>
#include <cmath>
#include <limits>
#include <typeinfo>

int getChapter2_2()
{
	using namespace std;

	short s = 1; //short integer, 2bytes == 2 * 8 bits == 16bits
	unsigned short us = 1; //unsigned short integer, 2bytes == 2 * 8 bits == 16bits

	int i = 1; // integer, 4bytes == 4 * 8 bits == 32bits
	unsigned int ui = 1; //unsigned integer, 4bytes == 4 * 8 bits == 32bits

	long l = 1; // long integer, 4bytes == 4 * 8 bits == 32bits
	unsigned long ul = 1; // unsigned long integer, 4byes == 4 * 8 bits == 32bits

	long long ll = 1; // long long integer, 8bytes == 8 * 8 bits == 64bits
	unsigned long long ull = 1; // unsigned long long integer, 8bytes == 8 * 8 bits == 64bits

	cout << "short : " << s << "  size : " << sizeof(s) << "byte " << " Max Limit :"<< pow(2, (sizeof(s)*8)-1) -1 << "  Minimum :" << numeric_limits<short>::min() <<endl;
	cout << "unsigned short : " << s << "  size : " << sizeof(us) << "byte " << " Max Limit :" << pow(2, (sizeof(s) * 8) - 1) - 1 << "  Minimum :" << numeric_limits<unsigned short>::min() << endl;
	cout << endl;
	
	cout << "int : " << i << "  size : " << sizeof(i) << "byte" << " Max Limit :" << numeric_limits<int>::max() << "  Minimum :" << numeric_limits<int>::min() << endl;
	cout << "unsigned int : " << ui << "  size : " << sizeof(ui) << "byte" << " Max Limit :" << numeric_limits<unsigned int>::max() << "  Minimum :" << numeric_limits<unsigned int>::min() << endl;
	cout << endl;
	
	cout << "long : " << l << "  size : " << sizeof(l) << "byte" << " Max Limit :" << numeric_limits<long>::max() << "  Minimum :" << numeric_limits<long>::min() << endl;
	cout << "unsigned long : " << ul << "  size : " << sizeof(l) << "byte" << " Max Limit :" << numeric_limits<unsigned long>::max() << "  Minimum :" << numeric_limits<unsigned long>::min() << endl;
	cout << endl;

	cout << "long long : " << ll << "  size : " << sizeof(ll) << "byte" << " Max Limit :" << numeric_limits<long long>::max() << "  Minimum :" << numeric_limits<long long>::min() << endl;
	cout << "unsigned long long : " << ull << "  size : " << sizeof(ll) << "byte" << " Max Limit :" << numeric_limits<unsigned long long>::max() << "  Minimum :" << numeric_limits<unsigned long long>::min() << endl;
	cout << endl;


	s = 32767;
	s = s + 1; // -32768, if you over the max limit then it become minimum value, called 'Overflow', opposite case is 'underflow'

	cout << "Overflow : " << s << endl;

	s = s - 1;
	cout << "Underflow : " << s << endl; // suddenly change minimum to maximum


	unsigned int ui2 = -1; // 
	cout << "unsigned int, underflow : " << ui << endl;


	
	cout << "\n\n\n\nchar \t\t: " << sizeof(char) << " bytes\n";
	cout << "unsigned char \t: " << sizeof(unsigned char) << " bytes\n";
	cout << "wchar_t \t: " << sizeof(wchar_t) << " bytes\n";
	cout << "bool \t\t: " << sizeof(bool) << " bytes\n";
	cout << "short \t\t: " << sizeof(short) << " bytes\n";
	cout << "unsigned short \t: " << sizeof(unsigned short) << " bytes\n";
	cout << "int \t\t: " << sizeof(int) << " bytes\n";
	cout << "unsigned int \t: " << sizeof(unsigned int) << " bytes\n";
	cout << "long  \t\t: " << sizeof(long) << " bytes\n";
	cout << "unsigned long \t: " << sizeof(unsigned long) << " bytes\n";
	cout << "__int8 \t\t: " << sizeof(__int8) << " bytes\n";
	cout << "__int16 \t: " << sizeof(__int16) << " bytes\n";
	cout << "__int32 \t: " << sizeof(__int32) << " bytes\n";
	cout << "__int64 \t: " << sizeof(__int64) << " bytes\n";
	cout << "float \t\t: " << sizeof(float) << " bytes\n";
	cout << "double \t\t: " << sizeof(double) << " bytes\n";

	return 0;
}
