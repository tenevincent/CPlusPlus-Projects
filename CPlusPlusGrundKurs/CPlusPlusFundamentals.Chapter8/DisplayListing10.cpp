#include "DisplayListing10.h"


void DisplayListing10::byValue(int a, int b) {
    cout << a << " * " << b << " = " << (a * b) << '\n';
    // Werte auf 0 setzen (nur lokal)
    a = 0;
    b = 0;
}

void DisplayListing10::byReference(int* a, int* b) {
    cout << *a << " * " << *b << " = "
        << (*a) * (*b) << '\n';
    // Werte auf 0 setzen
    *a = 0;
    *b = 0;

    cout << "call by pointer inside:\t wert1: " << &a << " wert2: " << &b << endl;
}


int DisplayListing10::addieren(const int& val1, const int& val2) {
    return val1 + val2;
}


void DisplayListing10::byReference(int& a, int& b) {
    cout << a << " * " << b << " = "
        << a * b << '\n';
    // Werte auf 0 setzen
    a = 0;
    b = 0;
}


int& DisplayListing10::test_referenz(void) {
    static int iwert = 10;
    // mehr zu static siehe Abschnitt 5.2.2
    return iwert;
}
