/*
HongJeongMo C++

Chapter B_5 inheritance and access specifier

*/

using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};


class Derived : private Base
{
public:
	Derived()
	{
		m_public = 123;
		m_protected = 123;
//		m_private = 123; // X
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
//		Derived::m_public; // X
	}
};


int main()
{
	Base base;
	base.m_public = 123;
//	base.m_potected = 123; // X
//	base.m_private = 123; // X

	Derived derived;
//	derived.m_public = 123; 


//	derived.m_protected = 123; // X
//	derived.m_private = 123; // X

	return 0;
}