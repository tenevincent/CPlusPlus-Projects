// containerSize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <set>
#include <vector>

int main() {

    std::cout << std::boolalpha << std::endl;

    std::vector<int> intVec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::map<std::string, int> str2Int = { {"grimm", 12345}, {"meyer", 34929}, {"huber", 840284} };
    std::set<double> douSet{ 3.14, 2.5 };

    std::cout << "intVec.empty() : " << intVec.empty() << std::endl;
    std::cout << "str2Int.empty(): " << str2Int.empty() << std::endl;
    std::cout << "douSet.empty() : " << douSet.empty() << std::endl;

    std::cout << std::endl;

    std::cout << "intVec.size() : " << intVec.size() << std::endl;
    std::cout << "str2Int.size(): " << str2Int.size() << std::endl;
    std::cout << "douSet.size() : " << douSet.size() << std::endl;

    std::cout << std::endl;

    std::cout << "intVec.max_size() : " << intVec.max_size() << std::endl;
    std::cout << "str2Int.max_size(): " << str2Int.max_size() << std::endl;
    std::cout << "douSet.max_size() : " << douSet.max_size() << std::endl;

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
