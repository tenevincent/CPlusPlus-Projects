#pragma once

#include "MyBaseClass.h"


class MyderivedClass : public MyBaseClass
{
public:
	~MyderivedClass() {
		std::cout << "MyderivedClass destructor is called " << std::endl;
	}

	void printmessage()
	{
		std::cout << "Hello from a derived class." << std::endl;
	}
};