// ThirdModuleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "MyClass.h"
#include <map>
 

void myFunction();


using namespace std;

int main()
{

	{
		//Person person{ "John Doe." };
		//std::cout << person.getname() << '\n';
		//Student student{ "Jane Doe", 2 };
		//std::cout << student.getname() << '\n';
		//std::cout << "Semester is: " << student.getsemester() << '\n';
	}

	//for (size_t i = 0; i < 10; i++)
	//{
	//	myFunction();
	//}

	MyClass::x = 456; // access a static data member
	std::cout << "Static data member value is: " << MyClass::x << std::endl;
	MyClass::myfunction(); // call a static member function


	map<string, double> constants = { {"e", 2.7}, {"pi", 3.14} };
	if (auto res = constants.insert({ "h", 6.6e-34 }); res.second)
		cout << "inserted " << res.first->first << " mapping to " << res.first->second << endl;
	else
		cout << "entry for " << res.first->first << " already exists.\n";



}


void myFunction()
{
	static int x = 0; // defined only the first time, skipped every other
	// time
	x++;
	std::cout << x << '\n' << std::endl;
}
