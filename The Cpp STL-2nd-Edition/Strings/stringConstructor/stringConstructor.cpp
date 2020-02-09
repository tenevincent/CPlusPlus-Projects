// stringConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <utility>

int main() {

    std::cout << std::endl;

    std::string defaultString;

    std::cout << "From C-String" << std::endl;

    std::string other{ "123456789" };
    std::cout << "other: " << other << std::endl;

    std::cout << std::endl;

    std::cout << "From C++-string" << std::endl;

    std::string str1(other);
    std::string tmp(other);
    std::string str2(std::move(tmp));
    std::string str3(other.begin(), other.end());
    std::string str4(other, 2);
    std::string str5(other, 2, 5);

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str3: " << str3 << std::endl;
    std::cout << "str4: " << str4 << std::endl;
    std::cout << "str5: " << str5 << std::endl;

    std::cout << std::endl;

    std::cout << "From C-String" << std::endl;

    std::string str6("123456789", 5);
    std::string str7(5, '1');
    std::string str8({ '1', '2', '3', '4', '5', '6', '7', '8', '9' });

    std::cout << "str6: " << str6 << std::endl;
    std::cout << "str7: " << str7 << std::endl;
    std::cout << "str8: " << str8 << std::endl;

    std::cout << std::endl;

    std::cout << "As Part of a C++-String" << std::endl;
    std::cout << "str6.substr(): " << str6.substr() << std::endl;
    std::cout << "str6.substr(1): " << str6.substr(1) << std::endl;
    std::cout << "str6.substr(1, 2): " << str6.substr(1, 2) << std::endl;




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
