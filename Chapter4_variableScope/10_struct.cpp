/*
HongJeongMo C++

Chapter 4_10
struct
*/

#include <iostream>
#include <string>


using namespace std;


struct Employee
{
	short id; //2byte
	int age; // 4byte
	double wage; //8byte
}; //Total 16byte == 14byte + 2byte(padding)


struct Person //about person
{
	double height = 180; //member
	float weight = 70; //set default literal, when no initialization in other fields, use those values
	int age = 25;
	string name = "John doe";
	
};

struct Person2 
{
	double height; 
	float weight;
	int age;
	string name;

	void print() //you can put function in struct
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};



struct Family
{
	Person me;
	Person dad;
	Person mom;
	Person sister;
};



void printPerson(Person ps)
{
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
}


int main()
{
	Person me;
	me.age = 27; // . ¢º member select operator
 	me.weight = 63;
	me.height = 178;
	me.name = "JasonChoi";

	Person me2{ 178,63,27,"JasonChoi" };

	printPerson(me);
	printPerson(me2);

	Person2 p2{ 178,63,27,"JasonChoi" }; 
	p2.print();

	Person p3;
	printPerson(p3);
	cout << endl;

	cout << sizeof(Employee) << endl; //16

	return 0;
}
