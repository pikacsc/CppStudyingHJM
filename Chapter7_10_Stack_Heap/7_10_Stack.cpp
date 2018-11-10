/*
HongJeongMo C++

Chapter 7_10
Stack, Heap


  忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖
  弛                           弛 
  弛           Heap            弛         
  弛                           弛  
  戍式式式式式式式式式式式式式式式式式式式式式式式式式式式扣     
  弛                           弛  
  弛           Stack           弛
  弛                           弛
  戍式式式式式式式式式式式式式式式式式式式式式式式式式式式扣
  弛           Data            弛
  弛                           弛
  弛 initialized data segment  弛  
  弛    initialized global     弛 
  弛     static variables      弛
  戍式式式式式式式式式式式式式式式式式式式式式式式式式式式扣
  弛BSS(Block Started by Symbol弛  
  弛                           弛    
  弛 uninitialized data segment弛 
  弛   Zero-initialized global 弛
  弛      static variables     弛
  戍式式式式式式式式式式式式式式式式式式式式式式式式式式式扣
  弛                           弛
  弛           Code            弛
  弛                           弛
  戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎

  Stack is literally stacking data in order and destroy in reverse order

  it's fast but small and limited size, so "Stack Overflow" can be happend


*/


#include <iostream>

int g_i = 0; // 1 initialize global variable

int second(int x) //4 initialize second() stack frame and member int x
{
	return 2 * x;
} //5.at the end of second() detroy second() stack frame

int first(int x) //3 initialize first() stack frame and members int x, y
{
	int y = 3; //3 
	return second(x + y);
} //6.after at the end of second() destroy first stack frame()


int main() // 2, initialize main() stack frame 
{
	using namespace std;
	int a = 1, b; // 2, initialize members int a, b  of main() stack frame
	b = first(a); 
	cout << b << endl;
	return 0;
}//7 at the end  destroy main() stack frame

//8 destroy int g_i 
