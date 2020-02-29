// 01_Atomic_Thread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <atomic>
#include <iostream>
#include <thread>

std::atomic_int x;
std::atomic_int y;
int r1;
int r2;

void writeX() {
    x.store(1);
    r1 = y.load();
}

void writeY() {
    y.store(1);
    r2 = x.load();
}

int main() {

    std::cout << std::endl;

    x = 0;
    y = 0;
    std::thread a(writeX);
    std::thread b(writeY);
    a.join();
    b.join();
    std::cout << "(r1, r2)= " << "(" << r1 << ", " << r2 << ")" << std::endl;

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
