// optional.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <optional>
#include <iostream>
#include <vector>

std::optional<int> getFirst(const std::vector<int>& vec) {
    if (!vec.empty()) return std::optional<int>(vec[0]);
    else return std::optional<int>();
}

int main() {

    std::vector<int> myVec{ 1, 2, 3 };
    std::vector<int> myEmptyVec;

    auto myInt = getFirst(myVec);

    if (myInt) {
        std::cout << "*myInt: " << *myInt << std::endl;
        std::cout << "myInt.value(): " << myInt.value() << std::endl;
        std::cout << "myInt.value_or(2017):" << myInt.value_or(2017) << std::endl;
    }

    std::cout << std::endl;

    auto myEmptyInt = getFirst(myEmptyVec);

    if (!myEmptyInt) {
        std::cout << "myEmptyInt.value_or(2017):" << myEmptyInt.value_or(2017) << std::endl;
    }
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
