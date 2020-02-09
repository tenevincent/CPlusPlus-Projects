// priorityQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

int main() {

    std::cout << std::boolalpha << std::endl;

    std::priority_queue<int> myPriorityQueue;

    std::cout << "myPriorityQueue.empty(): " << myPriorityQueue.empty() << std::endl;
    std::cout << "myPriorityQueue.size(): " << myPriorityQueue.size() << std::endl;

    std::cout << std::endl;

    myPriorityQueue.push(3);
    myPriorityQueue.push(1);
    myPriorityQueue.push(2);

    std::cout << "myPriorityQueue.top(): " << myPriorityQueue.top() << std::endl;

    std::cout << std::endl;

    while (!myPriorityQueue.empty()) {
        std::cout << "myPriorityQueue.top(): " << myPriorityQueue.top() << std::endl;
        myPriorityQueue.pop();
    }

    std::cout << std::endl;

    std::cout << "myPriorityQueue.empty(): " << myPriorityQueue.empty() << std::endl;
    std::cout << "myPriorityQueue.size(): " << myPriorityQueue.size() << std::endl;

    std::cout << std::endl;

    std::priority_queue<std::string, std::vector<std::string>, std::greater<std::string>> myPriorityQueue2;

    myPriorityQueue2.push("Only");
    myPriorityQueue2.push("for");
    myPriorityQueue2.push("testing");
    myPriorityQueue2.push("purpose");
    myPriorityQueue2.push(".");

     while (!myPriorityQueue2.empty()) {
        std::cout << "myPriorityQueue2.top(): " << myPriorityQueue2.top() << std::endl;
        myPriorityQueue2.pop();
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
