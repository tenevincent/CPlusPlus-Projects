// Stl_Overview_Of_Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>

using namespace std;
#define SIZE_ARRAY 20

int main()
{

    
    array<int, SIZE_ARRAY> odd_numbers = { 2, 4, 6, 8,10,12,14,16,18 };
     
    odd_numbers[18] = 20;
    odd_numbers[19] = 22;

    for (auto var : odd_numbers)
    {
        std::cout << var << " ";
    }


    std::cout << std::endl;
    array<int, SIZE_ARRAY>::iterator it;
    auto itBeginn = odd_numbers.begin();
    auto itEnd = odd_numbers.end();

    for(it = itBeginn; it < itEnd; it++)
    {
        std::cout << *it << " ";
    }


    // Accessing the array...
    std::cout << odd_numbers.at(2);     // prints 3
    std::cout << odd_numbers.at(4);    // prints 5


    std::cout << std::endl;
    std::cout << "Hello World!\n";
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
