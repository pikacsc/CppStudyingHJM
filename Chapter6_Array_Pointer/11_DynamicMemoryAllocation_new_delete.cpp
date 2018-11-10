/*
HongJeongMo C++

Chapter 6_11

dynamic memory allocation, new, delete

Static Memory Allocation : Stack, once you initialized, then keep living on until program exit
ex)static, global variables


Dynamic Memory Allocation : Heap



new 'datatype': get memory reference as much as 'datatype' size from OS,

delete 'pointerVariable'; return the memory reference(pointerVariable) to OS
pointerVariable = nullptr; assigning nullptr after delete, otherwise, garbage value(unexpected value) can be used


Both 'new' and 'delete', should work with OS, so it's a bit slow process
*/

#include <iostream>

using namespace std;

int main_DynamicMemoryAllocation()
{
	//int monsters[100]; // stack

	// new int; ¢º return memory reference
	int *ptr = new int;
	*ptr = 7;
	//int var;
	//var = 7;



	int *ptr2 = new int{ 7 }; // new int(7)
	cout << *ptr2 << endl;
	cout << endl;

	cout << "before delete" << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << endl;

	delete ptr; // delete pointerVariable, cancel the memory assigning

	cout << "After delete" << endl;
	cout << ptr << endl; //reference is still same
	cout << *ptr << endl; // however value has changed to garbage
	cout << endl;




	ptr = nullptr; //nullptr assigning
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
		cout << endl;
	}

	cout << "After nullptr assigning" << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << endl;
	

	//Keep in mind, these are pretty common way to get memory back
	/*
	delete ptr;
	ptr = nullptr;
	if(ptr != nullptr)
	{
		use ptr code
	}
	*/

	

	int *ptr3 = new (std::nothrow) int{ 7 }; //new (std::nothrow), usually it used for keep maintain variable living, 
	//even though other variable use too much memory, so can't maintain it

	if (ptr3)
	{
		cout << ptr3 << endl;
		cout << *ptr3 << endl;
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}


	//common mistakes
	int *ptr4 = new int{ 4 };
	int *ptr5 = ptr4;

	delete ptr4;
	ptr4 = nullptr;
	//you should delete ptr5 as well
	ptr5 = nullptr;




	//memory leak , Warning really important ¡Ú¡Ú¡Ú¡Ú¡Ú , use Debugger mode F5 and use Debug/Windows/diagnosis tools(ctrl+alt+F2)
	/*
	while (1)
	{
		int *ptr6 = new int;
		cout << ptr6 << endl;
	}

	when you Run the program, always keep on eyes on memory graph,
	if it shows Rising curve then 
	it is Memory Leak

	*/

	
	//Good one, no memory leak, memory graph shows rectangle
	while (1)
	{
		int *ptr6 = new int;
		cout << ptr6 << endl;
		delete ptr6;
	}
	

	return 0;
}
