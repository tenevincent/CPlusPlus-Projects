// 11_conditionVariable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <condition_variable>
#include <mutex>
#include <thread>

std::mutex mutex_;
std::condition_variable condVar;

bool dataReady;

void doTheWork() {
    std::cout << "Processing shared data." << std::endl;
}

void waitingForWork() {

    std::cout << "Worker: Waiting for work." << std::endl;

    std::unique_lock<std::mutex> lock(mutex_);
    condVar.wait(lock, [] {return dataReady; });
    doTheWork();
    std::cout << "Work done." << std::endl;

}

void setDataReady() {

    std::lock_guard<std::mutex> lck(mutex_);
    dataReady = true;
    std::cout << "Sender: Data is ready." << std::endl;
    condVar.notify_one();

}

int main() {

    std::cout << std::endl;

    std::thread t1(waitingForWork);
    std::thread t2(setDataReady);

    t1.join();
    t2.join();

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
