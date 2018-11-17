/*
HongJeongMo C++

Chapter G_2 STL, iterator with vector, list, set, map

*/

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	////vector, list
	//{
	//	//vector<int> container;
	//	list<int> container;
	//	for (int i = 0; i < 10; ++i)
	//		container.push_back(i);

	//	//vector<int>::const_iterator itr;
	//	list<int>::const_iterator itr;
	//	itr = container.begin();

	//	while (itr != container.end())
	//	{
	//		cout << *itr << " ";
	//		++itr;
	//	}
	//	cout << endl;

	//	for (auto itr = container.begin(); itr != container.end(); ++itr)
	//		cout << *itr << " ";
	//	cout << endl;
	//}
	

	////set
	//{
	//	set<int> container;
	//	for (int i = 0; i < 10; ++i)
	//		container.insert(i);

	//	for (auto itr = container.begin(); itr != container.end(); ++itr)
	//		cout << *itr << " ";
	//	cout << endl;

	//}
	//
	//map
	{
		map<int, char> container;
		for (int i = 0; i < 10; ++i)
			container.insert(make_pair(i, char(i+65)));

		for (auto itr = container.begin(); itr != container.end(); ++itr)
			cout << itr->first << " " << itr->second << endl;
		cout << endl;
	}



	return 0;
}