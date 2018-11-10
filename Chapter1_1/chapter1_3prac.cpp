#include <iostream>

int main_chapter1_3prac()
{
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl; // 3

	int y = x;
	std::cout << y << std::endl; // 3

	// is(x + y) l-value or r-value? r-value
	std::cout << x + y << std::endl; // 6

	std::cout << x << std::endl; //  3

	//int z;
	//std::cout << z << std::endl; // 0 or NULL

	return 0;
}