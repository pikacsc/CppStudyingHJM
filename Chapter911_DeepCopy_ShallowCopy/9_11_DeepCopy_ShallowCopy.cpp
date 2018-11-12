/*
HongJeongMo C++

Chapter 9_11 DeepCopy and Shallow Copy

*/


#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
	//private;
public:
	char *m_data = nullptr;
	int m_length = 0;

public:


	
	MyString(const char *source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];
		m_data[m_length - 1] = '\0';
	}

	//DeepCopy
	MyString(const MyString &source)
	{
		cout << "Copy constructor " << endl;
		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length]; //DeepCopy, assign new address

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	MyString& operator = (const MyString & source)
	{
		//// shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length;
	
		cout << "Assignment Operator " << endl;

		if (this == &source) // prevent self-assignment
			return *this;

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
		return *this;

	}


	~MyString()
	{
		delete[] m_data;
		m_data = nullptr;
	}
	char* getString() { return m_data; }
	int getLength() { return m_length; }
};



int main()
{
	MyString hello("Hello");

	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}//In shallow copy, out of scope, m_data deleted but at the same time, hello.m_data also deleted cause copied same address

	cout << hello.getString() << endl; //In shallow copy, ннннннннннннннннb??, error, because deleted already

	return 0;
}