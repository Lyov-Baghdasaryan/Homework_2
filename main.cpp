#include <iostream>
#include "DynamicArray.h"

int main()
{
	DynamicArray arr;
	arr.Push(10);
	arr.Push(20);
	arr.Push(30);
	arr.Push(40);
	arr.Push(50);
	arr.Push(60);

	arr.PrintArr();

	return 0;	
}
