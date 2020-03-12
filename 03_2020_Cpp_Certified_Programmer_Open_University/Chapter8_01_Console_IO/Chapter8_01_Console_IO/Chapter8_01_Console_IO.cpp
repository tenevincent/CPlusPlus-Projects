// Chapter8_01_Console_IO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char c = 'a';
    unsigned char uc = 'b';
    bool b = true;
    int i = 1 << 32 - 1;
    unsigned int ui = (1 << 32) - 1;
    long l = 1 << 32 - 1;
    float f = 2.13f;
    double d = 2.13;
    const char* text = "Hello world!";
    cout << "bool: " << b << endl;
    cout << "char: " << c << endl;
    cout << "unsigned char: " << uc << endl;
    cout << "int: " << i << endl;
    cout << "unsigned int: " << ui << endl;
    cout << "long: " << l << endl;
    cout << "float: " << f << endl;
    cout << "double: " << d << endl;
    cout << "char *: " << text << endl;
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
