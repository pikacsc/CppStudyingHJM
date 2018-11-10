/*
HongJeongMo C++

Chapter 8_1 Object Oriented Programming




Object : variables with function
struct + function + access specifiers

class : the keyword for implementing Object

struct : you can put function in struct, however, in c++ coding standard, 
struct for combining variables only, so that separate class and struct,
no access specifier
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Friend
{
public: // access specifier (public, private, protected)
	string m_name; // member variable specify, m_variablename
	string m_address;
	int	   m_age;
	double m_height;
	double m_weight;
	
	void print()
	{
		cout <<"Friend::print() " << m_name << " " << m_address << " " << m_age << " " << m_height << " " << m_weight << endl;
	}
	
};




void print(Friend &fr)
{
	cout << "print(Friend &fr) " << fr.m_name << " " << fr.m_address << " " << fr.m_age << " " << fr.m_height << " " << fr.m_weight << endl;
}


void print(const string &name, const string &address, const int &age, const double &height, const double &weight)
{
	cout << "print(const string &name, ...) " << name << " " << address << " " << age << " " << height << " " << weight << endl;
}


int main()
{

	//Friend : name, address, age, height, weight, ....
	string name;
	string address;
	int	   age;
	double height;
	double weight;

	print(name, address, age, height, weight);


	vector<Friend> my_friends;
	my_friends.resize(2);
	my_friends[0].print();
	my_friends[1].print(); // if you use for() then much simple
	//vector<string> name_vec;
	//vector<string> addr_vec;
	//vector<int>	   age_vec;
	//vector<double> height_vec;
	//vector<double> weight_vec;
	//print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);
	cout << endl;

	//use struct
	Friend jack{ "jack","Uptown",2,170,60}; //instanciation, 'jack' is an instance of class Friend
	/*jack.name = "jack";
	jack.address = "Uptown";
	jack.age = 2;
	jack.height = 170;
	jack.weight = 60;*/

	print(jack.m_name, jack.m_address, jack.m_age, jack.m_height, jack.m_weight); // 	jack.print();
	cout << endl;


	jack.print();
	cout << endl;

	return 0;
}