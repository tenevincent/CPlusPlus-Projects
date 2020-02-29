// 03_threadLifetime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <thread>

void helloFunction() {
    std::cout << "Hello C++11 from a function." << std::endl;
}

class HelloFunctionObject {
public:
    void operator()() const {
        std::cout << "Hello C++11 from a function object." << std::endl;
    }
};

int main() {

    std::cout << std::endl;

    // thread executing helloFunction
    std::thread t1(helloFunction);

    // thread executing helloFunctionObject
    HelloFunctionObject helloFunctionObject;
    std::thread t2(helloFunctionObject);

    // thread executing lambda function
    std::thread t3([] {std::cout << "Hello C++11 from lambda function." << std::endl; });

    // ensure that t1, t2 and t3 have finished before main thread terminates
    t1.join();
    t2.detach();
    t3.join();

    std::cout << std::endl;

};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
