/*
HongJeongMo C++

Chapter F_4 std::move

*/

#include "AutoPtr.h"
#include "Resource.h"
#include <vector>
#include <string>
using namespace std;
using namespace MyClass;

template<class T>
void MySwap(T &a, T &b)
{
	/*T tmp = a;
	a = b;
	b = tmp;
*/
	T tmp { std::move(a) };
	a = std::move(b);
	b = std::move(tmp);
}


int main()
{
	//{
	//	AutoPtr<Resource> res1(new Resource(10000000));
	//	cout << res1.m_ptr << endl;

	//	AutoPtr<Resource> res2 = std::move(res1); //std::move ,R-value return, you can use it to move semantics

	//	cout << res1.m_ptr << endl;
	//	cout << res2.m_ptr << endl;
	//}

	/*{
		AutoPtr<Resource> res1(new Resource(3));
		res1->setAll(3);

		AutoPtr<Resource> res2(new Resource(5));
		res2->setAll(5);

		res1->print();
		res2->print();

		MySwap(res1, res2);
		
		res1->print();
		res2->print();
	}*/


	{
		vector<string> v;
		string str = "Hello";

		v.push_back(str);

		cout << str << endl; //Hello
		cout << v[0] << endl; //Hello

		v.push_back(std::move(str));

		cout << str << endl; // " ", str R-value moved to v[1]
		cout << v[0] << " " << v[1] << endl; 
		// v[0] : Hello   v[1] : Hello
	}
/*
	{
		string x{ "abc" };
		string y{ "de" };

		cout << "x: " << x << endl;
		cout << "y: " << y << endl;

		MySwap(x, y);

		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}
*/

	return 0;
}