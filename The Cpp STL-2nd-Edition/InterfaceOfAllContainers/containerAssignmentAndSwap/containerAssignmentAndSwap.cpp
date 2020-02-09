// containerAssignmentAndSwap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include <set>
#include <utility>

int main() {

    std::cout << std::endl;

    std::set<int> set1{ 0, 1, 2, 3, 4, 5 };
    std::set<int> set2{ 6, 7, 8, 9 };
    for (auto s : set1) std::cout << s << " ";
    std::cout << " ----- ";
    for (auto s : set2) std::cout << s << " ";

    std::cout << std::endl;

    set1 = set2;
    for (auto s : set1) std::cout << s << " ";
    std::cout << " ----- ";
    for (auto s : set2) std::cout << s << " ";

    std::cout << std::endl;

    set1 = std::move(set2);
    for (auto s : set1) std::cout << s << " ";
    std::cout << " ----- ";
    for (auto s : set2) std::cout << s << " ";

    std::cout << std::endl;

    set2 = { 60, 70, 80, 90 };
    for (auto s : set1) std::cout << s << " ";
    std::cout << " ----- ";
    for (auto s : set2) std::cout << s << " ";

    std::cout << std::endl;

    std::swap(set1, set2);
    for (auto s : set1) std::cout << s << " ";
    std::cout << " ----- ";
    for (auto s : set2) std::cout << s << " ";

    std::cout << "\n\n";
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
