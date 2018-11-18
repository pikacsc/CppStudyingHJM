/*
HongJeongMo C++

Chapter H_2 std::string, constructors, to_string

*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream> //string stream


template<typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;
	osstream << x;
	return osstream.str();
}

template<typename T>
bool FromString(const std::string & str, T &x)
{
	std::istringstream isstream(str);
	return (isstream >> x) ? true : false;
}


int main()
{
	std::string my_string("My string");
	std::string second_string(my_string);		//My string
	std::cout << second_string << std::endl;

	std::string third_string("My string", 3);	//My
	std::cout << third_string << std::endl;

	std::string fourth_string(my_string, 3);	//string
	std::cout << fourth_string << std::endl;

	std::string five_string("My string", 3, 2);	//st
	std::cout << five_string << std::endl;
	
	std::string sixth_string(10, 'A');			//AAAAAAAAAA
	std::cout << sixth_string << std::endl;

	
	std::vector<char> vec;
	for (auto e : "Today is a good day.")
		vec.push_back(e);

	std::string seventh_string(vec.begin(), vec.end());  //Today is a good day.
	std::cout << seventh_string << std::endl;

	std::string eighth_string(vec.begin(), std::find(vec.begin(), vec.end(), 'g')); //Today is a
	std::cout << eighth_string << std::endl;

	//to_string, numbers to string
	std::string ninth_string(std::to_string(1004)); //1004
	std::cout << ninth_string << std::endl;

	std::string tenth_string(eighth_string += std::to_string(128)); //Today is a 128
	std::cout << tenth_string << std::endl;

	std::string eleventh_string(ToString(3.141592)); // 3.141592
	std::cout << eleventh_string << std::endl;

	double d;
	if (FromString(eleventh_string, d))
		std::cout << d << std::endl;
	else
		std::cout << "Cannot convert string to double" << std::endl;

	return 0;
}