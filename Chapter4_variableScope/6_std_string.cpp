/*
HongJeongMo C++

Chapter 4_6
std::string

*/


#include <iostream>
#include <string>
#include <limits>
using namespace std;

int std_String()
{
	cout << "Hello, World" << endl;//(const char [13])"Hello, World"


	const char my_strs[] = "Hello, World"; // char arr[] type
 
	const string my_hello = "Hello, World"; // string, custom data type
	const string my_hello2 = { "Hello, World" };


	string my_ID = "123"; //you can put numbers in string

	cout << my_hello << endl;
	cout << endl;

	string name;
	string age;

	//cout << "Your name? : ";
	//cin >> name;  // if there is no 'endl', then in buffer still exist and assign it to variable 'age'
	//
	//cout << "Your age? : ";
	//cin >> age;
	//
	//cout << "name : " << name << endl;
	//cout << "age : " << age << endl;
	//cout << endl;
	//
	

	cout << "getline(cin, variable)" << endl;
	cout << "Your age? : ";	
	getline(cin, age);
	
	//std::cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	cout << "Your name? : ";
	getline(cin, name);

	cout << "name : " << name << endl;
	cout << "age : " << age << endl;
	cout << endl;

	string a("Hello, ");
	string b("World");

	cout << a + b << endl; // string + string or number ¢º append 
	cout << (a + b).length() << endl;


	return 0;
}