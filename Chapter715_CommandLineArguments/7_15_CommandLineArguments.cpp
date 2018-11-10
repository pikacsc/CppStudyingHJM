/*
HongJeongMo C++

Chapter 7_15
Command Line Arguments

use parameter in main()

main()
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	for (int count = 0; count < argc; ++count)
	{
		cout << argv[count] << endl;
	}
	return 0;
}