/*
HongJeongMo C++

Chapter D_2 class templates

*/

#include "MyArray.h"

template<typename T>
void MyClass::MyArray<T>::print()
{
	using namespace std;
	for (int i = 0; i < m_length; ++i)
		cout << m_data[i] << " ";
	cout << endl;
}

// explicit instantiation
template class MyClass::MyArray<double>;
template class MyClass::MyArray<int>;

//template void MyClass::MyArray<double>::print();
//template void MyClass::MyArray<int>::print();
