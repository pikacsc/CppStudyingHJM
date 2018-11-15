/*
HongJeongMo C++

Chapter C_5 Dynamic Binding, Static Binding

Binding
Matching a function call with the correct function definition

Static Binding
By default, binding at compile time. This is called static binding


Dynamic Binding
You can specify that the compiler binding at runtime; this is called dynamic binding.

*/

#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int main()
{
	int x, y;
	cin >> x >> y;

	int op;
	cout << "0 : add, 1 : subtract, 2 : multiply" << endl;
	cin >> op;

	//static binding (early binding)
	/*int result;
	switch (op)
	{
	case 0: 
		result = add(x, y); 
		break;
	case 1:
		result = subtract(x, y);
		break;
	case 2:
		result = multiply(x, y);
		break;
	}
	cout << result << endl;
*/


	//Dynamic binding (late binding) //slower than Static Binding but much flexible
	int(*func_ptr)(int, int) = nullptr; //run-time
	switch (op) 
	{
	case 0:
		func_ptr = add;
		break;
	case 1:
		func_ptr = subtract;
		break;
	case 2:
		func_ptr = multiply;
		break;
	}

	cout << func_ptr(x, y) << endl;
	
	return 0;
}
