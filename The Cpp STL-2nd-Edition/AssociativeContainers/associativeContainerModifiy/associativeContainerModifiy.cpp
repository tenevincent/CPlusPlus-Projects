// associativeContainerModifiy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <array>
#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

int main() {

    std::cout << std::endl;

    std::multiset<int> mySet{ 3, 1, 5, 3, 4, 5, 1, 4, 4, 3, 2, 2, 7, 6, 4, 3, 6 };
    for (auto s : mySet) std::cout << s << " ";

    std::cout << std::endl;

    mySet.insert(8);
    std::array<int, 5> myArr{ 10, 11, 12, 13, 14 };
    mySet.insert(myArr.begin(), myArr.begin() + 3);
    mySet.insert({ 22, 21, 20 });
    for (auto s : mySet) std::cout << s << " ";

    std::cout << std::endl;

    mySet.erase(4);
    mySet.erase(mySet.lower_bound(5), mySet.upper_bound(15));
    for (auto s : mySet) std::cout << s << " ";

    std::cout << "\n\n";

    std::map<int, std::string> int2Str{ {5, "five"}, {1, "one"}, {4, "four"}, {2, "two"}, {7, "seven"} };
    for (auto p : int2Str) std::cout << "{" << p.first << ", " << p.second << "} ";

    std::cout << std::endl;

    int2Str.insert(std::pair<int, std::string>(0, "zero"));
    int2Str.insert(std::make_pair(3, "three"));
    int2Str.insert({ 6, "six" });
    std::map<int, std::string> tmpInt2Str{ {0, "ZERO"}, {8, "eight"} };
    int2Str.insert(tmpInt2Str.begin(), tmpInt2Str.end());
    std::vector< std::pair<int, std::string> > pairVec{ {9, "nine"}, {10, "ten"} };
    int2Str.insert(pairVec.begin(), pairVec.end());
    int2Str.insert({ {11, "eleven"}, {12, "twelve"} });

    for (auto p : int2Str) std::cout << "{" << p.first << ", " << p.second << "} ";

    std::cout << std::endl;

    int2Str.erase(3);
    int2Str.erase(int2Str.lower_bound(4), int2Str.upper_bound(10));

    for (auto p : int2Str) std::cout << "{" << p.first << ", " << p.second << "} ";

    std::cout << "\n\n";

    std::pair<std::map<int, std::string>::iterator, bool> success = int2Str.insert({ 0, "ZERO" });
    auto success2 = int2Str.insert({ 0, "ZERO" });
    if (success2.second) std::cout << "Insertion of {0, ZERO} successful " << std::endl;
    else std::cout << "Insertion of {0, ZERO} failed" << std::endl;

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
