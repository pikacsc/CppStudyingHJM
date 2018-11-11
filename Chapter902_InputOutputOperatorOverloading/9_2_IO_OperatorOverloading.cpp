/*
HongJeongMo C++

Chapter 9_2 Input>>, Output<<  Operator Overloading

*/
#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{}

	double getX()
	{
		return m_x;
	}

	double getY()
	{
		return m_y;
	}

	double getZ()
	{
		return m_z;
	}

	friend std::ostream& operator << (std::ostream &out, const Point &point)  // you can use it for fstream
	{
		out << "x : " << point.m_x << "\ty : " << point.m_y << "\tz : " << point.m_z;
		return out;
	}

	friend std::istream& operator >> (std::istream &in, Point &point)  
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		return in;
	}
};

int main()
{

	Point p1(0.0, 0.1, 0.2) , p2(3.4, 1.5, 2.0);

	Point p3, p4;

	cin >> p3 >> p4;

	cout << p1 << endl; 
	cout << p2 << endl;

	ofstream of("out.txt");
	of << p1 << endl;
	of << p2 << endl;

	of.close();
	
	return 0;
}