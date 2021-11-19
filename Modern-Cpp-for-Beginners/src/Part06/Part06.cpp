// Part06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

#include "MyBaseClass.h"
#include "MyClass.h"
#include "MyderivedClass.h"
#include "BaseClass.h"
#include "DerivedClass.h"



void demo_try_catch_int();

void demo_try_catch_string();

void demo_try_multiple_catch();


void demo_unique_pointers();

void demo_shared_pointers();

void demo_file_io();

void demo_string_stream();


int main()
{
	//demo_try_catch_int();
	//demo_try_catch_string();
	// demo_try_multiple_catch();
	
	
	// demo_unique_pointers();
	// demo_shared_pointers();
	 
	// demo_file_io();

	demo_string_stream();

	std::cout << " \n" << std::endl;;

}

void demo_string_stream() {
	std::stringstream ss{ "Hello world." };
	std::cout << ss.str();

	std::string s = "Hello World.";
	std::stringstream ss1{ s };
	std::cout << ss1.str();

}



void demo_file_io() {
	std::string filename{ "C:\\Temp\\file.txt" };

	std::fstream filestream{ filename };
	std::string str;
	while (filestream)
	{
		std::getline(filestream, str); // read each line into a string
		std::cout << str << '\n';
	}

	std::fstream fs{ filename };
	char c;
	while (fs >> std::noskipws >> c)
	{
		std::cout << c;
	}

	std::fstream fs{ "C:\\Temp\\myoutputfile.txt", std::ios::out };
	fs << "First line of text." << '\n';
	fs << "Second line of text" << '\n';
	fs << "Third line of text" << '\n';

	// append
	std::fstream fs{ "C:\\Temp\\myoutputfile.txt", std::ios::app };
	fs << "This is appended text" << '\n';
	fs << "This is also an appended text." << '\n';

}


void demo_shared_pointers() {

	std::unique_ptr<BaseClass> p = std::make_unique<DerivedClass>();
	p->dowork();


	std::shared_ptr<MyClass> p1 = std::make_shared<MyClass>(1);
	std::shared_ptr<MyClass> p2 = p1;
	p2->setX(2);
	std::shared_ptr<MyClass> p3 = p1;
	p3->setX(3);

}

void demo_unique_pointers() {

	//std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();
	//ptr1->printmessage();

	//std::unique_ptr<int> p(new int{ 123 });
	
	std::unique_ptr<int> ptr3 = std::make_unique<int>(123);
	std::cout << "unique pointer: " << *ptr3 << std::endl;

	std::unique_ptr<MyBaseClass> ptr2 = std::make_unique<MyderivedClass>();
	ptr2->printmessage();

}

void demo_try_catch_int() {
	try
	{
		std::cout << "Let's assume some error occurred in our program." << '\n';
		std::cout << "We throw an exception of type int, for example." << '\n';
		std::cout << "This signals that something went wrong." << '\n';
		throw 123; // throw an exception if there is an error
	}
	catch (int e)
	{
		// catch and handle the exception
		std::cout << "Exception raised!." << '\n';
		std::cout << "The exception has a value of " << e << '\n';
	}

}

void demo_try_catch_string() {

	try
	{
		std::cout << "Let's assume some error occured in our program." << '\n';
		std::cout << "We throw an exception of type string, for example." << '\n';
		std::cout << "This signals that something went wrong." << '\n';
		throw std::string{ "Some string error" }; // throw an exception
		// if there is an error
	}
	catch (const std::string& e)
	{ // catch and handle the exception
		std::cout << "String exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}
}
 

void demo_try_multiple_catch() {

	try
	{
		bool someflag = true;
		bool someotherflag = true;
		std::cout << "We can have multiple throw exceptions." << '\n';
		if (someflag)
		{
			std::cout << "Throwing an int exception." << '\n';
			throw 45.5F;
		}
		if (someotherflag)
		{
			std::cout << "Throwing a string exception." << '\n';
			throw std::string{ "Some string error" };
		}
	}
	catch (int e)
	{
		// catch and handle the exception
		std::cout << "Integer exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}
	catch (const std::string& e)
	{
		// catch and handle the exception
		std::cout << "String exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}
	catch (...)
	{
		// catch and handle the exception
		std::cout << "String exception raised!." << '\n';
		std::cout << "The exception has a value of: " << "" << '\n';
	}
}



 