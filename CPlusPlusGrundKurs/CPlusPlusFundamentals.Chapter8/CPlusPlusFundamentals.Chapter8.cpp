// CPlusPlusFundamentals.Chapter8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DisplayListing10.h"
#include "DisplayListing15.h"

using namespace std;

// Funktions-Prototyp mit Standardparametern
void MyFunc(int par1 = 0, int par2 = 0, int par3 = 0);
int ival = 789;
int addieren(int&, int&);
void cbreference(int&);

void ShowDisplayListing10();

void ShowDisplayListing11();

void ShowListing011();

void DisplayListing12();

void ShowDisplay015();

int main()
{

	//int ival = 123;
	//std::cout << ival << '\n';    // 123
	//std::cout << ::ival << '\n';  // 789


	//int ival1 = 0, ival2 = 0;
	//int sum = addieren(ival1, ival2);
	//std::cout << "Die Summe lautet: " << sum << std::endl;


	//// Funktion ohne Argument aufrufen
	//MyFunc();
	//// Funktion mit einem Argument aufrufen
	//MyFunc(1);
	//// Funktion mit zwei Argumenten aufrufen
	//MyFunc(1, 1);
	//// Funktion mit drei Argumenten aufrufen
	//MyFunc(1, 1, 1);


	// cbreference(ival);
	// std::cout << "main()        : " << &ival << "/" << ival << '\n';
	// std::cout << "Hello World!\n";


	// ShowDisplayListing10();

	// ShowDisplayListing11();

	// ShowListing011();
	// DisplayListing12();
	ShowDisplay015();


	int iarray[] = { 11, 22, 33,1,34,4,5,6,7,7,5,35,6,7,8,5,5 };
	DisplayListing15 display;
	int size = sizeof(iarray) / sizeof(iarray[0]);
	display.callarray(iarray, size);


}

void ShowDisplay015()
{

	std::vector<int> vec;

	for (size_t ii = 0; ii < 5; ii++)
	{
		vec.push_back(ii+1);
	}


	DisplayListing15 display;
	display.init_vector(vec);

	vec.push_back(45);

	display.print_vector(vec);
}


void DisplayListing12()
{
	int* iptr = 0L, wert = 0;
	DisplayListing10 display;
	for (size_t i = 0; i < 10; i++)
	{
		++display.test_referenz();
		iptr = &display.test_referenz();
		cout << "wert: " << i << ": " << *iptr << '\n';
	}


	
	// Wert von "iwert" an "wert" zuweisen

	wert = display.test_referenz();
	// "iptr" auf "iwert" zeigen lassen
	iptr = &display.test_referenz();

	cout << "iptr : " << *iptr << '\n';
	cout << "wert : " << wert << '\n';
	// ... entspricht ++iwert
	++display.test_referenz();
	cout << "iptr : " << *iptr << '\n';
	cout << "wert : " << wert << '\n';
	// iwert verdoppeln
	display.test_referenz() = display.test_referenz() * 2;
	cout << "iptr : " << *iptr << '\n';
	cout << "wert : " << wert << '\n';


}

void ShowListing011()
{

	int iwert1 = 123, iwert2 = 456;

	cout << "Call-by-Reference-Nachbildung: " << endl;

	DisplayListing10 display;
	display.byReference(iwert1, iwert2);
	cout << iwert1 << ' ' << iwert2 << endl;
}


void ShowDisplayListing11()
{
	DisplayListing10 display;
	int ival1 = 10;
	int sum = display.addieren(ival1 + 5, 50);
	std::cout << "Die Summe lautet: " << sum << std::endl;
}



void ShowDisplayListing10()
{
	DisplayListing10 display;
	int iwert1 = 123, iwert2 = 456;
	cout << "call by value:\t wert1: " << &iwert1 << " wert2: " << &iwert2 <<endl ;
	display.byValue(iwert1, iwert2);
	cout << iwert1 << ' ' << iwert2 << "\n\n";

	cout << "call by pointer:\n";
	cout << "call by pointer before:\t wert1: " << &iwert1 << " wert2: " << &iwert2 << endl;
	display.byReference(&iwert1, &iwert2);
	cout << iwert1 << ' ' << iwert2 << "\n\n";
	cout << "call by pointer before:\t wert1: " << &iwert1 << " wert2: " << &iwert2 << endl;
}


void cbreference(int& val1) {
	std::cout << "cbreference() : " << &val1 << "/" << val1 << '\n';
	val1 = 54321;
}



int addieren(int& val1, int& val2) {
	return val1 + val2;
}



void MyFunc(int par1, int par2, int par3) {
	std::cout << "(par1/par2/par3) = "
		<< par1 << ' ' << par2 << ' '
		<< par3 << ' ' << '\n';
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
