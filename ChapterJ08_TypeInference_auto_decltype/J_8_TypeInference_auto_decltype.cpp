/*
HongJeongMo C++

Chapter J_8 TypeInference, auto, decltype

http://thbecker.net/articles/auto_and_decltype/section_01.html

*/
#include <iostream>
#include <vector>
#include <algorithm> // std::min

using namespace std;

class Examples
{
public:
	void ex1()
	{
		vector<int> vect;
		for (vector<int>::iterator itr = vect.begin(); itr != vect.end(); ++itr)
			cout << *itr;
		for (auto itr = vect.begin(); itr != vect.end(); itr++)
			cout << *itr;
		for (auto itr : vect) //for (const auto & itr : vect)
			cout << itr;
	}

	void ex2()
	{
		int x = int();
		auto auto_x = x;


		const int &crx = x;
		auto auto_crx1 = crx; // when 'auto' inferencing type, 
		//delete 'const' and '&' so only 'int' will be left, int auto_crx1


		const auto& auto_crx2 = crx;
		//if you want to use 'auto' and remain const, & then
		//'const auto&'


		volatile int vx = 1024;
		auto avx = vx;
		// int avx = vx; , so auto will delete volatile


		volatile auto vavx = vx;
		//vlatile int vavx = vx;

	}

	/*template<class T>
	void func_ex3(T arg)
	{}*/

	template<class T>
	void func_ex3(const T& arg)
	{}
	

	void ex3()
	{
		const int &crx = 123;
		func_ex3(crx);
	}

	void ex4()
	{
		const int c = 0;
		auto & rc = c; 
		//rc = 123; //error
	}

	void ex5()
	{
		int i = 42;
		auto&& ri_1 = i;  //l-value
		auto&& ri_2 = 42; //r_value
	}

	void ex6()
	{
		int x = 42;
		const int *p1 = &x;
		auto p2 = p1;
		// *p2 = 42; //error
	}


	template<typename T, typename S>
	void func_ex7(T lhs, S rhs)
	{
		auto prod1 = lhs * rhs;

		typedef decltype(lhs * rhs) product_type; //decltype will type inferencing of (lhs * rhs)

		product_type prod2 = lhs * rhs;

		decltype(lhs * rhs) prod3 = lhs * rhs;

	}

	template<typename T, typename S>
	//decltype(lhs * rhs) func_ex8(T lhs, S rhs)
	auto func_ex8(T lhs, S rhs) -> decltype(lhs * rhs)
	{
		return lhs * rhs;
	}


	struct S
	{
		int m_x;
		S()
		{
			m_x = 42;
		}
	};


	void ex9()
	{
		int x;
		const int cx = 42;
		const int& crx = x;
		const S *p = new S();

		auto a = x;
		auto b = cx;
		auto c = crx;
		auto d = p;
		auto e = p->m_x;

		typedef decltype(x)			x_type;
		typedef decltype(cx)		cx_type;
		typedef decltype(crx)		crx_type;
		typedef decltype(p->m_x)	m_x_type; // 'declared' type

		typedef decltype((x)) x_with_parens_type; // add references to lvalues
		typedef decltype((cx)) cx_with_parens_type; 
		typedef decltype((crx)) crx_with_parens_type;
		typedef decltype((p->m_x)) m_w_with_parens_type; 

	}

	const S foo()
	{
		return S();
	}

	const int& foobar()
	{
		return 123;
	}

	void ex10()
	{
		vector<int> vect = { 42, 42 };

		auto a = foo();
		typedef decltype(foo()) foo_type;

		auto b = foobar();
		typedef decltype(foobar()) foobar_type;

		auto itr = vect.begin();
		typedef decltype(vect.begin()) iterator_type;

		auto first_element = vect[0];
		decltype(vect[1]) second_element = vect[1];
	}
};

int main()
{
	Examples examples;

	examples.ex1();
	examples.ex2();
	examples.ex3();
	examples.ex10();
	
	return 0;
}