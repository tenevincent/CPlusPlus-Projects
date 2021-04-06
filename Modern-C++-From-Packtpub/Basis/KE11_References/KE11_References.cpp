// KE11_References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


/*
Difficult to use and prone to errors
Also needs a null check
*/
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

//Easy to use and no null check required
void Swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}


void Print(int* ptr) {
	if (ptr)
		cout << *ptr << endl;
}

void PrintRef(int & ptr) {
	if (ptr)
		cout << ptr << endl;
}



int main()
{

	int a = 5, b = 10;
	Swap(a, b);
	cout << "a:" << a << "\n";
	cout << "b:" << b << "\n";

	Print(nullptr);
	Print(&a);

	PrintRef(a);



	//Referent
	//int x = 10;
	////Reference
	//int& ref = x;
	//int y = 20;
	//ref = y;
	//cout << "x:" << x << endl;
	//cout << "ref:" << ref << endl;


    std::cout << "Hello World!\n";

	return 0;
}

 