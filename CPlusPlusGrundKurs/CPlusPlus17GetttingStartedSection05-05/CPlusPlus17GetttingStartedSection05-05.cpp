// CPlusPlus17GetttingStartedSection05-05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MyClass {
public:
	void someMethod() {

		int* ptr = new int();
		*ptr = 100;
		int result = *ptr / 0;
		delete ptr;

	}
};

int main() {

	MyClass objMyClass;
	objMyClass.someMethod();

	return 0;
}
