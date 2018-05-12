#pragma once
class SimpleArray
{
public:
	int *a;
	size_t size;
	SimpleArray();
	SimpleArray(size_t);
	SimpleArray(SimpleArray & );
	~SimpleArray();
};

