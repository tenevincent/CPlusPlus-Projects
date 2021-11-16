// FourthModuleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
template <typename T>
void myfunction(T param)
{
	std::cout << "The value of a parameter is: " << param << " with the type " << typeid(param).name() << std::endl;
}

template <>
// the rest of our code
void myfunction(int arg)
{
	std::cout << "This is a specialization int. The value is: " << arg << '\n';
}



template <typename T, typename U>
void myfunction2(T t, U u)
{
	std::cout << "The first parameter is: " << t << '\n';
	std::cout << "The second parameter is: " << u << '\n';
}

template <typename T>
class MyClass {
private:
	T x;
public:
	MyClass(T xx)
		:x{ xx }
	{ }
	T getvalue()
	{
		return x;
	}
};



int main()
{
	
	//myfunction<int>(123);
	//myfunction<double>(123.456);
	//myfunction<char>('A');


	//int x = 123;
	//double d = 456.789;
	//myfunction2<int, double>(x, d);


	//MyClass<int> o{ 123 };
	//std::cout << "The value of x is: " << o.getvalue() << '\n';
	//MyClass<double> o2{ 456.789 };
	//std::cout << "The value of x is: " << o2.getvalue() << '\n';

	myfunction<char>('A');
	myfunction<double>(345.678);
	myfunction<int>(123); // invokes specialization



}

 