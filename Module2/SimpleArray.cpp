#include "SimpleArray.h"



SimpleArray::SimpleArray()
{
	int arr[5] = {0,1,2,3,4};
	this->a = arr;
	this->size = 5;
}

SimpleArray::SimpleArray(size_t size)
{
	this->size = size;
	a = new int[size];
}

SimpleArray::SimpleArray(SimpleArray & arr)
{
	this->size = arr.size;
	a = new int[size];
	for (int i = 0; i < size; i++)
		a[i] = arr.a[i];
}



SimpleArray::~SimpleArray()
{
}
