/*
HongJeongMo C++

Chapter E_1 Exception Handling

Exception Handling with try, catch, throw can be useful 
however, for performance can be slower,so not always necessary


*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	//try, catch, throw	

	try
	{
		//something happend
		//throw - 1.0; // Always throw datatype should be match with 'catch(datatype x)', otherwise run-time error occured
		throw string("My error message");
	}
	catch (int x)
	{
		cout << "Catch Integer" << x << endl;
	}
	catch (double x)
	{
		cout << "Catch double" << x << endl;
	}
	catch (const char * error_message)
	{
		cout << "Char * " << error_message << endl;
	}
	catch (string error_message)
	{
		// do something to respond
		cout << error_message << endl;
	}




	return 0;
}