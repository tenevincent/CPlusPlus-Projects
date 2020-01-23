// CPlusPlus17GetttingStartedSection05-03.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	MyClass getObject() {

		MyClass myObj;
		return myObj;
	}

};

int MyClass::count = 0;

void displayObject(MyClass obj) {
	cout << "Hello from MyClass " << "" << endl;
	obj.sayHello();
}

int main() {


	{
		shared_ptr<MyClass> ptr1(new MyClass());
		ptr1->sayHello();
		cout << "\nUse count is " << ptr1.use_count() << endl;

		displayObject(*ptr1);

		auto newObject = ptr1->getObject();


		{
			shared_ptr<MyClass> ptr2 = ptr1;
			ptr2->sayHello();
			cout << "\nUse count is " << ptr2.use_count() << endl;
		}

		shared_ptr<MyClass> ptr3 = ptr1;
		ptr3->sayHello();
		cout << "\nUse count is " << ptr3.use_count() << endl;
	}

	return 0;
}
