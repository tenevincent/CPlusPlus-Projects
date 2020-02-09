// stringAccess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

int main() {

    std::cout << std::endl;

    std::string str = { "0123456789" };
    std::cout << "str.front(): " << str.front() << std::endl;
    std::cout << "str.back(): " << str.back() << std::endl;

    std::cout << std::endl;

    for (int i = 0; i <= 10; ++i) {
        std::cout << "str[" << i << "]: " << str[i] << std::endl;
    }

    std::cout << std::endl;

    try {
        str.at(10);
    }
    catch (const std::out_of_range & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "*(&str[0]+5): " << *(&str[0] + 5) << std::endl;
    std::cout << "*(&str[5]): " << *(&str[5]) << std::endl;
    std::cout << "str[5] : " << str[5] << std::endl;

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
