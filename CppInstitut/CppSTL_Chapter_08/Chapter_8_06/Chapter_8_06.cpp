// Chapter_8_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    double d1 = 123.455555;
    double d2 = 123.45;
    unsigned p = cout.precision();
    cout << "Mode: default\n";
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout.precision(4);
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout.precision(2);
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout << endl;

    cout << "Mode: fixed\n";
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(p);
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout.precision(4);
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout.precision(2);
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout << endl;

    cout << "Mode: scientific\n";
    cout.setf(ios::scientific, ios::floatfield);
    cout.precision(p);
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout.precision(4);
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout.precision(2);
    cout << "Precision: " << cout.precision() << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    return 0;
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
