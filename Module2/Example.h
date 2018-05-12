#include <iostream>
#pragma once
class Example
{
public:
	int x, y, z;
	Example();
	Example(Example & clone);//создаем клона
	Example(int, int, int);
	int Sum(int);
	~Example();
};

