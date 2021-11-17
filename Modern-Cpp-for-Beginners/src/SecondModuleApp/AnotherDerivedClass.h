#pragma once

#include <iostream>
#include "AbstractClass.h"
class AnotherDerivedClass : public AbstractClass
{

public:
	void dowork()
	{
		std::cout << "Hello from a derived class." << '\n';
	}

};

