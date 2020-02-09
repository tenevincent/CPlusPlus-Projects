// associativeContainerPerformance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <chrono>
#include <iostream>
#include <map>
#include <random>
#include <unordered_map>

static const long long mapSize = 10000000;
static const long long accSize = 1000000;

int main() {

    std::cout << std::endl;

    std::map<int, int> myMap;
    std::unordered_map<int, int> myHash;

    // identity map for the first 10 million natural numbers
    for (long long i = 0; i < mapSize; ++i) {
        myMap[i] = i;
        myHash[i] = i;
    }

    std::vector<int> randValues;
    randValues.reserve(accSize);

    // random values
    std::random_device seed;
    std::mt19937 engine(seed());
    std::uniform_int_distribution<> uniformDist(0, mapSize);
    for (long long i = 0; i < accSize; ++i) randValues.push_back(uniformDist(engine));

    // read 1 million randomly choosen values from the map and the unordered_map

    auto start = std::chrono::system_clock::now();
    for (long long i = 0; i < accSize; ++i) {
        myMap[randValues[i]];
    }
    std::chrono::duration<double> dur = std::chrono::system_clock::now() - start;
    std::cout << "time for std::map: " << dur.count() << " seconds" << std::endl;

    auto start2 = std::chrono::system_clock::now();
    for (long long i = 0; i < accSize; ++i) {
        myHash[randValues[i]];
    }
    std::chrono::duration<double> dur2 = std::chrono::system_clock::now() - start2;
    std::cout << "time for std::unordered_map: " << dur2.count() << " seconds" << std::endl;
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
