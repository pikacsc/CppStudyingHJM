/*
HongJeongMo C++

Chapter 6_1
basic Array part1


*/


#include <iostream>

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACK,
	DASH,
	VIOLET,
	NUM_STUDENTS = 5,
};

int main_array1()
{
	using namespace std;
	/*int jack_score;
	int dash_score;
	int violet_score;
*/

	int one_student_score; // 1 variable ¢º 4 byte
	int student_scores[5]; // 5 int ¢º 4*5 == 20 byte 
	//int student_scores[NUM_STUDENTS]

	cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;
	cout << endl;


	//you can use enum as number
	student_scores[JACK] = 100; // 1st element, index 0
	student_scores[DASH] = 80; //2nd, index 1
	student_scores[VIOLET] = 90; //3rd, index 2
	student_scores[3] = 50; //4th, index 3
	student_scores[4] = 0; //5th, index 4


	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;

	// array initialization
	int my_array[5] = { 1, 2, 3, 4, 5 }; 

	int my_array2[] = { 1, 2 }; 

	int my_aaray3[]{ 1,2,3 }; //since c++11



	return 0;
}