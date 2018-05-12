#include "Simple2DArray.h"

Simple2DArray::Simple2DArray(size_t m, size_t n)
{
	this->m = m;
	this->n = n;
	int** a = new int*[m];
	for (int i = 0; i < m; i++) {
		a[i] = new int[n];
	}
	int counter = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) 
		{
			a[i][j] = counter++;
			std::cout << a[i][j];
		}
}

Simple2DArray::Simple2DArray(Simple2DArray & arr)
{
	this->m = arr.m;
	this->n = arr.n;
	int **a = new int *[m];
	for (int i = 0; i < m; i++) {
		a[i] = new int[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = arr.a[i][j];
		}
	}
}


Simple2DArray::~Simple2DArray()
{
	for (int i = 0; i < m; i++)
		delete[] a[i];
	delete[] a;
}
