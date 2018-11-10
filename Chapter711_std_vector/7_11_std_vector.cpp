/*
HongJeongMo C++

Chapter 7_11
use std vector like stack

*/

#include<iostream>
#include<vector>

using namespace std;

void printStack(const vector<int> &stack)
{
	for (auto &e : stack)
		cout << e << " ";
	cout << endl;
}



int main()
{
	vector<int> v{ 1,2,3 }; 	//int *v_ptr = new int[3]{1,2,3}

	//size, capacity

	v.resize(2);
	v.reserve(300); //memory pre allocation, however don't put it in too much value
	for (auto &e : v)
		cout << e << " ";
	cout << endl;
	cout << "size() : "<< v.size() << endl; // 2, presented size
	cout << "capacity() : "<< v.capacity() << endl;//300, real size

	int *ptr = v.data();
	cout << ptr[2] << endl;
	cout << endl;

	vector<int> stack;
	stack.push_back(3); //3
	printStack(stack);

	stack.push_back(5); //3 5
	printStack(stack);
	
	stack.push_back(7); //3 5 7
	printStack(stack);
	
	stack.pop_back(); // 3 5
	printStack(stack);
	
	stack.pop_back(); // 3
	printStack(stack);

	stack.pop_back(); // empty
	printStack(stack);


	return 0;
}