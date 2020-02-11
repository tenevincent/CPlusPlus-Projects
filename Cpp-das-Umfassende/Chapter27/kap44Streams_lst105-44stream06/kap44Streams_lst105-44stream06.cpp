#include <iostream>
#include <iomanip>
#include "kap44Streams_lst105-44stream06.h"
using std::cin; using std::cout; using std::endl;

void f() {
    bool b = true;
    cout << b << endl;                    // Ausgabe:  true
}

void ausgabe_base();

void ausgabe_boolean();


void ausgabe_setWidth();

int main() {


    /*ausgabe_base();
    ausgabe_boolean();*/
    ausgabe_setWidth();

}


void ausgabe_setWidth() {
    int val = -1000;
    cout << std::setw(10) << std::internal
        << val << endl;
    //= -     1000
    cout << std::setw(10) << std::left << val << endl;
    //= -1000
    cout << std::setw(10) << std::right
        << val << endl;
    //= -1000

}



void ausgabe_base() {

    int val = 255;
    cout << std::showbase;
    cout << std::dec << val << endl;   // Ausgabe: 255
    //=255
    cout << std::hex << val << endl;   // Ausgabe: 0xff
    //= 0xff
    f();
    //= 0x64
    cout << std::oct << val << endl;   // Ausgabe: 0377
    //= 0377
    cout << val << std::endl;          // Ausgabe: 0377
    //= 0377
}

void ausgabe_boolean()
{
    bool b = true;
    cout << std::boolalpha << b << endl;   // Ausgabe: true
                                           //= true
    b = false;
    cout << b << endl;                     // Ausgabe: false
                                           //= false
    f();
    //= true
    cout << std::noboolalpha << b << endl; // Ausgabe: 0
                                           //= 0
    b = true;
    cout << b << endl;                     // Ausgabe: 1
                                           //= 1
}

