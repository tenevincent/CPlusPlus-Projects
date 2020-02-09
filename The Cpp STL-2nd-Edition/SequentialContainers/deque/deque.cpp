// deque.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque>

struct MyInt {
    MyInt(int i) : myInt(i) {};
    int myInt;
};

int main() {

    std::cout << std::endl;

    std::deque<MyInt> myIntDeq;
    myIntDeq.push_back(MyInt(5));
    myIntDeq.emplace_back(1);
    std::cout << "myIntDeq.size(): " << myIntDeq.size() << std::endl;

    std::cout << std::endl;

    std::deque<int> intDeq;

    intDeq.assign({ 1, 2, 3 });
    for (auto v : intDeq) std::cout << v << " ";

    std::cout << std::endl;

    intDeq.insert(intDeq.begin(), 0);
    for (auto v : intDeq) std::cout << v << " ";

    std::cout << std::endl;

    intDeq.insert(intDeq.begin() + 4, 4);
    for (auto v : intDeq) std::cout << v << " ";

    std::cout << std::endl;

    intDeq.insert(intDeq.end(), { 5, 6, 7, 8, 9, 10, 11 });
    for (auto v : intDeq) std::cout << v << " ";
    std::cout << std::endl;
    for (auto revIt = intDeq.rbegin(); revIt != intDeq.rend(); ++revIt) std::cout << *revIt << " ";

    std::cout << std::endl;

    intDeq.pop_back();
    for (auto v : intDeq) std::cout << v << " ";

    std::cout << std::endl;

    intDeq.push_front(-1);
    for (auto v : intDeq) std::cout << v << " ";

    std::cout << "\n\n";
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
