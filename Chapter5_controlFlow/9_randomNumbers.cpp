/*
HongJeongMo C++

Chapter 5_9

random numbers

So far 2018, computer can't make his own decision, so it's impossible to create random number
however 
*/

#include <iostream>
#include <cstdlib> // std::radn(), std::srand()
#include <ctime> //std::time()
#include <random> // C++11 support, recommended
using namespace std;

unsigned int PRNG() // Pseudo Random Number Generator
{
	static unsigned int seed = 5523; //seed number

	seed = 8253729 * seed + 2396403;
	return seed % 32768;
}


int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1)* (std::rand()*fraction));
}


int main_random()
{
	//srand(5323); //initialize seed number, however result is always same as long as use same seed number, useful for debugging
	//srand(static_cast<unsigned int>(time(0))); //initialize seed number with time(), so that number will be changed


	//<random>, recommended way
	random_device rd;
	mt19937 mersenne(rd()); //mt19937 : 32bit random nubmer
	uniform_int_distribution<> dice(1, 6); //equal chance value, random number between 1 and 6 


	for (int count = 1; count <= 100; ++count)
	{
		//cout << PRNG() << "\t";
		//cout << rand() % 4 + 5 << "\t"; //numbers can be generated in some area only, not recommended
		//cout << getRandomNumber(3, 8) << "\t";
		cout << dice(mersenne) << endl; 	//<random>, recommended way

		if (count % 5 == 0) cout << endl;
	}


	return 0;
}