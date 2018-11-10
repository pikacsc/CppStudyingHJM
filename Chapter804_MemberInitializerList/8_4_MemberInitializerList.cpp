/*
HongJeongMo C++

Chapter 8_4
Member Initializer List


Something()
: m_i(1), m_d(3.14), m_c('a'), m_arr{1,2,3,4,5}, m_b(m_i - 1)
{}

*/

#include <iostream>

using namespace std;

class B
{
private:
	int m_b;

public:
	B(const int& m_b_in)
		: m_b(m_b_in)
	{}
};



class Something
{
private: //you can initialize default value, however if consturctor set default, then these values will be ignored
	int m_i = 100;
	double m_d = 100.0;
	char m_c = 'F';
	int m_arr[5] = { 100,200,300,400,500 };
	B m_b{ 1024 };
public:
	Something()
		: m_i(1), m_d(3.14), m_c('a'), m_arr{1,2,3,4,5}, m_b(m_i - 1) //Member Initializer List
	{
		/*m_i = 1;
		m_d = 3.14;
		m_c = 'a';*/
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& e : m_arr)
			cout << e << " ";
		cout << endl;
	}
};



int main()
{
	Something smt;
	smt.print();
	return 0;
}