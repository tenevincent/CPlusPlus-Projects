// variant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <variant>
#include <string>

int main() {

    std::variant<float> v, w;
    v = 12;                              // v contains int
    int i = std::get<float>(v);
    w = std::get<float>(v);
    w = std::get<0>(v);                  // same effect as the previous line
    w = v;                               // same effect as the previous line

    //  std::get<double>(v);             // error: no double in [int, float]
    //  std::get<3>(v);                  // error: valid index values are 0 and 1

    try {
        std::get<float>(w);                // w contains int, not float: will throw
    }
    catch (std::bad_variant_access&) {}

    std::variant<std::string> vv("abc");  // converting constructors work when unambiguous
    vv = "def";                           // converting assignment also works when unambiguous


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
