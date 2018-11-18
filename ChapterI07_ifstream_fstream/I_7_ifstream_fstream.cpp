/*
HongJeongMo C++

Chapter I_7 ifstream, fstream

*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

int main()
{
	const string filename = "my_file.txt";

	////make a file
	//{
	//	ofstream ofs(filename);
	//	for (char i = 'a'; i <= 'z'; ++i)
	//		ofs << i;
	//	ofs << endl;
	//}

	////read the file
	//{
	//	ifstream ifs(filename);

	//	ifs.seekg(5); //ifs.seekg(5, ios::beg); ignore 5byte then read 
	//	cout << (char)ifs.get() << endl; //f

	//	ifs.seekg(5, ios::cur);
	//	cout << (char)ifs.get() << endl;
	//}

	{
		fstream iofs(filename);

		iofs.seekg(5);
		cout << (char)iofs.get() << endl; //read

		iofs.seekg(5);
		iofs.put('A'); //write
	}
}