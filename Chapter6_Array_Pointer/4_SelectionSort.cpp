/*
HongJeongMo C++

Chapter 6_4
Selection Sort
*/
#include <iostream>

using namespace std;

void printArray(int arr[], int length)
{
	for (int index = 0; index < length; ++index)
	{
		cout << arr[index] << " ";
	}
	cout << endl;
}


int main_selectionSort()
{
	/*          
	3 5 2 1 4  put the minimum to front
	1 5 2 3 4  then next minimum value in last of them, put it next 
	1 2 5 3 4  do it again and again
	1 2 3 5 4
	1 2 3 4 5
	*/

	const int length = 5;

	int array[length] = { 3,5,2,1,4 };
	
	printArray(array, length);


	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestindex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestindex] > array[currentIndex])
			{
				smallestindex = currentIndex;
			}
		}

		//swap two values in the array
		// std::swap(array[smallestIndex], array[startIndex]);
		{
			int temp = array[smallestindex];
			array[smallestindex] = array[startIndex];
			array[startIndex] = temp;
		}
		printArray(array, length);
	}

	
	return 0;
}