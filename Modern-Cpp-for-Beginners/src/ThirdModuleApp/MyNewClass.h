#pragma once

template <typename T>
class MyNewClass
{
private:
	T x;
public:
	MyNewClass(T xx)
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
