/*
HongJeongMo C++

Chapter 7_8
Default Parameters

you can declare(in header file) or define, default value like this 
function(int x = defaultValue)

*/

#include <iostream>
#include <string>

using namespace std;

void print(int x = 2); //function(int x = defaultValue) 
void print2(int x, int y = 2, int z = 3);
void print3(string str);
void print3(char ch = ' ');

int main()
{
	print(10);
	print();
	print2(1);
	print3(); // compiler will execute void print3(char ch = ' '); cause it has default value 
	return 0;
}


void print2(int x, int y, int z)
{
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}


void print(int x) //function(int x = defaultValue) 
{
	cout << x << endl;
}

void print3(string str) 
{
	cout << str << endl;
}

void print3(char ch)
{
	cout << ch << endl;
}

