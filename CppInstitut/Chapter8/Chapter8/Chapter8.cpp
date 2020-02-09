// Chapter8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>

#include "Stack.h"

#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Int {
public:
    int v;
    Int(int a) : v(a) {}
};

void a() {
    throw Int(1);
}

void b() {
    try {
        a();
    }
    catch (Int & i) {
        throw Int(i.v + 1);
    }
}

void c() {
    try {
        b();
    }
    catch (...) {
        throw;
    }
}

int main() {

    try {
        c();
    }
    catch (Int & i) {
        cout << i.v;
    }


    return 0;
}