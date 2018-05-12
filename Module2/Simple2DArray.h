#pragma once
#include <iostream>
class Simple2DArray
{
public:
	int **a = nullptr;
	size_t n, m;
	Simple2DArray(size_t, size_t);
	Simple2DArray(Simple2DArray &);
	~Simple2DArray();
};

