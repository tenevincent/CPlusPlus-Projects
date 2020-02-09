// containerComparison.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <array>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>

int main() {

    std::cout << std::boolalpha << std::endl;
     
    std::vector<int> vec1{ 1, 2, 3, 4 };
    std::vector<int> vec2{ 1, 2, 3, 4 };
    std::cout << "vec1 == vec2: " << (vec1 == vec2) << std::endl;

    std::cout << std::endl;

    std::array<int, 4> arr1{ 1, 2, 3, 4 };
    std::array<int, 4> arr2{ 1, 2, 3, 4 };
    std::cout << "arr1 == arr2: " << (arr1 == arr2) << std::endl;

    std::set<int> set1{ 1, 2, 3, 4 };
    std::set<int> set2{ 4, 3, 2, 1 };
    std::cout << "set1 == set2: " << (set1 == set2) << std::endl;

    std::set<int> set3{ 1, 2, 3, 4, 5 };
    std::cout << "set1 < set3: " << (set1 < set3) << std::endl;

    std::set<int> set4{ 1, 2, 3, -3 };
    std::cout << "set1 > set4: " << (set1 > set4) << std::endl;

    std::cout << std::endl;

    std::unordered_map<int, std::string> unordSet1{ {1, "one"}, {2, "two"} };
    std::unordered_map<int, std::string> unordSet2{ {1, "one"}, {2, "Two"} };
    std::cout << "unordSet1 == unordSet2: " << (unordSet1 == unordSet2) << std::endl;

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
