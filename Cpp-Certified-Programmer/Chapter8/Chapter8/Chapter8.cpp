// Chapter8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"

using namespace std;

class P {
public:
    int no;
    P(int n) : no(n) { }
    P() : no(0) { }
    string operator&() {
        switch (no) {
        case 0: return "alpha";
        case 1: return "bravo";
        case 2: return "charlie";
        }
    }
};

P& operator*(string s) {
    P* p;
    if (!s.compare("alpha"))
        p = new P(0);
    else if (!s.compare("bravo"))
        p = new P(1);
    else if (!s.compare("charlie"))
        p = new P(2);
    else
        p = new P(-1);
    return *p;
}



int main(void) {


    int i = 2, j;
    Stack stk;
    stk << 1 << 2 * i;
    cout << stk[0] << endl << stk[-1] << endl;
    stk[0] = stk[-1] = 0;
    stk >> i >> j;
    cout << i << endl << j << endl;

    return 0;
}