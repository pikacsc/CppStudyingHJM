/*
HongJeongMo C++

Chapter J_7 Perfect Forwarding, std::forward

*/

#include <iostream>
#include <vector>
#include <utility> // std::forward

using namespace std;



class CustomVector
{
public:
	unsigned n_data = 0;
	int *ptr = nullptr;

	CustomVector(const unsigned & _n_data, const int & _init = 0)
	{
		cout << "Constructor" << endl;
		init(_n_data, _init);
	}

	CustomVector(CustomVector & l_input)
	{
		cout << "Copy constructor" << endl;

		init(l_input.n_data);
		
		for (unsigned i = 0; i < n_data; ++i)
			ptr[i] = l_input.ptr[i];
	}

	CustomVector(CustomVector && r_input)
	{
		cout << "Move constructor" << endl;

		n_data = r_input.n_data;
		ptr = r_input.ptr;

		r_input.n_data = 0;
		r_input.ptr = nullptr;
	}

	~CustomVector()
	{
		delete[] ptr;
	}

	void init(const unsigned & _n_data, const int& _init = 0)
	{
		n_data = _n_data;
		ptr = new int[n_data];
		for (unsigned i = 0; i < n_data; ++i)
			ptr[i] = _init;
	}
};

//void doSomething(CustomVector vec)
//{
//	cout << "Pass by value" << endl;
//}

void doSomething(CustomVector &vec)
{
	cout << "Pass by L-reference" << endl;
	CustomVector new_vec(vec);
}

void doSomething(CustomVector &&vec)
{
	cout << "Pass by R-reference" << endl;
	CustomVector new_vec(std::move(vec));
}

template<typename T>
void doSomethingTemplate(T && vec)
{
	doSomething(forward<T>(vec));// by using std::forward, compiler can detect L-value or R-value
}


struct MyStruct
{};

void func(MyStruct& s)
{
	cout << "Pass by L-ref" << endl;
}

void func(MyStruct&& s)
{
	cout << "Pass by R-ref" << endl;
}

//void func(MyStruct s)
//{
//	cout << "Pass by Value" << endl;
//}


//template<typename T>  
//void func_wrapper(T t)  
//{
//	func(t); //when you use template, compiler can't detect L-value or R-value
//}



template<typename T>  
void func_wrapper(T&& t) // O 
{
	func(std::forward<T>(t)); //by using std::forward, compiler can detect L - value or R - value

	//func(t); // evne if paramter is T&&, R-value, t of func(t) is L-value
}




int main()
{
	MyStruct s;
	/*
	func(s);
	func(MyStruct()); 
	*/

	func_wrapper(s);
	func_wrapper(MyStruct());
	cout << endl;

	CustomVector my_vec(10, 1024);

	//CustomVector temp(my_vec);
	//cout << my_vec.n_data << endl;

	/*result
	Constructor
	Copy constructor
	my_vec data : 10
	*/




	//CustomVector temp(std::move(my_vec));
	//cout << my_vec.n_data << endl;
	/*result
	Constructor
	Move constructor
	my_vec data : 0

	*/

	//doSomething(my_vec);
	/*result
	Constructor
	Pass by L-reference
	Copy constructor
	*/

	//doSomething(CustomVector(10,8));
	/*result
	Constructor
	Pass by R-reference
	Move constructor
	*/

	doSomethingTemplate(my_vec);
	doSomethingTemplate(CustomVector(10, 8));
	/*result
	Constructor
	Pass by L - reference
	Copy constructor
	Constructor
	Pass by R - reference
	Move constructor*/
	
	return 0;
}