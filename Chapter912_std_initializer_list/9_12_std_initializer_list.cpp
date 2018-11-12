/*
HongJeongMo C++

Chapter 9_12 std::initializer_list

*/


#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int *m_data = nullptr;

public:
	IntArray(unsigned length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const initializer_list<int> &list)
		:IntArray(list.size())
	{
		int count = 0;
		for (auto &e : list)
		{
			m_data[count] = e;
			++count;
		}

		//for (unsigned count = 0; count < list.size(); ++count)
		//	m_data[count] = list[count]; // X,  error
	}

	~IntArray()
	{
		delete[] this->m_data;
 	}

	friend ostream & operator << (ostream & out, IntArray & arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}
};


int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int *my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto il = { 10, 20, 30 };

	IntArray int_array{ 1,2,3,4,5 };
	cout << int_array << endl;

	delete my_arr2;
	my_arr2 = nullptr;
	return 0;
}