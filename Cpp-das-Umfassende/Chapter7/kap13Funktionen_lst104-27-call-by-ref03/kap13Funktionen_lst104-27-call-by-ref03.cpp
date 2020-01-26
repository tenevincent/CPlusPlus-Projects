#include <iostream>
void print_cref(const int& n) {     // Parameter als konstante Referenz
    std::cout << n << " ";
}

int main() {
    int x = 5;
    print_cref(x);                  // Aufruf mit einer Variablen
    print_cref(42);                 // Aufruf mit einem konstanten Literal
    //= 5 42
}


