// vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <vector>

int main() {

    std::cout << std::endl;

    std::vector<int> intVec1(5, 2011);
    intVec1.reserve(10);
    std::cout << "intVec1.size(): " << intVec1.size() << std::endl;
    std::cout << "intVec1.capacity(): " << intVec1.capacity() << std::endl;
    intVec1.shrink_to_fit();
    std::cout << "intVec1.capacity(): " << intVec1.capacity() << std::endl;

    std::cout << std::endl;

    std::vector<int> intVec2(10);
    std::cout << "intVec2.size() : " << intVec2.size() << std::endl;
    std::vector<int> intVec3{ 10 };
    std::cout << "intVec3.size() : " << intVec3.size() << std::endl;
    std::vector<int> intVec4{ 5, 2011 };
    std::cout << "intVec4.size() : " << intVec4.size() << std::endl;

    std::cout << std::endl;

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
