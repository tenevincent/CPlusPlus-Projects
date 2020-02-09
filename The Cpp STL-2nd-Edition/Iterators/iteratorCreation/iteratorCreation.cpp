// iteratorCreation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {

    std::cout << std::endl;

    std::unordered_map<std::string, int> unordMap{ {"Rainer", 1966}, {"Beatrix", 1966}, {"Juliette", 1997}, {"Marius", 1999} };

    std::unordered_map<std::string, int>::const_iterator endMapIt = unordMap.end();
    std::unordered_map<std::string, int>::iterator mapIt;

    for (mapIt = unordMap.begin(); mapIt != endMapIt; ++mapIt) std::cout << "{" << mapIt->first << ", " << mapIt->second << "} ";

    std::cout << "\n\n";

    std::vector<int> myVec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::vector<int>::const_iterator vecEndIt = myVec.end();
    std::vector<int>::iterator vecIt;
    for (vecIt = myVec.begin(); vecIt != vecEndIt; ++vecIt) std::cout << *vecIt << " ";

    std::cout << std::endl;

    for (const auto v : myVec) std::cout << v << " ";

    std::cout << std::endl;

    std::vector<int>::const_reverse_iterator vecEndRevIt = myVec.rend();
    std::vector<int>::reverse_iterator vecRevIt;
    for (vecRevIt = myVec.rbegin(); vecRevIt != vecEndRevIt; ++vecRevIt) std::cout << *vecRevIt << " ";

    std::cout << "\n\n";

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
