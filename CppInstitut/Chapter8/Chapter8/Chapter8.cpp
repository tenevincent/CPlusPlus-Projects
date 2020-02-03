// Chapter8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>

#include "Stack.h"


using namespace std;
class Int {
public:
    int v;
    Int(int a) { v = a; }
};

    
class N {
public:
    float x;
    N() { x = 0.0; }
    N(float a) { x = a; }
    N(N& n) { x = n.x; }
};

ostream& operator <<(ostream& o, Int& a) {
    a.v++;
    return o << a.v;
}


 

int main() {

    char ii = 0xA;


    N a;
    a = 2.0;
    cout << a.x;
    return 0;
}