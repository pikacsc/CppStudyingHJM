/*
HongJeongMo C++

Chapter 6_3
array and for
*/




#include <iostream>

using namespace std;

int main_array_for()
{
	
	int scores[] = { 84,92,76,81,56 };

	cout << sizeof(scores) << endl;
	
	const int num_students = sizeof(scores) / sizeof(int); // 20 / 4 == 5

	int total_score = 0;
	int max_score = 0;
	int min_score = 0;

	for (int i = 0; i < num_students; ++i) // i <= num_students, runtime error
	{
		total_score += scores[i];
		max_score = scores[i] > max_score ? scores[i] : max_score;
	}

	double avg_score = static_cast<double>(total_score) / num_students;
 

	cout << "avg_score : " << avg_score << endl;
	cout << "max_score : " << max_score << endl;
	return 0;
}