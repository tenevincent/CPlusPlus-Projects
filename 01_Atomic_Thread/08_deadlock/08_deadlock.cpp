// 08_deadlock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <mutex>
#include <thread>

struct CriticalData {
    std::mutex mut;
};


//void deadLock(CriticalData& a, CriticalData& b) {
//    a.mut.lock();
//    std::cout << "get the first mutex\n";
//    std::this_thread::sleep_for(std::chrono::milliseconds(1));
//    b.mut.lock();
//    std::cout << "get the second mutex\n";
//    a.mut.unlock(), b.mut.unlock();
//}


void deadLock(CriticalData& a, CriticalData& b) {

    std::lock_guard<std::mutex>guard1(a.mut);
    std::cout << "get the first mutex" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    std::lock_guard<std::mutex>guard2(b.mut);
    std::cout << "get the second mutex" << std::endl;
    // do something with a and b
}

int main() {

    CriticalData c1;
    CriticalData c2;

    std::thread t1([&] {deadLock(c1, c2); });
    std::thread t2([&] {deadLock(c2, c1); });

    t1.join();
    t2.join();

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
