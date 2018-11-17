/*
HongJeongMo C++

Chapter F_5 std::unique_ptr

*/


#pragma once
#include <iostream>
namespace MyClass
{
	using namespace std;
	class Resource
	{
	public:
		int *m_data = nullptr;
		unsigned m_length = 0;
	public:
		Resource()
		{
			cout << "Resource default constructed" << endl;
		}


		Resource(unsigned length)
		{
			cout << "Resource length constructed" << endl;

			this->m_data = new int[length];
			this->m_length = length;
		}

		Resource(const Resource &res)
		{
			cout << "Resource copy constructed" << endl;
			Resource(res.m_length);

			for (unsigned i = 0; i < m_length; ++i)
				m_data[i] = res.m_data[i];
		}

		~Resource()
		{
			cout << "Resource destroyed" << endl;
			if (m_data != nullptr) delete[] m_data;
		}

		Resource & operator = (Resource & res)
		{
			cout << "Resource copy assignment" << endl;
			if (&res == this) return *this;
			if (this->m_data != nullptr) delete[] m_data;

			m_length = res.m_length;
			m_data = new int[m_length];

			for (unsigned i = 0; i < m_length; ++i)
				m_data[i] = res.m_data[i];

			return *this;
		}

		void print()
		{
			for (unsigned i = 0; i < m_length; ++i)
				cout << m_data[i] << " ";
			cout << endl;
		}

		void setAll(const int& v)
		{
			for (unsigned i = 0; i < m_length; ++i)
				m_data[i] = v;
		}
	};

}