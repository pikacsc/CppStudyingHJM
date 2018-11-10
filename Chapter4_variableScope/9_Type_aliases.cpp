/*
HongJeongMo C++

Chapter 4_9
Type aliases, typedef, C++11 using,
*/

#include <iostream>
#include <vector>
#include <cstdint>
#include <string>

int Type_aliases()
{
	using namespace std;

	typedef double distance_t; // useful for refactoring

	std::int8_t i(97);//typedef signed char int8_t

	double     my_distance;
	distance_t home2work;
	distance_t home2school;

	typedef vector<pair<string, int>> Pairlist1; // you can make it short to 'Pairlist1'
	using Pairlist2 = vector<pair<string, int>>;

	Pairlist1 pairlist1;
	Pairlist2 pairlist2;

	return 0;
}