/*
HongJeongMo C++

Chapter E_2 Exception and Stack Unwinding

*/
#include <iostream>

void last()
{
	std::cout << "last" << std::endl;
	std::cout << "Throws exception" << std::endl;

	//throw 'a'; //run-time error occurred, type doesn't match in every catch part
	throw - 1; // catch in only main 
	std::cout << "End last" << std::endl; //when exception occurred, this code wouldn't run, because of stack Unwinding, 
	// so not going to "End last" but going back to third()
}

void third() throw(char) // exception specifier, throw(datatype), datatype shouldn't be blank throw()
{
	std::cout << "third" << std::endl;

	last(); 
	// not going to "End third" but going back to second()
	std::cout << "End third" << std::endl;
}

void second()
{
	std::cout << "second" << std::endl;
	try
	{
		third();
	}
	catch (double)
	{ //if throw was double then go to this part, otherwise StackUnwinding again, going back to first()
		std::cerr << "second caught int exception" << std::endl;
	}
	// and go to "End second"
	std::cout << "End second" << std::endl;
}


void first()
{
	std::cout << "first" << std::endl;
	try
	{
		second();
	}
	catch (double)
	{
		std::cerr << "first caught double exception" << std::endl; 
	}
	std::cout << "End first" << std::endl;
}


int main()
{
	std::cout << "Start" << std::endl;

	try
	{
		first();
	}
	catch (int)
	{
		std::cerr << "main caught int exception" << std::endl; 
	}
	catch (...) // catch-all handlers
	{
		std::cerr << "main caught ellipses exception" << std::endl;
	}

	std::cout << "End main" << std::endl;

	return 0;
}


