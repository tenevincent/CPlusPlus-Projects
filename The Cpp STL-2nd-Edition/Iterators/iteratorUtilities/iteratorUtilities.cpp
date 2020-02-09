// iteratorUtilities.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <array>
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_map>

int main() {

    std::cout << std::endl;

    std::unordered_map<std::string, int> myMap{ {"Rainer", 1966}, {"Beatrix", 1966}, {"Juliette", 1997}, {"Marius", 1999} };

    for (auto m : myMap) std::cout << "{" << m.first << ", " << m.second << "} ";

    std::cout << std::endl;

    auto mapItBegin = std::begin(myMap);
    std::cout << "{" << mapItBegin->first << ", " << mapItBegin->second << "}" << std::endl;
    auto mapIt = std::next(mapItBegin);
    std::cout << "{" << mapIt->first << ", " << mapIt->second << "}" << std::endl;

    auto dist = std::distance(mapItBegin, mapIt);
    std::cout << "std::distance(mapItBegin, mapIt): " << dist << std::endl;

    std::cout << std::endl;

    std::array<int, 10> myArr{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (auto a : myArr) std::cout << a << " ";

    std::cout << std::endl;

    auto arrItEnd = std::end(myArr);
    auto arrIt = std::prev(arrItEnd);
    std::cout << *arrIt << std::endl;

    std::advance(arrIt, -5);
    std::cout << *arrIt << std::endl;

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
