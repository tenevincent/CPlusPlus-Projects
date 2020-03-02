// 03_threadArguments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <iostream>
#include <thread>

class Sleeper {
public:
    Sleeper(int& i_, int& j_) :i{ i_ }, sum{j_} {};
    void operator() (int k) {
        for (unsigned int j = 0; j <= 5; ++j) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            i += k;
            ++sum;
        }
        std::cout << std::this_thread::get_id();
    }
private:
    int& i;
    int& sum;
};


int main() {

    std::cout << std::endl;

    int valSleeper = 1000;
    int summe = 0;
    std::thread t(Sleeper(valSleeper, summe), 5);
    t.join();
    std::cout << "valSleeper = " << valSleeper << std::endl;
    std::cout << "Summe = " << summe << std::endl;
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
