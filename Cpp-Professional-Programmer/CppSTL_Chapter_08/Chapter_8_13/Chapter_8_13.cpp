// Chapter_8_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char c;
    char buffer[255];

    cout << "Reading single character:\n";
    c = cin.get();
    cout << "Value read: " << c << endl;

    cin.get(c);
    cout << "Value read: " << c << endl << endl;

    cout << "Something wrong - remember get does not extract delimiting character!\n";
    cout << "Reading single character again:\n";
    cin.get(c);
    cin.get(); // just to skip newline
    cout << "Value read: " << c << endl << endl;

    cout << "Reading the whole line:\n";
    cin.get(buffer, 254);
    c = cin.get();
    cout << "Value read: " << buffer << endl;
    cout << "NOT read delimeter: " << (int)c << endl << endl;

    cout << "Reading the whole line - with delimeter set to space:\n";
    cin.get(buffer, 254, ' ');
    c = cin.get();
    cout << "Value read: " << buffer << endl;
    cout << "NOT read delimeter: " << (int)c << endl;
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
