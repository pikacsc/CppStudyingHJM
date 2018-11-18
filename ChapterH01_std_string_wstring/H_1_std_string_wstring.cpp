/*
HongJeongMo C++

Chapter H_1 std::string, std::wstring

*/
#include <iostream>
#include <string>
#include <cstddef>
#include <locale>

int main(void)
{
	// c-style string example
	//{
	//	char *strHello = new char[7];
	//	strcpy_s(strHello, sizeof(char) * 7, " hello!");
	//	std::cout << strHello << std::endl;
	//}

	//std::string  ▶ basic_string<char, char_traits<char>, allocator<char>>;
	//std::wstring ▶ basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t>>;
	//{
	//	std::string string;
	//	std::wstring wstring;

	//	wchar_t wc; // typedef unsigned short wchar_t; , widecharacter/unicode
	//}

	//wstring example
	{
		//Stackoverflow.com
		//C++ Code to cout international characters using Visual Studio 2015

		const std::wstring texts[] =
		{
			 L"안녕하세요?", //korean
			 L"Ñá", //Spanish
			 L"forêt intérêt", //French
			 L"Gesäß", //German
			 L"取消波蘇日奇諾", //Chinese
			 L"日本人のビット", //Japanese
			 L"немного русский", //Russian
			 L"ένα κομμάτι της ελληνικής", // Greek
			 L"ਯੂਨਾਨੀ ਦੀ ਇੱਕ ਬਿੱਟ", // Punjabi (wtf?). xD
			 L"کمی از ایران ", // Persian (I know it, from 300 movie)
			 L"కానీ ఈ ఏమి నరకం ఉంది?", //Telugu (telu-what?)
			 L"Но какво, по дяволите, е това?" //Bulgarian
		};

		std::locale::global(std::locale(""));
		std::wcout.imbue(std::locale());

		for (size_t i = 0; i < 12; ++i)
			std::wcout << texts[i] << std::endl;
	}
	return 0;
}