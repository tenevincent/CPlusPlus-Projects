// performanceMeasurement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <chrono>
#include <iomanip>
#include <iostream>
#include <iostream>
#include <vector>
#include <utility>

int main() {

    std::cout << std::fixed << std::setprecision(10) << std::endl;

    std::vector<int> myBigVec(10000000, 2011);
    std::vector<int> myEmptyVec1;
    std::vector<int> myEmptyVec2;

    std::chrono::time_point<std::chrono::system_clock> begin = std::chrono::system_clock::now();
    myEmptyVec1 = myBigVec;
    auto end = std::chrono::system_clock::now() - begin;

    auto timeInSeconds = std::chrono::duration<double>(end).count();
    std::cout << "Copy Initialization in seconds: " << timeInSeconds << std::endl;


    begin = std::chrono::system_clock::now();
    myEmptyVec2 = std::move(myBigVec);
    end = std::chrono::system_clock::now() - begin;

    timeInSeconds = std::chrono::duration<double>(end).count();
    std::cout << "Move Initialization in seconds: " << timeInSeconds << std::endl;

    std::cout << std::endl;

}

