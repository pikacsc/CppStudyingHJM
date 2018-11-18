/*
HongJeongMo C++

Chapter H_5 std::string, assign(), append(), swap(), insert()

*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1("one");
	string str2;
	str2 = str1;
	str2 = "two";

	cout << str1 << " " << str2 << endl; //two one
	str1.swap(str2);
	cout << str1 << " " << str2 << endl; //one two


	str2.assign("three"); //three
	cout << str2 << endl;

	str2.append(" ").append("four"); //three four
	cout << str2 << endl;

	str2.insert(1, "bbb"); //zero index
	cout << str2 << endl; //tbbbhree four

	return 0;
}