#include <iostream>

using namespace std;


void DoSomething2()
{
		//conditional compiling
#ifdef LIKE_APPLE
		cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE
		cout << "Orange" << endl; //blurry, cause LIKE APPLE has been defined, so dead code
#endif
}

