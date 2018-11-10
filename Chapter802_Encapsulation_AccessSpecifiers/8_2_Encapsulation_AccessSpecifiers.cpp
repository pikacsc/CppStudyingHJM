/*
HongJeongMo C++

Chapter 8_2
Encapsulation, Access Specifiers, Access Functions

if you don't Encapsulation then 

every class functions can define the member variables
class A 
date.m_month = 3;

class B
date.m_month = 5;

class C
date.m_month = 6;

after that when you rename m_month, you should refactoring all(class A, class B, class C ...) 

*/

#include <iostream>

using namespace std;

class Date
{
public:  //access specifier
	int m_month;
	int m_day;
	int m_year;

	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}

};

/*access specifiers
public 
access granted to all functions


protected
access granted to functions in class, DerivedClass 

private(default)
access granted to functions in class


*/

class PrivateData
{
private:
	int m_secretPwd = 0;

public: 
	// now you can access private data via access functions(getters,setters) : 'public void setSecretPwd()', 'public int getSecretPwd()'
	void setSecretPwd(int &new_pwd) 
	{
		m_secretPwd = new_pwd;
	}

	int getSecretPwd()
	{
		return m_secretPwd;
	}
};


int main()
{
	Date today;
	today.m_month = 8; // if you put 'private' to member variables of Date then you can't access them
	today.m_day = 4;
	today.m_year = 2025;

	PrivateData pdata;
	cout << pdata.getSecretPwd() << endl;
	
	int newPwd = 50;
	pdata.setSecretPwd(newPwd);
	cout << "change" << endl;
	cout << pdata.getSecretPwd() << endl;

	Date copy;
	copy.copyFrom(today);


	return 0;
}