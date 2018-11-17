/*
HongJeongMo C++

Chapter F_5 std::unique_ptr

*/
#include "Resource.h"
#include <memory.h>
using namespace std;
using namespace MyClass;


auto doSomething()
{
	return std::make_unique<Resource>(5);
}


void doSomething2(std::unique_ptr<Resource> & res)
{
	res->setAll(10);
}

int main()
{

	//{
	//	//Resource *res = new Resource(100000000);
	//	// early return or throw, memory leak
	//	//delete res;

	//	unique_ptr<Resource> res(new Resource(100000000));

	//}


	//{
	//	unique_ptr<int> upi(new int);

	//	//unique_ptr<Resource> res1(ptr);
	//	auto res1 = make_unique<Resource>(5); //recommended, use make_unique<datatype>();
	//	//auto res1 = doSomething();

	//	res1->setAll(5);
	//	res1->print();

	//	unique_ptr<Resource> res2;
	//	cout << boolalpha;
	//	cout << "res1 : " << static_cast<bool>(res1) << endl;
	//	cout << "res2 : " << static_cast<bool>(res2) << endl;
	//	
	//	//res2 = res1; // X, can't do copy semantics
	//	res2 = move(res1); // O, do move semantics only

	//	cout << boolalpha;
	//	cout << "res1 : " << static_cast<bool>(res1) << endl;
	//	cout << "res2 : " << static_cast<bool>(res2) << endl;

	//	if (res1 != nullptr) res1->print();
	//	if (res2 != nullptr) res2->print();

	//}

	{
		auto res1 = make_unique<Resource>(5);
		res1->setAll(1);
		res1->print();

		doSomething2(res1);
		res1->print();
	}


	//{ //caution, Don't try this
	//	Resource *res = new Resource;
	//	std::unique_ptr<Resource> res1(res); 
	//	std::unique_ptr<Resource> res2(res); // X, it's not unique
	//	delete res; // X, unique_ptr will automatically delete, so double delete
	//}


}