/*
HongJeongMo C++

Chapter 6_5
Static Multi-dimensional Array
*/

#include<iostream>

using namespace std;

int Static_Multi_dimentionalArray_main()
{
	const int num_rows = 3;
	const int num_columns = 5;

	int array[num_rows][num_columns] = // row-major <-> column-major
	{
		{1,2,},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
			//cout << '[' << row << ']' << '[' << col << ']' << '\t';
			cout << array[row][col] << '\t';
			//cout << (int)&array[row][col] << '\t';

		cout << endl;
	}
	cout << endl;
	cout << endl;






	return 0;
}
