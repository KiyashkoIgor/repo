#include "Example.h"
#include <iostream>
using namespace std;

Example::Example()
{
	std::cout << "1";
}

Example::Example(Example & clone)
{
	this->x = clone.x;
}

Example::Example(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}


int Example::Sum( int  x)
{
	return this->x + x;
}


Example::~Example()
{
	std::cout << "2";
}
