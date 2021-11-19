#pragma once

#include <iostream>
#include "BaseClass.h"


class DerivedClass : public BaseClass
{
public:
	void dowork() override
	{
		std::cout << "Do work from a DerivedClass." << '\n';
	}
};