/*
1.1 - 1.2 HongJeongMo C++ 
includeing 1.2 'comments' lesson
*/

#include <iostream> 
//iostream   �� library related with input, output stream 
//#include   �� preprocessor directive, preprocessing before compiling


int main_chapter1_1()
{
	int x = 2; //variable  : datatype identifier = literal
	x = 5;
	int y = x + 3;

	std::cout << y << std::endl;
	std::cout << 1 + 2 << std::endl;
	
// std    ��  namespace
//namespace::     ��  inside of that namespace
// cout   �� control output
// <<      ��   output operator 

	int sight = 10; 

	
	sight = 0; //In the game, after got poisoned state, player sight become 0;   
	//��if there were no comments then no one can't understand why variable 'sight' got 0; so comments needed


	return 0; 
}