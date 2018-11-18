/*
HongJeongMo C++

Chapter I_1 istream

*/

#include <iostream>
#include <string>
#include <iomanip> // input/output manipulators

using namespace std;

int main()
{
	char buf[5]; 
	cin >> setw(5) >> buf; //setw(5) bring 5 chars including null
	cout << buf << endl;
	
	return 0;
}