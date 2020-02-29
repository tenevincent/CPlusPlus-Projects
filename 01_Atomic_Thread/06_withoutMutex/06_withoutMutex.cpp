// 06_withoutMutex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <chrono>
#include <iostream>
#include <string>
#include <thread>

class Worker {
public:
    Worker(std::string n) :name(n) {};

    void operator() () {
        for (int i = 1; i <= 3; ++i) {
            // begin work
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
            // end work
            std::cout << name << ": " << "Work " << i << " done !!!" << std::endl;
        }

    }
private:
    std::string name;
};


int main() {

    std::cout << std::endl;

    std::cout << "Boss: Let's start working.\n\n";

    std::thread herb = std::thread(Worker("Herb"));
    std::thread andrei = std::thread(Worker("  Andrei"));
    std::thread scott = std::thread(Worker("    Scott"));
    std::thread bjarne = std::thread(Worker("      Bjarne"));
    std::thread andrew = std::thread(Worker("        Andrew"));
    std::thread david = std::thread(Worker("          David"));

    herb.join();
    andrei.join();
    scott.join();
    bjarne.join();
    andrew.join();
    david.join();

    std::cout << "\n" << "Boss: Let's go home." << std::endl;

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
