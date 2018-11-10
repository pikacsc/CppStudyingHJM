/*
HongJeongMo C++

Chapter 6_19
Double Pointer, Dynamic Multidimensional Array
*/

#include <iostream>

using namespace std;

int DoublePointer()
{
	int *ptr = nullptr;
	int **ptrptr = nullptr; // pointer to pointer(double pointer)

	int value = 5;

	ptr = &value;

	ptrptr = &ptr;

	cout << "int value = 5;" << endl;
	cout << "ptr = &value;" << endl;
	cout << "ptrptr = &ptr;" << endl;
	cout << endl;
	cout << "ptr : " << ptr << endl;
	cout << "*ptr : " << *ptr << endl; // value is 5
	cout << "&ptr : " << &ptr << endl; 
	cout << "ptrptr : " << ptrptr << endl; 
	cout << "*ptrptr : " << *ptrptr << endl; // even value is address
	cout << "&ptrptr : " << &ptrptr << endl;
	cout << "**ptrptr : " <<**ptrptr << endl; //*(*ptrptr) == *(&ptr)

	
	//multi array with double pointer
	const int row = 3;
	const int col = 5;
	const int s2da[][5] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int **matrix = new int*[row];

	for (int r = 0; r < row; ++r)
		matrix[r] = new int[col];

	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[r][c] = s2da[r][c];

	//print all element
	for (int r = 0; r < row; ++r) 
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[r][c] << " ";
		cout << endl;
	}

	

	cout << endl;
	cout << endl;
	cout << "same result but no double pointer" << endl;

	int *matrix2 = new int[row*col];
	

	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix2[c+ col*r] = s2da[r][c];
	
	//print all element
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix2[c + col * r] << " ";
		cout << endl;
	}
	
	
	
	

	//delete
	for (int r = 0; r < row; ++r)
		delete[] matrix[r];

	delete[] matrix;


	delete[]matrix2;


	return 0;

}



