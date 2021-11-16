#include "MyClass.h"


int MyClass::x = 123; // define a static data member


// define a static member function
void MyClass::myfunction()
{
	std::cout << "Hello World from a static member function." << std::endl;
}