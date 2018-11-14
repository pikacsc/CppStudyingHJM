/*
HongJeongMo C++

Chapter A_5 container classes, making my own container class(MyIntArray)

std::vector<int> int_vec; //vector contrains <int> data, so vector is a container class

pair, vector, list, slist, stack, map, etc ...

you can find much more in C++ STL(Standard Template Library)

*/

#include <iostream>
#include <vector>
#include <array>
#include "MyIntArray.h"
using namespace std;

int main()
{
	//making my own container class(MyIntArray)

	//exam1) MyIntArray my_arr{1,3,5,7,9};  //solved
	//exam2) my_arr.insertBefore(10, 1);   //1, 10, 3, 5, 7, 9 //solved
	//exam3) my_arr.remove(3);             //1, 10, 3, 7, 9 // solved
	//exam4) my_arr.push_back(13);         //1, 10, 3, 7, 9, 13 //solved
	
	MyContainer::MyIntArray my_arr{ 1,3,5,7,9 };
	cout << my_arr << endl;
	
	my_arr.InsertBefore(10, 1);   //1, 10, 3, 5, 7, 9
	cout << my_arr << endl;

	my_arr.remove(3);             //1, 10, 3, 7, 9
	cout << my_arr << endl;

	my_arr.push_back(13);         //1, 10, 3, 7, 9, 13
	cout << my_arr << endl;

	return 0;
}