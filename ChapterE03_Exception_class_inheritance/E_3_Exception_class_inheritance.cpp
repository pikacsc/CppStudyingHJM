/*
HongJeongMo C++

Chapter E_3 Exception class and inheritance, rethrow

*/
#include <iostream>
using namespace std;

class Exception
{
public:
	void report()
	{
		cerr << "Exception report" << endl;
	}
};


class ArrayException : public Exception
{
public:
	void report()
	{
		cerr << "Array exception" << endl;
	}

};



class MyArray
{
private:
	int m_data[5];

public:
	int & operator [] (const int & index)
	{
		if (index < 0 || index >= 5) throw ArrayException();
		return m_data[index];
	}
};

void doSomething()
{
	MyArray my_array;
	try 
	{
		my_array[100];
	}
	catch (const int &x)
	{
		cerr << "Exception " << x << endl;
	}
	/*catch (ArrayException &e)
	{
		e.report();
		cout << "caught in doSomething()" << endl;
		throw e;
	}*/
	catch (Exception &e) // if throw ArrayException then object slicing will occurred 
	{
		e.report();
		cout << "caught in doSomething()" << endl;
		//throw e; // object slicing
		throw; // no object slicing
	}
	
}

int main()
{
	try
	{
		doSomething();
	}
	catch (ArrayException & e)
	{
		e.report();
		cout << "caught in main()" << endl;
	}
	catch (Exception & e)
	{
		e.report();
		cout << "caught in main()" << endl;
	}

	return 0;
}