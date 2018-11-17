/*
HongJeongMo C++

Chapter F_1 SmartPointers and move semantics

*/

#pragma once
#include <iostream>
namespace MyClass 
{
	using namespace std;
	class Resource
	{
	//private:
	public:
		int m_data[100];

	public:
		Resource()
		{
			cout << "Resource constructed" << endl;
		}

		~Resource()
		{
			cout << "Resource destroyed" << endl;
		}
	};
}