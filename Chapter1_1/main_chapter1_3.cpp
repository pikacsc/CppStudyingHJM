#include <iostream> //cout, cin, endl ...
#include <cstdio> // printf
/*
1.3 - 1.5 HongJeongMo C++
variables, cin, cout, function
*/

int addTwoNumbers(int num_a, int num_b);

int multiNumbs(int num_a, int num_b);

void printHelloWorld(void);

void print();

int main_1_3()
{
	int x; //variable x declare, some part of memory would assigned as a int x
	x = 123; //assignment
// x ¢º Lvalue(left value),the value which has memory reference
// = ¢º assignment operator
// 123 ¢º Rvalue(right value)


	x = x + 2;  // 123 + 2 == 125

	int y = 123; //initialization == int y(123);

	std::cout << x << std::endl;  //x  ¢º  literal of variable x
	//std::cout << y << std::endl;    
	std::cout << &x << std::endl; //&x  ¢º  memory reference of variable x 
	
	x = 1024;
	std::cout << "I love this lecture!" << std::endl; 	//std::endl;  ¢º \n
	std::cout << "x is " << x << " pi is " << std::endl; // ¢º x is 1024 pi is , you can put the variable between string, like this "<< x <<"
	std::cout << "abc" << "\t" << "def" << std::endl; // \t ¢º TAB
	std::cout << "ab" << "\t" << "cdef" << std::endl; // \t ¢º TAB

	using namespace std; //From this line, you can omit the keyword "std" 
	cout << "Hello I omitted 'std' by using namespace std;" << endl;

	cout << "\a"; // "\a" ¢ºaudio sound out

	int z = 35;
	cout << "Before input, variable int z was " << z << endl;

	cin >> z; // >> ¢º input operator, now you can get input and save it to variable "z"
	cout << "now z is " << z << endl;





	//pattern ¢º number a + number b 
	//make function addTwoNumbers()


	cout << "addTwoNumbers()" << endl;
	cout << addTwoNumbers(1, 2) << endl;//  ¢º	cout << 1 + 2 << endl; 
	cout << addTwoNumbers(3, 4) << endl; //  ¢º cout << 3 + 4 << endl;
	cout << addTwoNumbers(8, 13) << "\n\n" << endl; // ¢º	cout << 8 + 13 << endl;

	cout << "multiNumbs()" << endl;
	cout << multiNumbs(1, 2) << endl; //  ¢º	cout << 1 * 2 << endl;
	cout << multiNumbs(3, 4) << endl; //  ¢º	cout << 3 * 4 << endl;
	cout << multiNumbs(8, 13) << "\n\n" << endl; //  ¢º	cout << 8 * 13 << endl;

	printHelloWorld();


	return 0;
}


int addTwoNumbers(int num_a, int num_b) 
{
	int sum = num_a + num_b;
	return sum;
}

int multiNumbs(int num_a, int num_b)
{
	int mul = num_a * num_b;
	return mul;
}


void printHelloWorld(void)
{
	using namespace std;
	print(); // you can call function inside of function
	cout << " from print() of printHelloWorld()" << endl;

	return;
	cout << "\n\n\nhelloWorld! from printHelloWorld()" << endl;

}


void print()
{
	using namespace std;
	cout << "HelloWorld!" << endl;
}