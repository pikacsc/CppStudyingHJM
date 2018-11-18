/*
HongJeongMo C++

Chapter I_3 string stream

*/
#include <iostream>
#include <sstream>

int main()
{
	std::stringstream os;

	//os << "Hello, world!"; // << : insertion operator, >> : extraction operator
	//os << "Hello, World!2" << std::endl;
	////os.str("Hello, World!\n");


	//std::cout << os.str() << std::endl;
	//

/*
	os << "12345 67.89";
	std::string str1;
	std::string str2;

	os >> str1 >> str2;
	std::cout << str1 << "|" << str2 << std::endl;
*/


	//int i = 12345;
	//double d = 67.89;

	//os << i << " " << d;


/*	int i2;
	double d2;
	os >> i2 >> d2;
	std::cout << i2 << "|" << d2 << std::endl;
*/

	return 0;
}