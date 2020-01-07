// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <limits>
#include <memory>

#include "chapter04.h"
#include "Entity.h"
#include "Drawer.h"


using namespace chapter04;
using namespace std;

void chapter02();
void chapter03();

void SmartPointersDemos();

class LargeObject
{
public:
	void DoSomething() {
		std::cout << "LargeObject is doing something..." << std::endl;
	}

	LargeObject()
	{
		std::cout << "LargeObject Created!" << std::endl;
	}

	~LargeObject()
	{
		std::cout << "LargeObject Destroyed!" << std::endl;
	}

};

void ProcessLargeObject(const LargeObject& lo) {}


void 	SmartPointerDemo();


int main()
{


	{

		{
			unique_ptr<Drawer> drawer = make_unique<Drawer>();
			drawer->Draw();

		}
	}


	//int data(3);
	//int data01{ 1 };


	//cout << data << endl;
	//cout << data01 << endl;


	//SmartPointerDemo();


 // SmartPointersDemos();



	// listing08();



	//  chapter02();


	// chapter03();




	//system("PAUSE");
}


void SmartPointersDemos()
{
	// 
	{
		unique_ptr<Entity> entity = make_unique<Entity>();
		entity->Print();
		int counter = entity->count;
	}

	{
		shared_ptr<Entity> shrPtr02;
		{
			shared_ptr<Entity> sharedPtr = make_shared <Entity>();
			sharedPtr->Print();
			shrPtr02 = sharedPtr;
			shrPtr02->Print();
		}
		std::cout << "The entered number is: " << "out" << std::endl;
	}



	{
		weak_ptr<Entity> shrPtr02;
		{
			shared_ptr<Entity> sharedPtr = make_shared <Entity>();
			sharedPtr->Print();
			shrPtr02 = sharedPtr;

			std::cout << "Is expired " << shrPtr02.expired() << std::endl;
		}
		std::cout << "Is expired " << shrPtr02.expired() << std::endl;
	}
}


void SmartPointerDemo()
{
	// Create the object and pass it to a smart pointer
	std::unique_ptr<LargeObject> pLarge(new LargeObject());

	//Call a method on the object
	pLarge->DoSomething();

	// Pass a reference to a method.
	ProcessLargeObject(*pLarge);

} //pLarge is deleted automatically when function block goes out of scope.



void chapter03() {


	//{
	//	// Listing 01
	//	int ivar{ 12345 }; // Initialisierung nach C++11-Stil
	//	std::cout << "The entered number is: " << ivar << std::endl;
	//	char ch1 = 'A';
	//	char ch2 = 'B';
	//	char ch3 = 67;  //laut ASCII-Tabelle 'C'
	//	char ch4 = 68;  //laut ASCII-Tabelle 'D'
	//	std::cout << ch1 << ch2 << ch3 << ch4 << std::endl;
	//}
	// 

	//{
	//	// Listing 02
	//	char ch1 = 'A';
	//	char ch2 = 'B';
	//	char ch3 = '\n';
	//	std::cout << ch1 << '\t' << ch2 << ch3;
	//	std::cout << 'C' << '\t' << 'D' << ch3;
	//}


	//{

	//	// Listing 03
	//	char16_t c16val{ u'Ω' }; // (mind.) 16 Bit breites Zeichen
	//	char32_t c32val{ U'Ω' }; // (mind.) 32 Bit breites Zeichen
	//	std::cout << sizeof(c16val) << "uΩ: " << c16val << std::endl;
	//	std::cout << sizeof(c32val) << "UΩ: " << c32val << std::endl;
	//	std::cout << u8"\u00a9 J\u00fcrgen Wolf" << std::endl;
	//}



	//{

	//	// Listing 04
	//	wchar_t wcval = { L'A' };
	//	std::wcout << wcval << std::endl;
	//	std::cout << "Bitte ein Zeichen: ";
	//	std::wcin >> wcval;
	//	std::wcout << wcval << std::endl;
	//	std::wcout << "Ihr Zeichen : " << wcval << std::endl;
	//	std::wcout << "Länge eines Zeichens : " << sizeof(wcval) << std::endl;

	//}




	//{
	//// Listing 07
	//auto aval1 = 1234;    // = int
	//auto aval2 = 1234L;   // = long int
	//auto aval3 = 12.34;   // = double
	//auto aval4 = 12.34F;  // = float
	//auto aval5 = 'A';     // = char
	//auto aval6 = u'A';    // = char16_t

	//std::cout << aval1 << '\n';
	//std::cout << aval2 << '\n';
	//std::cout << aval3 << '\n';
	//std::cout << aval4 << '\n';
	//std::cout << aval5 << '\n';
	//std::cout << aval6 << std::endl;
	//}
	//


	// Listing 06
	std::cout << "sizeof(char) : " << sizeof(char) << '\n';  // = immer 1 Byte
	std::cout << "sizeof(wchar_t): " << sizeof(wchar_t) << '\n';
	std::cout << "sizeof(int): " << sizeof(int) << '\n';
	std::cout << "sizeof(double): " << sizeof(double) << '\n';
	std::cout << "sizeof(long double): " << sizeof(long double) << std::endl;

	// listing 05
	std::cout << "numeric_limits<int>::min() : " << std::numeric_limits<int>::min() << '\n';
	std::cout << "numeric_limits<int>::max() : " << std::numeric_limits<int>::max() << '\n';
	std::cout << "numeric_limits<int>::digits : " << std::numeric_limits<int>::digits << '\n';
	std::cout << "numeric_limits<int>::is_signed  : " << std::numeric_limits<int>::is_signed << '\n';
	std::cout << "numeric_limits<float>::digits10 : " << std::numeric_limits<float>::digits10 << '\n';
	std::cout << "numeric_limits<double>::digits10 : " << std::numeric_limits<double>::digits10
		<< '\n';
	std::cout << std::numeric_limits<long double>::digits10
		<< '\n';
	std::cout << std::numeric_limits<char>::digits << '\n';
	std::cout << std::numeric_limits<unsigned char>::digits
		<< std::endl;


	return;





}

void chapter02() {
	int ival = 0;
	cout << "Bitte einen Wert eingeben: ";
	cin >> ival;
	cout << "Die Eingabe lautete: " << ival;






	std::cout << "Mein erstes Programm" << std::endl;

	std::cout << "Hello World!\n";

	std::cout << "I like programming" << std::endl;
	std::cout << "Ein Monster mit " << "zwei Zeilen" << std::endl;

	ival = 0; // in C++11 besser: int ival{0};
	std::cout << "Bitte eine Ganzzahl: ";
	std::cin >> ival;
	std::cout << "Sie gaben die Zahl " << ival
		<< " ein" << std::endl;
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
