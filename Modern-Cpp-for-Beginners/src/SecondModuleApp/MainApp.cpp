// SecondModuleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyClass.h"
#include "TestClass.h"
#include "DerivedClass.h"
#include "AnotherDerivedClass.h"
#include "AbstractClass.h"


void demo_array();


int main()
{

	// MyClass o; // invoke a default constructor
	//MyTestObject o{ 1, 2 }; // invoke a user-defined constructor
	//std::cout << o.x << ' ' << o.y;
	//MyTestObject o1{ 1, 2 };
	//MyTestObject o2 = o1; // default copy constructor invoked


	{
		/*TestClass o1{ 1, 2 };
		TestClass o2 = o1;*/ // user defined copy constructor invoked
	}

	{
	//	TestClass copyfrom;
		//TestClass copyto;
		//copyto = copyfrom; // uses a copy assignment operator
	//	TestClass copyto = copyfrom; // uses a copy assignment operator
	}

	//{
	//	TestClass o1{ 1, 2,4, "Some string value" };
	//	TestClass o2 = std::move(o1);
	//}

	{
		//TestClass o1{ 1, 2,50, "This is currently in object 1." };
		//TestClass o2{ 1, 2,45, "This is currently in object 2." };
		//o2 = std::move(o1); // move assignment operator invoked
	}

	//{
	//	MyClass myobject;
	//	// prefix operator
	//	++myobject;
	//	// the same as:
	//	myobject.operator++();
	//}

	//{
	//	MyClass myobject;
	//	// postfix operator
	//	myobject++;
	//	// is the same as if we had:
	//	myobject.operator++(0);
	//}

	//{
	//	MyClass myobject{ 1, 1.0 };
	//	MyClass mysecondobject{ 2, 2.0 };
	//	myobject += mysecondobject;
	//	std::cout << "Used the overloaded += operator.";
	//}

	//{
	//	float value = 45;
	//	MyClass myobject{ 1, 1.0 };
	//	MyClass mysecondobject{ 2, 2.0 };
	//	MyClass myresult = myobject + mysecondobject;
	//	std::cout << "Used the overloaded + operator." << std::endl;
	//}

	//{
	//	DerivedClass o;
	//	o.c = 'a';
	//	o.x = 123;
	//	o.d = 456.789;
	//}


	{
		BaseClass* ptr_object = new DerivedClass();
		ptr_object->dowork();
		delete ptr_object;
	}

	{
		AbstractClass* o = new AnotherDerivedClass();
		o->dowork();
		delete o;
	}

	std::cout << "End of the program!" << std::endl;
}


void demo_array() {

	auto c = 'a'; // char type
	auto x = 123; // int type

	std::cout << c << std::endl;
	{
		double arr[5] = { 1.23, 2.45, 8.52, 6.3, 10.15 };
		arr[0] = 2.56;
		arr[4] = 3.14;
		std::cout << "The first array element is: " << arr[0] << '\n';
		std::cout << "The last array element is: " << arr[4] << '\n';

		double d = 3.14;
		double* ptr = &d;
		std::cout << "The value of the pointed-to object is: " << *ptr;
	}

	{
		double* p = new double();
		*p = 123;
		std::cout << "The pointed-to value is: " << *p;
		delete p;
	}


	{
		const int n = 5;
		int arr[n] = { 10, 20, 30, 40, 50 };
	}


	{
		int* p = new int[3];
		p[0] = 1;
		p[1] = 2;
		p[2] = 3;
		std::cout << "The values are: " << p[0] << ' ' << p[1] << ' ' << p[2];
		delete[] p;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
