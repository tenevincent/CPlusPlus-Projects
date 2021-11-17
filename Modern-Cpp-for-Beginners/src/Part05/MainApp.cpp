// Part05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BaseClass.h"
#include "DerivedClass.h"
#include "myheader.h"
#include "AnotherClass.h"

int main()
{

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


	std::cout << "Hello World!\n";
}
