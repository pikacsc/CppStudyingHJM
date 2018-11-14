#pragma once
#include <iostream>
#include <cassert>
#include <initializer_list>

namespace MyContainer 
{
	using namespace std;
	class MyIntArray
	{
	private:
		unsigned int m_length = 0;
		int *m_data = nullptr;

	public:
		explicit MyIntArray(const unsigned int& length)
			:m_length(length)
		{
			m_data = new int[length];
		}

		MyIntArray(const initializer_list<int> &list) // use initializer_list, for doing this  "MyIntArray my_arr{1,3,5,7,9};"
			:MyIntArray(list.size())
		{
			int count = 0;
			for (auto &element : list)
			{
				m_data[count] = element;
				++count;
			}
		}

		~MyIntArray()
		{
			delete[] this->m_data;
			m_data = nullptr;
		}

		friend ostream & operator << (ostream & out, MyIntArray & arr)
		{
			for (unsigned int i = 0; i < arr.m_length; ++i)
				out << arr.m_data[i] << " ";
			out << endl;
			return out;
		}


		void Init()
		{

		}

		void reset()
		{
		}

		void resize()
		{
		}

		void InsertBefore(const int& value, const int &ix)
		{

		}

		void remove(const int& ix)
		{

		}

		void push_back(const int& value)
		{

		}
	};

}
