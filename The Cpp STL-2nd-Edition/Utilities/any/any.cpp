// any.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <any>

struct MyClass {};

int main() {

    std::cout << std::boolalpha;

    std::vector<std::any> anyVec{ true, 2017, std::string("test"), 3.14, MyClass() };
 

    std::cout << "std::any_cast<bool>anyVec[0]: " << std::any_cast<bool>(anyVec[0]) << std::endl;                 // true
    int myInt = std::any_cast<int>(anyVec[1]);
    std::cout << "myInt: " << myInt << std::endl;                                    // 2017

    std::cout << std::endl;
    std::cout << "anyVec[0].type().name(): " << anyVec[0].type().name();             // b
    std::cout << "anyVec[1].type().name(): " << anyVec[1].type().name();             // i

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
