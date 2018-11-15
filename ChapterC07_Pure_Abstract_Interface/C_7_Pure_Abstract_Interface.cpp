/*
HongJeongMo C++

Chapter C_7 pure virtual function, abstract, interface

*/

#include <iostream>
#include <string>
using namespace std;




class IErrorLog // interface
{
public:
	virtual bool reportError(const char * errorMessage) = 0;
	virtual ~IErrorLog() {}
};


class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessage) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};







class Animal // abstract class
{
protected:
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName() { return m_name; }


	virtual void speak() const = 0; // pure virtual function, it should be redefined in derived class
	/*virtual void speak() const 
	{
		cout << m_name << " ??? " << endl;
	}*/
};

class Cow : public Animal
{
public:
	Cow(string name)
		:Animal(name)
	{}

	virtual void speak() const
	{
	cout << m_name << " Moooo " << endl;
	}
};

void doSomething(IErrorLog & log)
{
	log.reportError("Runtime error!!");
}


int main()
{
	Cow cow("Hello");
	cow.speak();

	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);


	return 0;
}