#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int> myfunc();

auto myfunc2();

auto myfunc3();




int main()
{
	auto result = myfunc2();

	cout << get<0>(result) << " " << get<1>(result) << " " << endl;
 	return 0;
}

tuple<int, int> myfunc()
{

	return tuple<int, int>(123, 456); 
}



auto myfunc2()
{

	return tuple<int, int>(123, 456);
}


auto myfunc3()
{

	return tuple<int, int>(123, 456); //since c++17, you can omit '<int, int>' part  
}
