// Part07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <memory>


int main()
{
	//std::vector<int> vec = { 1, 2, 3, 4, 5 };
	//for (auto it = vec.begin(); it != vec.end(); it++)
	//{
	//	std::cout << *it << '\n';
	//}


	//std::cout << "-------------------------------------------" << '\n';
	//for (auto elem : vec)
	//{
	//	std::cout << elem << '\n';
	//}

	//std::fstream fs{ "myoutputfile.txt", std::ios::app };
	//fs << "This is appended text" << '\n';
	//fs << "This is also an appended text." << '\n';

	{
		//int x = 123;
		auto mylambda = [](int x) { std::cout << "The value of x is: " << ++x << std::endl; };
		mylambda(34);
	}


	{
		auto mylambda = [](int x, int y)
		{
			std::cout << "The value of x is: " << x << ", y is: " << y << std::endl;
		};
		mylambda(123, 456);
	}

	std::map<int, char> mymap;
	mymap[1] = 'a';
	mymap[2] = 'b';
	mymap[3] = 'z';


	for (auto el : mymap)
	{
		std::cout << el.first << ':' << el.second << '\n'  << std::endl;
	}

	{

		std::cout << "Before....................................." << '\n';
		std::vector<int> v = { 1, 2, 3, 4, 5 };
		v.push_back(10);
		for (int& el : v)
		{
			++el;
			//std::cout << ++el << '\n';
		}
		std::cout << "after....................................." << '\n';
		for (int& el : v)
		{
			std::cout << el << '\n';
		}
	}
	std::cout << "....................................." << '\n';


	{ 
		std::vector<std::string> v = { "Hello", "World,", "C++" };
		v.push_back("Is great!");
		for (const auto& el : v)
		{ 
			std::cout << el << '\n';
		}

		int answer, value1 = 3, value2 = 1;

		answer = value1 >= value2;
		std::cout << "Comparison is " << answer << '\n';

		int byte = 255;
		std::cout << "Byte in hex: " << std::hex << byte << std::endl;

	}

	{
		std::unique_ptr<int> up1 = std::make_unique<int>(150);
		//std::unique_ptr<int> up2 = up1; // ERROR
		
		if (up1) {
			std::cout << "up1: " << std::dec << *up1 << " " << std::endl;
		}
		
		std::unique_ptr<int> up3 = std::move(up1); // OK
		if (up3) {
			std::cout << "up3: " << std::dec << *up3 << " " << std::endl;
		}
	}

}

 