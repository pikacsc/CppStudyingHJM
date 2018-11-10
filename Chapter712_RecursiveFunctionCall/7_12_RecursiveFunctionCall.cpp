/*
HongJeongMo C++

Chapter 7_12
Recursive Function Call
it's useful sometimes but becareful Stack-overflow
*/
#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if (count > 0) // when you use Recursive Function Call, you should make end point
		countDown(count - 1); // call itself
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

//0 1 1 2 3 5 8 13
void Fibonacchi(int &num1, int &num2)
{
	while (num1 < 55) 
	{
		int num3 = num1 + num2;
		cout << num1 << endl;
		num1 = num2;
		num2 = num3;
		Fibonacchi(num1, num2);
	}
}


int main()
{
	countDown(5);
	cout << sumTo(10) << endl;
	cout << endl;
	int num1 = 0;
	int num2 = 1;
	Fibonacchi(num1,num2);

	return 0;
}