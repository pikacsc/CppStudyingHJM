/*
HongJeongMo C++

Chapter F_3 move consturctors, move assignment

*/
#pragma once
#include <iostream>

//this class is similar structure with std::auto_ptr, but since c++ 17, it has been deprecated

template<class T>
class AutoPtr
{
public:
	T *m_ptr = nullptr;

public:
	AutoPtr(T *ptr = nullptr)
		:m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor " << std::endl;
		if (m_ptr != nullptr) delete m_ptr;
	}

	//AutoPtr(const AutoPtr &a) // copy consturctor
	//{
	//	std::cout << "AutoPtr copy constructor " << std::endl;
	//	
	//	//deep copy
	//	m_ptr = new T;
	//	*m_ptr = *a.m_ptr;
	//}

	//AutoPtr& operator = (const AutoPtr &a)
	//{
	//	std::cout << "AutoPtr copy assignment " << std::endl;

	//	if (&a == this) // prevent self-assignment
	//		return *this;

	//	if (m_ptr != nullptr) delete m_ptr;

	//	//deep copy
	//	m_ptr = new T;
	//	*m_ptr = *a.m_ptr;
	//	return *this;
	//}

	AutoPtr& operator = (AutoPtr&& a)
	{
		std::cout << "AutoPtr move assignment " << std::endl;
		if (&a == this) // prevent self-assignment
			return *this;

		if (!m_ptr) delete m_ptr;

		//shallow copy
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr; // really necessary?
		return *this;
	}

	AutoPtr(AutoPtr&& a)
		:m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr; // really necessary?
		std::cout << "AutoPtr move constructor " << std::endl;
	}



	
	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
	bool isNull() const { return m_ptr == nullptr; }
};