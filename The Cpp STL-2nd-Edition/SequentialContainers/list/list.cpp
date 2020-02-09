// list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <list>

int main() {

    std::cout << std::endl;

    std::list<int> list1{ 15, 2, 18, 19, 4, 15, 1, 3, 18, 18, 5, 4, 7, 17, 9, 16, 8, 6, 6, 17, 1, 19, 2, 1 };
    for (auto l : list1) std::cout << l << " ";

    std::cout << std::endl;

    list1.sort();
    for (auto l : list1) std::cout << l << " ";

    std::cout << std::endl;

    list1.unique();
    for (auto l : list1) std::cout << l << " ";

    std::cout << std::endl;

    std::list<int> list2{ 10, 11, 12, 13, 14 };
    list1.splice(std::find(list1.begin(), list1.end(), 15), list2);
    for (auto l : list1) std::cout << l << " ";

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
