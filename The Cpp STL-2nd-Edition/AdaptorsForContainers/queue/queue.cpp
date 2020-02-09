// queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <queue>

int main() {

    std::cout << std::boolalpha << std::endl;

    std::queue<int> myQueue;

    std::cout << "myQueue.empty(): " << myQueue.empty() << std::endl;
    std::cout << "myQueue.size(): " << myQueue.size() << std::endl;


    std::cout << std::endl;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    std::cout << "myQueue.back(): " << myQueue.back() << std::endl;
    std::cout << "myQueue.front(): " << myQueue.front() << std::endl;

    std::cout << std::endl;

    while (!myQueue.empty()) {
        std::cout << "myQueue.back(): " << myQueue.back() << std::endl;
        std::cout << "myQueue.front(): " << myQueue.front() << std::endl;
        myQueue.pop();
    }

    std::cout << std::endl;

    std::cout << "myQueue.empty(): " << myQueue.empty() << std::endl;
    std::cout << "myQueue.size(): " << myQueue.size() << std::endl;

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
