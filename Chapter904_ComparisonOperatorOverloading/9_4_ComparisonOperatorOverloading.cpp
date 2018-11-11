/*
HongJeongMo C++

Chapter 9_4 Comparison Operator Overloading

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() const
	{
		return m_cents;
	}

	int & getCents()
	{
		return m_cents;
	}

	friend bool operator < (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	friend bool operator ==  (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator !=  (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents != c2.m_cents;
	}


	friend std::ostream& operator << (std::ostream &out, const Cents &cents)  // you can use it for fstream
	{
		out << cents.m_cents;
		return out;
	}

};


int main()
{
	Cents cents1(6);
	Cents cents2(6);
	Cents cents3(7);
	if (cents1 == cents2)
		cout << "Equal" << endl;
	if (cents3 != cents1)
		cout << "Not Equal" << endl;

	cout << std::boolalpha;
	cout << endl;

	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; ++i)
	{
		arr[i].getCents() = i;
	}
	random_shuffle(begin(arr), end(arr));

	for (auto &e : arr)
	{
		cout << e << " ";
	}
	cout << endl;
	cout << endl;
	cout << "after sorting" << endl;

	sort(begin(arr), end(arr));
	for (auto &e : arr)
	{
		cout << e << " ";
	}



	return 0;
}