/*
HongJeongMo C++

Chapter 1_9 re-organizing code,formatting code
it's all about how to deal with empty space
The most important thing is when you make the code, 
it shouldn't be dense but have enough space to watch it comfortably. 
So that your eyes wouldn't say "What a shitty code!".
*/
#include <iostream>

using namespace std;


/*If you work alone, you can make a code with your own style, however, if you work in a team then 
you should follow that team's code style so that they can understand your code easily.
*/

int add(int x, int y) 
{ 
	return x + y; // Don't forget the indenting
}  


//eclipse code style
int add2(int x, int y) {
	return x + y;
}

int main()
{
	

	cout << "Hello, World" << "abc" <<  // if you want to do like this, then end with operator
		"Hello! this is pretty long sentence wow so as you can see developer just \n in the code" << endl;
	return 0;
}