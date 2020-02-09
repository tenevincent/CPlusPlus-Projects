// stringViews02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// stringView.cpp

#include <cassert>
#include <iostream>
#include <string>

#include <string_view>

void* operator new(std::size_t count) {
    std::cout << "   " << count << " bytes" << std::endl;
    return malloc(count);
}

void getString(const std::string& str) {}

void getStringView(std::string_view strView) {}

int main() {

    std::cout << std::endl;

    std::cout << "std::string" << std::endl;

    std::string large = "0123456789-123456789-123456789-123456789";
    std::string substr = large.substr(10);

    std::cout << std::endl;

    std::cout << "std::string_view" << std::endl;

    std::string_view largeStringView{ large.c_str(), large.size() };
    largeStringView.remove_prefix(10);

    assert(substr == largeStringView);

    std::cout << std::endl;

    std::cout << "getString" << std::endl;

    getString(large);
    getString("0123456789-123456789-123456789-123456789");
    const char message[] = "0123456789-123456789-123456789-123456789";
    getString(message);

    std::cout << std::endl;

    std::cout << "getStringView" << std::endl;

    getStringView(large);
    getStringView("0123456789-123456789-123456789-123456789");
    getStringView(message);

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
