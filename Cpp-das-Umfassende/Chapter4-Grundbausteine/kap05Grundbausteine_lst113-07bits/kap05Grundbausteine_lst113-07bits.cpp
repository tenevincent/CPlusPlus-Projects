#include <iostream>

void printBin(int x) {
    while (x > 0) {         // fertig?
        int a = x / 2;     // Division durch 2
        int b = x % 2;     // Modulo, Rest der Division
        std::cout << x << " / 2 = " << a << ", Rest " << b << '\n'; // Ausgabe
        x = a;
    }
}

int main() {
    printBin(412);
    //= 412 / 2 = 206, Rest 0
    //= 206 / 2 = 103, Rest 0
    //= 103 / 2 = 51, Rest 1
    //=  51 / 2 = 25, Rest 1
    //=  25 / 2 = 12, Rest 1
    //=  12 / 2 = 6, Rest 0
    //=   6 / 2 = 3, Rest 0
    //=   3 / 2 = 1, Rest 1
    //=   1 / 2 = 0, Rest 1
}

