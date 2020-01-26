#include <iostream>
double verdopple(double zahl) {      // Wert-Parameter und R?ckgabewert
    return zahl * 2.0;
}

int main() {
    double zahl = 7.25;
    zahl = verdopple(zahl);        // ?nderung ausgedr?ckt durch R?ckgabewert
    std::cout << zahl << "\n";     // auch 14.5
    //= 14.5
}

