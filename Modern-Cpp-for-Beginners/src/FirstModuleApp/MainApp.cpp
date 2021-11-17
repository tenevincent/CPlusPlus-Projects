// FirstModuleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void while_demo();

void switch_demo();
void demo();

class A {
public : 
	int a;
};

void myfunction(int& byreference);


int main()
{

	//while_demo();
	//switch_demo();

	int ref = 4;
	std::cout << "Before passed by reference: " << ref << std::endl;
	myfunction(ref);
	std::cout << "After passed by reference: " << ref << std::endl;
}


void myfunction(int& byreference)
{
	byreference++; // we can modify the value of the argument
	std::cout << "Inside passed by reference: " << byreference << std::endl;;
}



void switch_demo() {
	int x = 3;
	A a{ 2 };
	switch (x)
	{
	case 1:
		std::cout << "The value is equal to 1." << '\n';
		break;
	case 2:
		std::cout << "The value is equal to 2." << '\n';
		break;
	case 3:
		std::cout << "The value is equal to 3." << '\n';
		break;
	case 4:
		std::cout << "The value is equal to 4." << '\n';
		break;
	default:
		std::cout << "The value is not inside the [1..4] range." << '\n';
		break;
	}
}



	void while_demo(void) {
		int x = 0;
		while (x < 10) {
			std::cout << "The value of x is: " << x << '\n';
			x++;
		}


		x = 0;
		do
		{
			std::cout << "The value of x is: " << x << '\n';
			x++;
		} while (x < 10);

	}


	void demo() {

		std::cout << "Some string." << " Another string.";
		std::cout << "First line\nSecond line.";
		bool b = true;
		std::cout << b;
		char c = 'a';
		std::cout << "The value of variable c is: " << c;

		std::cout << "The size of type char is: " << sizeof(char) << " byte(s)";

		int x = 10; // decimal literal
		int y = 012; // octal literal
		int z = 0xA; // hexadecimal literal

		double d = 3.14;
		std::cout << "The value of d is: " << d;


		 x = 123;
		 y = { 123 };
		 z = { 123 };

		std::cout << x;



		char mychar{ 'a' };
		int myint{ 123 };
		double mydouble{ 456.78 };
		std::cout << "The value of a char variable is: " << mychar << '\n';
		std::cout << "The value of an int variable is: " << myint << '\n';
		std::cout << "The value of a double variable is: " << mydouble << '\n';

		int arr[5] = { 10, 20, 30, 40, 50 };
		int size = sizeof(arr) / arr[0];
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "The current value is " << arr[i] << std::endl;
		}


		bool mycondition = true;
		x = 0;
		if (nullptr)
		{
			x = 1;
		}
		else
		{
			x = 0;
		}
		std::cout << "The value of x is: " << x << '\n';

	}
 
