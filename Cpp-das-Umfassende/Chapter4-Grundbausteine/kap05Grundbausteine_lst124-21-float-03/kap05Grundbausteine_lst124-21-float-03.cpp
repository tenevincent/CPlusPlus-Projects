#include <iostream>
#include <iomanip> // fixed, setprecision
int main() {
    std::cout << std::setprecision(30) << std::fixed; // immer 30 Stellen ausgeben
    std::cout << 1.111222333444555666777888999f << "\n"; // float-Literal
    // Ausgabe: 1.111222386360168457031250000000
    //= 1.111222386360168457031250000000
    std::cout << 1.111222333444555666777888999 << "\n";  // double ist Default
    // Ausgabe: 1.111222333444555676607023997349
    //= 1.111222333444555676607023997349
    std::cout << 1.111222333444555666777888999d << "\n"; // double-Literal
    // Ausgabe: 1.111222333444555676607023997349
    //= 1.111222333444555676607023997349
    std::cout << 1.111222333444555666777888999L << "\n"; // long double
    // Ausgabe: 1.111222333444555666740784227731
    //= 1.111222333444555666740784227731
}


