// KE10_Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	cout << x << " reference " << &x << "\n";

	void* ptrv = &x;
	cout <<"void pointer address " << ptrv << "\n";

	//Always try to initialize pointers to nullptr
	int* ptr{ nullptr };
	ptr = &x;

	cout << *ptr << "\n";
	*ptr = 5;

    std::cout << "Hello World!\n";

	return 0;
}
 