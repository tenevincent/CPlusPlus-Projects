#pragma once
#include <iostream>

class MyClass {

private:
	int x;

public:
	
	void setX(int x) {
		this->x = x;
	}

	MyClass(int x): x{x} {

	}

	~MyClass() {
		std::cout << "MyClass descriptor is called " << x << " " << std::endl;
	}

	void printmessage()
	{
		std::cout << "Hello from a class." << std::endl;
	}
};
