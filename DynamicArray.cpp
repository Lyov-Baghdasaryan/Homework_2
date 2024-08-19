#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray() : size(0), capacity(5), arr(new int[capacity]) {}

DynamicArray::~DynamicArray(){
        delete []arr;
        arr = nullptr;
}

void DynamicArray::Push(int value){
	if(size == capacity){
		capacity *= 2;
		int* tmp = new int[capacity];
		for(int i = 0; i < size; i++){
			tmp[i] = arr[i];
		}
		delete []arr;
		arr = tmp;
		tmp = nullptr;
	}
	arr[size] = value;
	++size;
}

void DynamicArray::PrintArr(){
        for(int i = 0; i < size; i++){
                std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
}

