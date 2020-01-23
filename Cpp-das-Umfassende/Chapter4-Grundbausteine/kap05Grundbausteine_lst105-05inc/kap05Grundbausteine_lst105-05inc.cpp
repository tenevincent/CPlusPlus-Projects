// kap05Grundbausteine_lst105-05inc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream> // cout
int main() {
    int basis = 2;
    int index = 10;
    int zahl = 3 * (basis + ++index) - 1;  // zuerst wird index erh?ht
    std::cout << zahl << '\n';             // Ausgabe: 38
    //= 38
}

