// kap05Grundbausteine_lst108-00-zuweisung01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
int main() {
    int a = 3;
    int b = 7 + (a = 12) + 6;   // enth?lt eine Zuweisung
    std::cout << a << std::endl;
    //= 12
    std::cout << b << std::endl;//# hide
    //= 25
}

