/*
HongJeongMo C++

Chapter D_3 Non-type Parameters

*/

#pragma once
#include <assert.h>
#include <iostream>
namespace MyClass
{
	using namespace std;

	template<typename T, unsigned int T_SIZE> // T_SIZE and T should be determind at compile time
	class MyArray
	{
	private:
		//int m_length;
		T *m_data;

	public:
		MyArray()
		{
			m_data = new T [T_SIZE];
		}

		
		~MyArray()
		{
			reset();
		}

		void reset()
		{
			delete[] m_data;
			m_data = nullptr;
		}

		T & operator[] (int index)
		{
			assert(index >= 0 && index < T_SIZE);
			return m_data[index];
		}

		int getLength()
		{
			return T_SIZE;
		}

		void print() // when you use Non-TypeParameter, separating is not recommended
		{
			for (int i = 0; i < T_SIZE; ++i)
				cout << m_data[i] << " ";
			cout << endl;
		}
	};

}
