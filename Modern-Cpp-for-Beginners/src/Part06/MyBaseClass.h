#pragma once
#include <iostream>

class MyBaseClass {

public:

	~MyBaseClass() {
		std::cout << "MyBaseClass destructor " << std::endl;
	}

	void printmessage()
	{
		std::cout << "Hello from a class." << std::endl;
	}
};
