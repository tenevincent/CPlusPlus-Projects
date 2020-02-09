// mathFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>

int main() {

    std::cout << std::endl;

    std::cout << "cmath" << std::endl;

    std::cout << "std::pow(2, 10): " << std::pow(2, 10) << std::endl;
    std::cout << "std::pow(2, 0.5): " << std::pow(2, 0.5) << std::endl;
    std::cout << "std::exp(1): " << std::exp(1) << std::endl;
    std::cout << "std::ceil(5.5): " << std::ceil(5.5) << std::endl;
    std::cout << "std::floor(5.5): " << std::floor(5.5) << std::endl;
    std::cout << "std::fmod(5.5, 2): " << std::fmod(5.5, 2) << std::endl;
    double intPart;
    auto fracPart = std::modf(5.7, &intPart);
    std::cout << "fmod(5.7, &intPart): " << intPart << " + " << fracPart << std::endl;

    std::cout << "\ncstdlib: " << "\n\n";
    std::div_t divresult = std::div(14, 5);
    std::cout << "std::div(14, 5): " << divresult.quot << " reminder: " << divresult.rem << std::endl;

    // seed
    std::srand(time(nullptr));
    for (int i = 0; i <= 10; ++i) {
        std::cout << "Dice: " << (rand() % 6 + 1) << std::endl;
    }

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
