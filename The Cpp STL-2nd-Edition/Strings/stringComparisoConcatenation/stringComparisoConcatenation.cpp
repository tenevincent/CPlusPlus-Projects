// stringComparisoConcatenation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main() {

    std::cout << std::boolalpha << std::endl;

    std::string first{ "aaa" };
    std::string second{ "aaaa" };

    std::cout << "first <  first :" << (first < first) << std::endl;
    std::cout << "first <=  first :" << (first <= first) << std::endl;
    std::cout << "first <  second :" << (first < second) << std::endl;

    std::cout << std::endl;

    std::string one{ "1" };
    std::string oneOneOne = one + std::string("1") + "1";

    std::cout << "1 + 1 + 1: " << oneOneOne << std::endl;

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
