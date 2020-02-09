// stringNumericConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include <string>

int main() {


    std::string str1 = "45";
    std::string str2 = "3.14159";
    std::string str3 = "31337 with words";
    std::string str4 = "34 words and 2";

    int myint1 = std::stoi(str1);
    int myint2 = std::stoi(str2);
    int myint3 = std::stoi(str3);
    // error: 'std::invalid_argument'
     int myint4 = std::stoi(str4);

    std::cout << "std::stoi(\"" << str1 << "\") is " << myint1 << '\n';
    std::cout << "std::stoi(\"" << str2 << "\") is " << myint2 << '\n';
    std::cout << "std::stoi(\"" << str3 << "\") is " << myint3 << '\n';
    std::cout << "std::stoi(\"" << str4 << "\") is " << myint4 << '\n';



    std::cout << std::endl;

    std::cout << "to_string, to_wstring" << std::endl;

    std::string maxLongLongString = std::to_string(std::numeric_limits<long long>::max());
    std::wstring maxLongLongWstring = std::to_wstring(std::numeric_limits<long long>::max());

    std::cout << std::numeric_limits<long long>::max() << std::endl;
    std::cout << maxLongLongString << std::endl;
    std::wcout << maxLongLongWstring << std::endl;

    std::cout << std::endl;

    std::cout << "ato* " << std::endl;

    std::string str("10010101");

    std::cout << std::stoi(str) << std::endl;
    std::cout << std::stoi(str, nullptr, 16) << std::endl;
    std::cout << std::stoi(str, nullptr, 8) << std::endl;
    std::cout << std::stoi(str, nullptr, 2) << std::endl;

    std::cout << std::endl;

    std::size_t idx;
    std::cout << std::stod("   3.5 km", &idx) << std::endl;
    std::cout << "Not numeric char at position " << idx << "." << std::endl;

    std::cout << std::endl;

    try {
        std::cout << std::stoi("   3.5 km") << std::endl;
        std::cout << std::stoi("   3.5 km", nullptr, 2) << std::endl;

    }
    catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

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
