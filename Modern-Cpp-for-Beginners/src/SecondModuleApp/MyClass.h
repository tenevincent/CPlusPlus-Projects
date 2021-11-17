#pragma once
#include <iostream>
class MyClass
{
private:
	int x;
	double d;
public:
	MyClass()
		: x{ 0 }, d{ 0.0 }
	{ }

	MyClass(int xx, double dd)
		: x{ xx }, d{ dd }
	{ }


	// prefix operator ++
	MyClass& operator++()
	{
		++x;
		++d;
		std::cout << "Prefix operator ++ invoked." << '\n';
		return *this;
	}

	// postfix operator ++
	MyClass operator++(int)
	{
		MyClass tmp(*this); // create a copy
		operator++(); // invoke the prefix operator overload
		std::cout << "Postfix operator ++ invoked." << '\n';
		return tmp; // return old value
	}

	MyClass& operator+=(const MyClass& rhs)
	{
		this->x += rhs.x;
		this->d += rhs.d;
		return *this;
	}
 
	friend MyClass operator+(MyClass lhs, const MyClass& rhs)
	{
		lhs += rhs;
		return lhs;
	}

	~MyClass()
	{
		std::cout << "Destructor invoked." << std::endl;
	} // destructor

};