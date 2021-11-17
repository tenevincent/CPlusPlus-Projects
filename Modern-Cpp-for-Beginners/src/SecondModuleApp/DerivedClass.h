#pragma once
#include "BaseClass.h"
 

class DerivedClass : public BaseClass
{
public:
	double d;

public:
	void dowork()
	{
		std::cout << "Hello from a derived class." << '\n';
	}


};

