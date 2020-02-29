// 05_threadMethods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>


int main() {

    std::cout << std::endl;

    std::cout << "std::thread::hardware_concurrency()= " << std::thread::hardware_concurrency() << std::endl;

    std::cout << std::endl;

    std::thread t1([] {std::cout << "hello from t1 with id= " << std::this_thread::get_id() << std::endl; });
    std::thread t2([] {std::cout << "hello from t2 with id= " << std::this_thread::get_id() << std::endl; });

    std::cout << std::endl;

    std::cout << "FROM MAIN: id of t1 " << t1.get_id() << std::endl;
    std::cout << "FROM MAIN: id of t2 " << t2.get_id() << std::endl;

    std::cout << "Is thread joinable? " << std::boolalpha << t2.joinable() << std::endl;


    std::cout << std::endl;
    t1.swap(t2);

    std::cout << "FROM MAIN: id of t1 " << t1.get_id() << std::endl;
    std::cout << "FROM MAIN: id of t2 " << t2.get_id() << std::endl;

    std::cout << std::endl;

    std::cout << "FROM MAIN: id of main= " << std::this_thread::get_id() << std::endl;

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
