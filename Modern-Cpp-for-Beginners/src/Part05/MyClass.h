#pragma once
#include <iostream>
template <typename T>
class MyClass
{
private:
	T x;
public:
	MyClass(T xx)
		: x{ xx }
	{}
	T getx() const
	{
		return x;
	}
	void setx(T ax)
	{
		x = ax;
	}
};