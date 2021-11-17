#pragma once
#include <iostream>
#include <string>

class TestClass
{
public:
	//MyTestObject()
	//{
	//	std::cout << "Default constructor invoked." << '\n';
	//}


	TestClass(int x = 123, int y = 456, int p = 3, std::string str = "") :
	x{x}, y{y}, ptr_value{new int {p}}, data{str}
	{
		std::cout << "Default constructor invoked. x:" << x << " y:" << y << '\n';
	}

 
	TestClass& operator=(const TestClass& rhs)
	{

		std::cout << "User defined copy assigned invoked.";

		// implement the copy logic here
		return *this;
	}

	// user defined copy constructor
	TestClass(const TestClass& rhs) : x{ rhs.x }, y{ rhs.y }, ptr_value{ new int {*rhs.ptr_value} } // initialize members with other object's // members
	{
		std::cout << "User defined copy constructor invoked.";
	}
 
	TestClass(TestClass&& rhs) // move constructor
		:
		x{ std::move(rhs.x) }, data{ std::move(rhs.data) }
	{
		std::cout << "Move constructor invoked." << '\n';
	}

	TestClass&  operator=(const TestClass&& rhs)
	{
		x = std::move(rhs.x);
		y = std::move(rhs.y);
		data = std::move(rhs.data);
		ptr_value = std::move(new int{*rhs.ptr_value });
		 
		std::cout << "Move assignment operator " << rhs.data << '\n';
		// implement the copy logic here
		return *this;
	}




private:
	int x, y;
	int* ptr_value;
	std::string data;

};