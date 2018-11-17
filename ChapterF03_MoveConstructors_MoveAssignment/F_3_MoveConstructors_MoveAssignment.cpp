/*
HongJeongMo C++

Chapter F_3 move consturctors, move assignment

*/

#include "AutoPtr.h"
#include "Resource.h"
#include "Timer.h"
using namespace MyClass;
using namespace MyUtil;
using namespace std;

AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(100000000));
	return res;
}


int main()
{
	using namespace std;
	streambuf* orig_buf = cout.rdbuf();
	//cout.rdbuf(NULL); // disconnect cout from buffer

	Timer timer;
	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}

	cout.rdbuf(orig_buf);
	timer.elapsed();
	return 0;
}