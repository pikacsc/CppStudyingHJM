/*
HongJeongMo C++

Chapter I_2 ostream

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{


	cout.setf(ios::showpos);
	cout << 108 << endl; //+108

	cout.unsetf(ios::showpos);
	cout << 108 << endl; //108

	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	//cout.setf(ios::hex,ios::basefield);
	//cout << std::hex; //use <iomanip>
	cout << 108 << endl; //6c

	cout << std::boolalpha;
	cout << true << " " << false << endl; // ture false

	cout << std::fixed;
	cout << std::setprecision(3) << 123.456 << endl; //123.456
	cout << std::setprecision(4) << 123.456 << endl; //123.4560
	cout << std::setprecision(5) << 123.456 << endl; //123.45600
	cout << std::setprecision(6) << 123.456 << endl; //123.456000
	cout << std::setprecision(7) << 123.456 << endl; //123.4560000

	cout << std::scientific;
	cout << std::setprecision(3) << 123.456 << endl; //1.235e+02
	cout << std::setprecision(4) << 123.456 << endl; //1.2346e+02
	cout << std::setprecision(5) << 123.456 << endl; //1.23456e+02
	cout << std::setprecision(6) << 123.456 << endl; //1.234560e+02
	cout << std::setprecision(7) << 123.456 << endl; //1.2345600e+02

	cout.setf(ios::dec);
	cout << -12345 << endl;									//-12345
	cout << setw(10) <<-12345 << endl;						//    -12345
	cout << setw(10) << std::left << -12345 << endl;		//-12345
	cout << setw(10) << std::right << -12345 << endl;		//    -12345
	cout << setw(10) << std::internal << -12345 << endl;	//-    12345

	cout.setf(ios::dec);
	cout.fill('*');
	cout << -12345 << endl;									//-12345
	cout << setw(10) << -12345 << endl;						//-****12345
	cout << setw(10) << std::left << -12345 << endl;		//-12345****
	cout << setw(10) << std::right << -12345 << endl;		//****-12345
	cout << setw(10) << std::internal << -12345 << endl;	//-****12345


	return 0;
}
