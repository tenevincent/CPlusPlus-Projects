// kap05Grundbausteine_lst104-15-grund-09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream> //#
void berechne(int n) {                             // eine eigene Funktion
    using namespace std;                           // f?r std::cout und std::endl
    /* Teiler ausgeben */
    cout << "Teiler von " << n << " sind:\n";
    for (int teiler = 1; teiler <= n; ++teiler) {     // statt teiler=teiler+1
        if (n % teiler == 0)
            cout << teiler << ", ";
    }
    cout << endl;
}

