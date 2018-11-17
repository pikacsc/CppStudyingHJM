/*
HongJeongMo C++

Chapter F_6 std::shared_ptr

*/

#include "Resource.h"
using namespace std;
using namespace MyClass;

int main()
{
	

	/*Resource *res = new Resource(3);
	res->setAll(1);
	*/{
		//shared_ptr<Resource> ptr1(res);

		auto ptr1 = make_shared<Resource>(3);
		ptr1->setAll(1);

		ptr1->print();

		{
			shared_ptr<Resource> ptr2(ptr1);
			//shared_ptr<Resource> ptr2(res);
			//auto ptr2 = ptr1;

			ptr2->setAll(3);
			ptr2->print();

			cout << "Going out of the block" << endl;
		}
		ptr1->print();
		cout << "Going out of the outer block" << endl;
	}

	// X, if you use like this, ptr2 wouldn't know ptr1
	//Resource *res = new Resource(3);
	//res->setAll(1);
	//{
	//	shared_ptr<Resource> ptr1(res);

	//	//auto ptr = make_shared<Resource>(3);
	//	//ptr1->setAll(1);

	//	ptr1->print();

	//	{
	//		//shared_ptr<Resource> ptr2(ptr1);
	//		shared_ptr<Resource> ptr2(res);
	//		//auto ptr2 = ptr1;

	//		ptr2->setAll(3);
	//		ptr2->print();

	//		cout << "Going out of the block" << endl;
	//	}
	//	ptr1->print();
	//	cout << "Going out of the outer block" << endl;
	//}


	return 0;
}
