/*
HongJeongMo C++

Chapter 6_2
basic Array part2
*/


#include <iostream>

using namespace std;


void doSomething(int student_scores[20])
{
	cout << endl;
	cout << "doSomething" << endl;
	cout << "reference : " << &student_scores << "\tvalue : " << student_scores << endl; 
	cout << "reference : " << &(student_scores[0]) << "\tvalue : " << student_scores[0] << endl;
	cout << "reference : " << &(student_scores[1]) << "\tvalue : " << student_scores[1] << endl;
	cout << "reference : " << &(student_scores[2]) << "\tvalue : " << student_scores[2] << endl;
	cout << "reference : " << &(student_scores[3]) << "\tvalue : " << student_scores[3] << endl;
}


int main_array2()
{
	const int num_students = 20;

	int student_scores[num_students] = { 1,2,3,4,5 };

	cout << "reference : " << &student_scores << "\tvalue : " << student_scores << endl; //reference : 2095284 == &student_scores[0]
	cout << "reference : " << &(student_scores[0]) << "\tvalue : " << student_scores[0] << endl; //2095284  , warning, reference will change, because of ASLR(Address Space Layout Randomization)
	cout << "reference : " << &(student_scores[1]) << "\tvalue : " << student_scores[1] << endl; //2095288  , 4byte gap
	cout << "reference : " << &(student_scores[2]) << "\tvalue : " << student_scores[2] << endl; //2095292
	cout << "reference : " << &(student_scores[3]) << "\tvalue : " << student_scores[3] << endl; //2095296

	cout << sizeof(student_scores) << endl;
	cout << endl;
	doSomething(student_scores);


	return 0;
}