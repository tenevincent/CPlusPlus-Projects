// stringModification.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main() {

    std::cout << std::endl;

    std::cout << "ASSIGN: " << std::endl;

    std::string str{ "New String" };
    std::string str2{ "Other String" };
    std::cout << "str: " << str << std::endl;

    str.assign(str2, 4, std::string::npos);
    std::cout << str << std::endl;

    str.assign(5, '-');
    std::cout << str << std::endl;
    std::cout << std::endl;

    std::cout << "DELETE" << std::endl;

    str = { "0123456789" };
    std::cout << "str: " << str << std::endl;
    str.erase(7, 2);
    std::cout << str << std::endl;

    str.erase(str.begin() + 2, str.end() - 2);
    std::cout << str << std::endl;

    str.erase(str.begin() + 2, str.end());
    std::cout << str << std::endl;

    str.pop_back();
    std::cout << str << std::endl;

    str.erase();
    std::cout << str << std::endl;

    std::cout << "APPEND" << std::endl;

    str = "01234";
    std::cout << "str: " << str << std::endl;

    str += "56";
    std::cout << str << std::endl;

    str += '7';
    std::cout << str << std::endl;

    str += {'8', '9'};
    std::cout << str << std::endl;

    str.append(str);
    std::cout << str << std::endl;

    str.append(str, 2, 4);
    std::cout << str << std::endl;

    str.append(10, '0');
    std::cout << str << std::endl;

    str.append(str, 10, 10);
    std::cout << str << std::endl;

    str.push_back('9');
    std::cout << str << std::endl;

    std::cout << std::endl;

    std::cout << "INSERT" << std::endl;
    str = { "345" };
    std::cout << "str: " << str << std::endl;

    str.insert(3, "6789");
    std::cout << str << std::endl;

    str.insert(0, "012");
    std::cout << str << std::endl;

    std::cout << std::endl;

    std::cout << "REPLACE" << std::endl;
    str = { "only for testing purpose." };
    std::cout << "str: " << str << std::endl;

    str.replace(0, 0, "O");
    std::cout << str << std::endl;

    str.replace(0, 5, "Only", 0, 4);
    std::cout << str << std::endl;

    str.replace(16, 8, "");
    std::cout << str << std::endl;

    str.replace(4, 0, 5, 'y');
    std::cout << str << std::endl;

    str.replace(str.begin(), str.end(), "Only for testing purpose.");
    std::cout << str << std::endl;

    str.replace(str.begin() + 4, str.end() - 8, 10, '#');
    std::cout << str << std::endl;

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
