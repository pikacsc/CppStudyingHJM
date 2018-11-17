/*
HongJeongMo C++

Chapter G_1 STL(Standard Template Libraries), Containers

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions 
such as lists, stacks, arrays, etc. It is a library of container classes, algorithms and iterators. 
It is a generalized library and so, its components are parameterized.
A working knowledge of template classes is a prerequisite for working with STL.

STL has four components
-Algorithms
-Containers
-Functions
-Iterators


A container is a holder object that stores a collection of other objects (its elements). 
They are implemented as class templates, which allows a great flexibility in the types supported as elements.

The container manages the storage space for its elements and provides member functions to access them, 
either directly or through iterators (reference objects with similar properties to pointers).

Containers replicate structures very commonly used in programming: 
dynamic arrays (vector), queues (queue), stacks (stack), heaps (priority_queue), linked lists (list), trees (set), associative arrays (map)...

--www.geeksforgeeks.org/the-c-standard-template-library-stl/
--www.cplusplus.com/reference/stl/
*/

#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
using namespace std;
void sequence_containers()
{
	////vector
	//{
	//	vector<int> vec; // #include <vector>
	//	for (int i = 0; i < 10; ++i)
	//		vec.push_back(i);
	//	for (auto &e : vec)
	//		cout << e << " ";
	//	cout << endl;
	//}

	////deque
	//{
	//	deque<int> deq; // #include <deque>
	//	for (int i = 0; i < 10; ++i)
	//	{
	//		deq.push_back(i);
	//		deq.push_front(i);
	//	}

	//	for (auto &e : deq)
	//		cout << e << " ";
	//	cout << endl;
	//}

}

void associative_containers()
{
	//set
	/*{
		set<string> str_set;
		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");

		cout << str_set.size() << endl;

		for (auto &e : str_set)
			cout << e << " ";
		cout << endl;
	}*/

	//multiset : duplication is allowed
	//{
	//	multiset<string> str_set;
	//	str_set.insert("Hello");
	//	str_set.insert("World");
	//	str_set.insert("Hello");

	//	cout << str_set.size() << endl;

	//	for (auto &e : str_set)
	//		cout << e << " ";
	//	cout << endl;
	//}

	////map : key/value
	//{
	//	map<char, int> map;
	//	map['a'] = 10;
	//	map['b'] = 20;
	//	map['c'] = 50;

	//	cout << map['a'] << endl;

	//	map['a'] = 100;

	//	cout << map['a'] << endl;

	//	map['a'] = 100;

	//	cout << map['a'] << endl;

	//	for (auto &e : map)
	//		cout << e.first << " " << e.second << " "; // e.first(key), e.second(value)
	//	cout << endl;
	//}

	//multimap : duplicated keys
	//{
	//	multimap<char, int> map;
	//	map.insert(pair<char, int>('a', 10)); // since c++17, you can omit <char, int>
	//	map.insert(pair<char, int>('b', 10)); 
	//	map.insert(pair<char, int>('c', 10)); 
	//	map.insert(pair<char, int>('a', 100));

	//	cout << map.count('a') << endl;

	//	for (auto &e : map)
	//		cout << e.first << " " << e.second << " ";
	//	cout << endl;
	//}
}

void container_adapters()
{
	//stack
	//{
	//	cout << "stack" << endl;
	//	stack<int> stack;
	//	stack.push(1); // push adds a copy
	//	stack.emplace(2); // emplace constructs a new object
	//	stack.emplace(3); 

	//	cout << stack.top() << endl;
	//	stack.pop();
	//	cout << stack.top() << endl;
	//}

	//queue
	//{
	//	cout << "Queue" << endl;
	//	queue<int> queue;
	//	queue.push(1);
	//	queue.push(2);
	//	queue.push(3);
	//	cout << queue.front() << " " << queue.back() << endl;
	//	queue.pop();
	//}

	//Priority queue
	{
		cout << "Priority queue" << endl;
		priority_queue<int> queue;
		for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
			queue.push(n);

		for (int i = 0; i < 10; ++i)
		{
			cout << queue.top() << endl;
			queue.pop();
		}
	}
}


int main()
{
	//sequence_containers();

	//associative_containers();
	
	container_adapters();
	return 0;
}