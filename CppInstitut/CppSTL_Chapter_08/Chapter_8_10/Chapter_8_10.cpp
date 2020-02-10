// Chapter_8_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int value = 65535;
    cout << std::nouppercase;
    cout << "Default ios::basefield value - dec:\n";
    cout << value << endl;

    cout << "Setting ios::basefield to oct:\n";
    cout << std::oct;
    cout << value << endl;

    cout << "Setting ios::basefield to hex:\n";
    cout << std::hex;
    cout << value << endl;

    cout << "Setting uppercase flag when displaying value as hex:\n";
    cout << std::uppercase;
    cout << value << endl << endl;

    cout << std::nouppercase;
    cout << "Display above values using showbase flag:\n";
    cout << showbase << setbase(10);
    cout << "Default ios::basefield value - dec:\n";
    cout << value << endl;

    cout << "Setting ios::basefield to oct:\n";
    cout << setbase(8);
    cout << value << endl;

    cout << "Setting ios::basefield to hex:\n";
    cout << setbase(16);
    cout << value << endl;

    cout << "Setting uppercase flag when displaying value as hex:\n";
    cout << std::uppercase;
    cout << value << endl;

    cout << "How long is change of base valid:\n";
    cout << noshowbase << value << endl;
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
