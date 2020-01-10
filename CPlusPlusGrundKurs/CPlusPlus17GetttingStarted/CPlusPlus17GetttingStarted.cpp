// CPlusPlus17GetttingStarted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <type_traits>

#include "Section01.h"
using namespace std;

namespace org::tektutor::application::internals {
	int data;
}




void     showCppListInitializer();

void showAssertion();


void globalFunction() {
	using namespace std;
	cout << "globalFunction ..." << endl;
}

class MyClass {
public:

	static inline int count = 0;

	void printCount() {
		cout << "\nCount value is " << count << endl;
	}


	void memberFunction(int data) {
		std::cout << "\nMyClass memberFunction ..." << std::endl;
	}

	static void staticFunction(int data) {
		std::cout << "MyClass staticFunction ..." << std::endl;
	}
};


void executeStandardInvokeMethod();

void StructuredBinding();

using namespace std;

bool isGoodToProceed() {
	return true;
}

bool isGood() {
	return true;
}

void functionWithSwitchStatement() {

	switch (auto status = isGood()) {
	case true:
		cout << "\nAll good!" << endl;
		break;

	case false:
		cout << "\nSomething gone bad" << endl;
		break;
	}

}







int main()
{


	MyClass obj;

	obj.printCount();



	StructuredBinding();



	executeStandardInvokeMethod();


	Section01 section;
	section.ShowCppFeatures();


	showAssertion();


	showCppListInitializer();


	if (auto flag = isGoodToProceed()) {
		cout << "flag is a local variable and it loses its scope outside the if block" << endl;

		std::cout << "The flag value is: " << flag << endl;
	}



	functionWithSwitchStatement();




	std::cout << "Hello World!\n";
}

void StructuredBinding()
{
	using namespace std;
	tuple<string, int, string> student("Sriram", 10, "vincent");
	auto [name, age, firstname] = student;

	cout << "\nName of the student is " << name << endl;
	cout << "Age of the student is " << age << endl;
	cout << "Age of the student is " << firstname << endl;
}


void executeStandardInvokeMethod() {
	MyClass obj;

	std::invoke(&MyClass::memberFunction, obj, 100);
	std::invoke(&MyClass::staticFunction, 200);
	std::invoke(globalFunction);

}

void showAssertion() {

	using namespace std;

	Section01 section;
	Section01 section02;

	const int x = 5, y = 5;

	static_assert (1 == 1, "Assertion failed");
	static_assert (1 == 1, "should failed");
	static_assert (x == y, "should success");

	// static_assert (section == section, "should success");

}

void showCppListInitializer() {

	using namespace std;

	// std::initializer_list<int>
	auto intInitializerValues = { 1, 2, 3, 4, 5 };

	// std::initializer_list<double>
	auto doubleInitializerValues = { 1.5, 2.5, 3.5 };

	// auto t = { 1.0, 1, 2.0f };

	vector<int> vectorOfIntegers = intInitializerValues;
	vector<double> vectorOfDoubles = doubleInitializerValues;

	cout << "\nValues in integer vectors are ..." << endl;
	std::copy(vectorOfIntegers.begin(), vectorOfIntegers.end(),
		ostream_iterator<int>(cout, "\t"));
	cout << endl;

	cout << "\nValues in double vectors are ..." << endl;
	copy(vectorOfDoubles.begin(), vectorOfDoubles.end(),
		ostream_iterator<double>(cout, "\t"));
	cout << endl;

}