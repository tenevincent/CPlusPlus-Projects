// Chapter_8_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char c;
    unsigned char uc;
    bool b;
    int i;
    unsigned int ui;
    long l;
    float f;
    double d;
    char text[100];
    // when readinng car - only first char is read and stored into variable
    cout << "Input - char:\n";
    cin >> c;
    cout << "Value read: " << c << endl;

    cout << "Input - unsigned char:\n";
    cin >> uc;
    cout << "Value read: " << uc << endl;

    cout << "Input - bool:\n";
    cin >> b;
    cout << "Value read: " << boolalpha << b << endl;

    cout << "Input - int:\n";
    cin >> i;
    cout << "Value read: " << i << endl;

    cout << "Input - unsigned int - reading as hex:\n";
    cin >> hex >> ui;
    cout << "Value read: " << hex << showbase << ui << endl;

    cout << dec << "Input - long:\n";
    cin >> dec >> l;
    cout << "Value read: " << l << endl;

    cout << "Input - float:\n";
    cin >> f;
    cout << "Value read: " << fixed << f << endl;

    cout << "Input - double - scientific:\n";
    cin >> d;
    cout << "Value read: " << fixed << d << endl;

    cout << "Input - text:\n";
    cin >> text;
    cout << "Value read: " << text << endl;

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
