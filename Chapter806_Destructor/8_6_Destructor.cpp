/*
HongJeongMo C++

Chapter 8_6
Destructor

*/
#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple() //Destructor
	{
		cout << "Destructor  " << m_id << endl;
	}
};


class IntArray
{
private:
	int *m_arr = nullptr;
	int m_length = 0;
public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		cout << "Constructor" << endl;
	}

	~IntArray()
	{
		if(m_arr != nullptr) delete[] m_arr; // recommended safe coding, for preventing memory leak
	}

	int getLength()
	{
		return m_length;
	}
};




int main()
{
	Simple s1(0);
	Simple s2(1);
	Simple *s3 = new Simple(2);

	delete s3;
	s3 = nullptr;
	cout << endl;

	while (1)
	{
		IntArray my_int_arr(10000);
	}


	return 0;
}