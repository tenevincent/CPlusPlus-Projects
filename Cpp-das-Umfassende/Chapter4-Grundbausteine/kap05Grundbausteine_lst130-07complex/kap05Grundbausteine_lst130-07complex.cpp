#include <iostream>
#include <iomanip>    // setprecision, fixed
#include <complex>
using std::cout; using std::complex;

int main() {
    using namespace std::complex_literals;   // f?r i-Suffix
    cout << std::fixed << std::setprecision(1);
    complex<double> z1 = 1i * 1i;    // i mal i
    cout << z1 << '\n';                      // Ausgabe: (@MINUS@1.0,0.0)
    //= (-1.0,0.0)
    complex<double> z2 = std::pow(1i, 2);    // i-Quadrat
    cout << z2 << '\n';                      // Ausgabe: (@MINUS@1.0,0.0)
    //= (-1.0,0.0)
    double PI = std::acos(-1);               // L?nge eines halben Einheitskreises
    complex<double> z3 = std::exp(1i * PI);  // Euler-Formel
    cout << z3 << '\n'; // Ausgabe: (@MINUS@1.0,0.0)
    //= (-1.0,0.0)
    complex<double> a(3, 4);                 // gewohnt als Konstruktor
    complex<double> b = 1. - 2i;             // praktisch als Literal

    // Berechnungen:
    cout << "a + b = " << a + b << "\n";     // Ausgabe: a + b = (4.0,2.0)
    //= a + b = (4.0,2.0)
    cout << "a * b = " << a * b << "\n";     // Ausgabe: a * b = (11.0,@MINUS@2.0)
    //= a * b = (11.0,-2.0)
    cout << "a / b = " << a / b << "\n";     // Ausgabe: a / b = (@MINUS@1.0,2.0)
    //= a / b = (-1.0,2.0)
    cout << "|a| = " << abs(a) << "\n";    // Ausgabe: |a| = 5.0
    //= |a| = 5.0
    cout << "conj(a) = " << conj(a) << "\n"; // Ausgabe: conj(a) = (3.0,@MINUS@4.0)
    //= conj(a) = (3.0,-4.0)
    cout << "norm(a) = " << norm(a) << "\n"; // Ausgabe: norm(a) = 25.0
    //= norm(a) = 25.0
    cout << "abs(a) = " << abs(a) << "\n";   // Ausgabe: abs(a) = 5.0
    //= abs(a) = 5.0
    cout << "exp(a) = " << exp(a) << "\n";   // Ausgabe: exp(a) = (@MINUS@13.1,@MINUS@15.2)
    //= exp(a) = (-13.1,-15.2)
}

