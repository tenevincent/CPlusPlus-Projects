// BasisCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "source.h"

int Factorial(int n) {

	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;

		 
}

int main()
{
	using namespace std;


	cout << Add(10, 5) << endl;



	int result = Factorial(5);
	cout<< "Factorial is " << result << endl;


	int i{ 0 };
	cout << "value of i " << i << endl;

	int *iPtr = nullptr;
	cout << "value of iPtr " << iPtr << endl;

	float f = 13.44F;
	bool isVisible = true;

	int arr[10] {0,1,2,3,4,5,5};
	cout << arr << endl;
	for (auto elem : arr)
	{
		cout << elem << " ";
	}
		
	cout << " hello " << 22.F << 45.4 << true << endl;

	cout << "Hello World! " << " new " << endl;


	char buff[512];
	cout << "What is your name?: ";
	/*
	There's a better way to do it. Check the
	lecture on std::strings if you're curious :)
	*/
	cin.getline(buff, 64, '\n');
	cout << "Your name is:" << buff << endl;

	int age;
	cout << "Enter your age: " << endl;
	cin >> age;
 
	cout << "Your age is " << age << endl;


	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
