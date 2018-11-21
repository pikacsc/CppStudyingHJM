/*
HongJeongMo C++

Chapter J_1 lambda, std::function, std::blind, for_each

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void goodbye(const string & s)
{
	cout << "Goodbye " << s << endl;
}

class Object
{
public:
	void hello(const string &s)
	{
		cout << "Hello " << s << endl;
	}
};

int main()
{
	//lambda-introducer					[]
	//lambda-parameter-declaration (const int& i)
	//lambda-return-type-clause			void
	//compound-statement		   { cout << "Hello, World!" << endl; };
	auto func = [](const int& i) -> void { cout << "Hello, World!" << endl; };
	func(123);

	[](const int& i) -> void { cout << "Hello, World!" << endl; } (1234);


	{	//how to use lambda-introducer	
		string name = "JackJack";
		[&]() {std::cout << name << endl; }(); //[&] , you can bring variable as a & type
	//	[=]() {std::cout << name << endl; }(); //[=] , you can copy variable
	//	[this]() {std::cout << name << endl; }(); //[this] , class member function only, for using member variable 

	}

	vector<int>v;
	v.push_back(1);
	v.push_back(2);

	auto func2 = [](int val) {cout << val << endl; };
	for_each(v.begin(), v.end(), func2);
	//for_each(v.begin(), v.end(), [](int val) { cout << val << endl; });
	
	cout << []() -> int {return 1; } () << endl;





	std::function<void(int)> func3 = func2;
	func3(123);

	std::function<void()>func4 = std::bind(func3, 456);
	func4();

	//https://en.cppreference.com/w/cpp/utility/functional/placeholders
	{
		Object instance;
		auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);
		f(string("World"));

		auto f2 = std::bind(&goodbye, std::placeholders::_1);
		f2(string("World"));
	}


	return 0;
}