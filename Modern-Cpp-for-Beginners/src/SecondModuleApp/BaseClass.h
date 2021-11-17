#pragma 
#include <iostream>
class BaseClass
{

public:	
	char c;
	int x;

public:
	virtual void dowork()
	{
		std::cout << "Hello from a base class." << '\n';
	}

};

