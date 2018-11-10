/*
HongJeongMo C++

Chapter 2_7
char type

*/

#include <iostream>

int getChapter2_7()
{
	using namespace std;

	char c1(65);
	char c2('A'); //Single quote

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	
	// C-style casting
	cout << (char)65 << endl; //casting
	cout << (int)'A' << endl; // 65
	cout << endl;

	//C++ style casting
	cout << char(65) << endl;
	cout << int('A') << endl;
	cout << endl;

	cout << static_cast<char>(65) << endl; // static_cast<datatype>(variable), casting variable to <datatype>, fundamental datatype casting only
	cout << static_cast<int>('A') << endl;
	cout << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;
	cout << endl;

	int inputCharNumber;
	cout << "input ASCII code :";
	cin >> inputCharNumber;
	cout << "\n" << "your letter is :" << static_cast<char>(inputCharNumber) << endl;
	cout << endl;


	cout << "escape sequence" << endl; //endl:go next line + print all data in buffer, \n : go next line only
	cout << endl;
	
	cout << "A\nB" << endl; // \n is one char data in C++, ASCII : 10
	cout << endl;
	
	cout << "A\tB" << endl; // TAB
	cout << endl;

	cout << " \"This is how you can print double quote use \\ \"";
	cout << endl;

	cout << "\a"; //short window alarm soundeffect, useful for noticing finished code, or build
	cout << endl;

	wchar_t c; //not recommended
	char32_t c3; //for Unicode printing

	return 0;
}