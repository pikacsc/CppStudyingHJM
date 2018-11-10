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


Heap

it's slower then Stack but much bigger then Stack


*/


#include <iostream>

int main()
{
	int *ptr = nullptr;
	ptr = new int[1000000];
	delete[] ptr; // delete ptr's pointing memory data
	ptr = nullptr; // destroy the pointing address in ptr,so ptr will be 0
	return 0;
}