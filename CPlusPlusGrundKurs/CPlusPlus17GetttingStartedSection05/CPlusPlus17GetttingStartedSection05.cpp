// CPlusPlus17GetttingStartedSection05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <memory>
#include <sstream>
using namespace std;

class MyClass {
private:
	static int count;
	string name;
public:
	MyClass() {
		ostringstream stringStream(ostringstream::ate);
		stringStream << "Object";
		stringStream << ++count;
		name = stringStream.str();
		cout << "\nMyClass Default constructor - " << name << endl;
	}

	~MyClass() {
		cout << "\nMyClass destructor - " << name << endl;
	}

	MyClass(const MyClass& objectBeingCopied) {
		cout << "\nMyClass copy constructor" << endl;
	}

	MyClass& operator = (const MyClass& objectBeingAssigned) {
		cout << "\nMyClass assignment operator" << endl;
	}

	void sayHello() {
		cout << "Hello from MyClass " << name << endl;
	}

};




int MyClass::count = 0;

int main() {

	auto_ptr<MyClass> ptr1(new MyClass());
	auto_ptr<MyClass> ptr2(new MyClass());

	ptr1->sayHello();
	ptr2->sayHello();

	ptr2 = ptr1;

	// ptr1->sayHello();

	ptr2->sayHello();

	return 0;
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
