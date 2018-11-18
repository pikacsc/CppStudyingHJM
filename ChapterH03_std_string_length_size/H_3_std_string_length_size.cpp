/*
HongJeongMo C++

Chapter H_3 std::string, length and size

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str("123456789"); 
	cout <<"my_str.size()\t\t" << my_str.size() << endl; // 9, not like C, in 'C++ std::string' there is no NULL at the end 
	cout <<"my_str.length()\t\t"<< my_str.length() << endl;// 9
	cout << "my_str.capacity()\t" << my_str.capacity() << endl; // 15, depends on compiler, for avoding memory re-allocation, extra space exist
	cout << "my_str.maxsize()\t" << my_str.max_size() << endl; //2147483647

	//manage minimum extra space
	my_str.reserve(1000);
	cout << "my_str.capacity()\t" << my_str.capacity() << endl; // 1007, after my_str.reserve(1000);
	return 0;
}