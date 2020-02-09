// associativeContainerSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {

    std::cout << std::endl;

    std::multiset<int> mySet{ 3, 1, 5, 3, 4, 5, 1, 4, 4, 3, 2, 2, 7, 6, 4, 3, 6 };
    for (auto s : mySet) std::cout << s << " ";

    std::cout << "\n\n";

    mySet.erase(mySet.lower_bound(4), mySet.upper_bound(4));
    for (auto s : mySet) std::cout << s << " ";

    std::cout << "\n\n";

    std::cout << "mySet.count(3): " << mySet.count(3) << std::endl;
    std::cout << "*mySet.find(3): " << *mySet.find(3) << std::endl;
    std::cout << "*mySet.lower_bound(3): " << *mySet.lower_bound(3) << std::endl;
    std::cout << "*mySet.upper_bound(3): " << *mySet.upper_bound(3) << std::endl;
    auto pair = mySet.equal_range(3);
    std::cout << "mySet.equal_range(3): (" << *pair.first << ", " << *pair.second << ")" << std::endl;

    std::cout << "\n\n";

    std::map<int, std::string> int2Str{ {5, "five"}, {1, "one"}, {4, "four"}, {2, "two"}, {7, "seven"} };
    for (auto p : int2Str) std::cout << p.first << ", " << p.second << std::endl;

    std::cout << std::endl;

    std::cout << "int2Str.count(3): " << int2Str.count(3) << std::endl;
    std::map<int, std::string>::iterator myInt2StrIt = int2Str.find(3);
    std::cout << "int2Str.find(3): " << int2Str.find(3)->first << std::endl;
    std::cout << "int2Str.lower_bound(3): " << int2Str.lower_bound(3)->first << std::endl;
    std::cout << "int2Str.upper_bound(3): " << int2Str.upper_bound(3)->first << std::endl;
    std::pair< std::map<int, std::string>::iterator, std::map<int, std::string>::iterator > myRangePair = int2Str.equal_range(3);
    auto pair2 = int2Str.equal_range(3);
    std::cout << "int2Str.equal_range(3): (" << pair2.first->first << ", " << pair2.second->first << ")" << std::endl;

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
