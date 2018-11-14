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

		MyIntArray(const initializer_list<int> &list) // use initializer_list, for exam1) MyIntArray my_arr{1,3,5,7,9}; 
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

	
		
		MyIntArray& operator = (const MyIntArray & source)
		{
			if (this == &source)
				return *this;
			delete m_data;

			m_length = source.m_length;

			if (source.m_data != nullptr)
			{
				m_data = new int[m_length];
				for (unsigned int i = 0; i < m_length; ++i)
					m_data[i] = source.m_data[i];
			}
			else
				m_data = nullptr;
			return *this;

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
			m_data = new int[m_length];
		}

		void reset()
		{
			delete[] m_data;
			m_data = nullptr;
		}

		void resize(const unsigned int& newSize)
		{
			m_length = newSize;
		}
	
		void InsertBefore(const int& value, const int &ix)
		{
			unsigned int index = (ix < 0) ? (m_length - static_cast<unsigned int>(ix)) : static_cast<unsigned int>(ix);

			unsigned int newSize = m_length + 1;
			int *temp = new int[newSize];
			for (unsigned int i = 0; i <= m_length; ++i)
			{
				if (i == index) 
				{
					temp[index] = value;
					continue;
				}
				if (i > index)
				{
					temp[i] = m_data[i-1];
					continue;
				}
				else
					temp[i] = m_data[i];
			}
			reset(); //delete m_data
			resize(newSize);
			m_data = temp;
		}

		void remove(const int& ix)
		{
			unsigned int index = (ix < 0) ? (m_length -static_cast<unsigned int>(ix)) : static_cast<unsigned int>(ix);
			unsigned int newSize = m_length - 1;
			int *temp = new int[newSize];
			for (unsigned int i = 0; i <= m_length; ++i)
			{
				if (i >= index)
				{
					temp[i] = m_data[i + 1];
					continue;
				}
				else
					temp[i] = m_data[i];
			}
			reset(); //delete m_data
			resize(newSize);
			m_data = temp;
		}

		void push_back(const int& value)
		{
			unsigned int newSize = m_length+1;
			int *temp = new int[newSize];
			for (unsigned int i = 0; i <= m_length; ++i)
			{
				if (i == (m_length))
				{
					temp[m_length] = value;
					reset(); //delete m_data
					resize(newSize);
					m_data = temp;
					break;
				}
				temp[i] = m_data[i];
			}
		}
	};

}
