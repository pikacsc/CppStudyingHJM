/*
HongJeongMo C++

Chapter 7_10
Stack, Heap


����������������������������������������������������������
��                           ��
��           Heap            ��
��                           ��
����������������������������������������������������������
��                           ��
��           Stack           ��
��                           ��
����������������������������������������������������������
��           Data            ��
��                           ��
�� initialized data segment  ��
��    initialized global     ��
��     static variables      ��
����������������������������������������������������������
��BSS(Block Started by Symbol��
��                           ��
�� uninitialized data segment��
��   Zero-initialized global ��
��      static variables     ��
����������������������������������������������������������
��                           ��
��           Code            ��
��                           ��
����������������������������������������������������������


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