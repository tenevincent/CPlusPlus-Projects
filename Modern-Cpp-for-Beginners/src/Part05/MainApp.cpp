// Part05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BaseClass.h"
#include "DerivedClass.h"
#include "myheader.h"
#include "AnotherClass.h"
#include "MyClass.h"
enum class Colors
{
	Red,
	Green,
	Blue
};

void demo_enums();
void demo_class_template();

int main()
{

	demo_class_template();

	//A::B::myfunction();
	//using namespace A::B;
	//myfunction();

	{

		char mychar = 64;
		int myint = 123;
		double mydouble = 456.789;
		bool myboolean = true;
		myint = mychar;
		mydouble = myint;
		mychar = myboolean;
	}

	{
		int myint = 123;
		double mydouble = 456.789;
		myint = mydouble; // the decimal part is lost
	}


	{
		char mychar = 64;
		int myint = 0;
		double mydouble = 3.14;
		bool myboolean = true;
		myboolean = mychar; // true
		myboolean = myint; // false
		myboolean = mydouble; // true
	}



	{
		int xx = 123;
		int* pint = &xx;
		void* pvoid = pint;
	}

	{
		int xx = 123;
		int* pint = &xx;
		void* pvoid = pint; // convert from int pointer
		int* pint2 = static_cast<int*>(pvoid); // cast a void pointer to int
		// pointer
		std::cout << *pint2; // dereference a pointer
	}

	{
		int arr[5] = { 1, 2, 3, 4, 5 };
		int* ptr = arr; // pointer to the first array element
		std::cout << *ptr;
	}

	{
		auto myinteger = static_cast<int>(123.456);
	}




	{
		BaseClass* base = new BaseClass();
		DerivedClass* derived = new DerivedClass();
		// base to derived
		auto result = static_cast <DerivedClass*>(base);
		if (result)
		{
			std::cout << "OK.\n";
		}
		else
		{
			std::cout << "Not convertible.\n";
		}

		// derived to base
		auto result_derived = dynamic_cast<AnotherClass*>(derived);
		if (result_derived)
		{
			std::cout << "OK.\n";
		}
		else
		{
			std::cout << "Not convertible.\n";
		}
		delete base;
		delete derived;

	}

	{
		int x = 123;
		int* pint = &x;
		void* pvoid = pint;
	}

	std::cout << "Hello World!\n";
}

void demo_class_template() {
	MyClass<double> o{ 123 };
	std::cout << "The value of the data member is: " << o.getx() << '\n';
	o.setx(456);
	std::cout << "The value of the data member is: " << o.getx() << '\n';
	MyClass<double> o2{ 4.25 };
	std::cout << "The value of the data member is: " << o2.getx() << '\n';
}

void demo_enums() {


	Colors mycolors = Colors::Green;
	switch (mycolors)
	{
	case Colors::Red:
		std::cout << "The color is Red." << '\n';
		break;
	case Colors::Green:
		std::cout << "The color is Green." << '\n';
		break;
	case Colors::Blue:
		std::cout << "The color is Blue." << '\n';
		break;
	default:
		break;
	}
}