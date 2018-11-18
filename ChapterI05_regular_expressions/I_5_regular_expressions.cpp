/*
HongJeongMo C++

Chapter I_5 regex(regular expressions)

*/
#include <iostream>
#include <regex> // c++11 support, regular expressions
using namespace std;

int main()
{
//	regex re("\\d+");
	regex re("[ab]"); //a or b only
//	regex re("[[:digit:]]{3}"); //3 decimal digit
//	regex re("[A-Z]+");// a to z
//	regex re("[A-Z]{1,5}"); // a to z minimum 1, max 5
//	regex re("([0-9]{1}([-]?)([0-9]{1,4}");

	string str;
	while (1)
	{
		getline(cin, str);
		if (regex_match(str, re))
			cout << "Match" << endl;
		else
			cout << "No match" << endl;

		// print matches
		{
			auto begin = sregex_iterator(str.begin(), str.end(), re);
			auto end = sregex_iterator();
			for (auto itr = begin; itr != end; ++itr)
			{
				smatch match = *itr;
				cout << match.str() << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}