// Chapter_8_08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Current fill character: " << cout.fill() << ", code: " << (int)cout.fill() << endl;
    cout << "Current field width : " << cout.width() << endl;
    cout << 1 << 2 << 3 << endl;
    // changing width;
    cout << setw(3);
    cout << "Field width after change : " << cout.width() << endl;
    cout << 1 << 2 << 3 << endl;
    cout << "Width after output : " << cout.width() << endl;
    // changing width and fill
    cout << setw(3);
    cout << setfill('_');
    cout << "Current fill character: " << cout.fill() << ", code: " << (int)cout.fill() << endl;
    cout << 1 << 2 << 3 << endl << endl;

    cout << "Setting width before each write:\n";
    cout << "adjustfield - not set/default:\n";
    for (unsigned i = 1; i <= 3; ++i) {
        cout << setw(3) << i;
    }
    cout << endl;

    cout << "adjustfield - left:\n";
    cout << left;
    for (unsigned i = 1; i <= 3; ++i) {
        cout << setw(3) << i;
    }
    cout << endl;

    cout << "adjustfield - internal:\n";
    cout << internal;
    for (unsigned i = 1; i <= 3; ++i) {
        cout << setw(3) << i;
    }
    cout << endl;

    cout << "adjustfield - right:\n";
    cout << right;
    for (unsigned i = 1; i <= 3; ++i) {
        cout << setw(3) << i;
    }
    cout << endl;
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
