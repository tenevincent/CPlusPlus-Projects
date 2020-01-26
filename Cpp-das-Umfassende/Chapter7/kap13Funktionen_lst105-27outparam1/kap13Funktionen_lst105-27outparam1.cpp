#include <iostream>
void verdopple(double& zahl) {     // Ausgabeparameter als ver?nderbare Referenz
    zahl *= 2.0;
}

int main() {
    double zahl = 7.25;
    verdopple(zahl);
    std::cout << zahl << "\n";     // nun 14.5
    //= 14.5
}

