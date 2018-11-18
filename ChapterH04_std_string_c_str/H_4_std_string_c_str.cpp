/*
HongJeongMo C++

Chapter H_4 std::string, c_str

*/

#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string my_str("abcdefg");

	cout << my_str.c_str() << endl; 

	const char * arr = my_str.c_str();
	cout << arr[6] << "\tASCII : " << (int)arr[6] << endl; //g
	cout << arr[7] << "\tASCII : " << (int)arr[7] << endl; //NULL

	char buf[20];
	my_str.copy(buf, 5, 0);
	cout << buf << endl; //abcde面面面面面面面面面面面??, successfuly copied, however, no NULL at the end, so 面面面面面面面面面面面?? occured

	buf[5] = NULL; // insert NULL at the end
	cout << buf << endl; //abcde, successfuly copied 

	return 0;
}