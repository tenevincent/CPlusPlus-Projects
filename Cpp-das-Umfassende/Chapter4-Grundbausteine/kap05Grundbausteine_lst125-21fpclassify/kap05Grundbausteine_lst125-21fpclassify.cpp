#include <iostream>
#include <cmath>  // fpclassify
//#include <cfloat> // DBL_MIN
#include <limits> // numeric_limits
#include <string>
std::string fpklass(double x) {
    switch (std::fpclassify(x)) {
    case FP_INFINITE:  return "unendlich";
    case FP_NAN:       return "NaN";
    case FP_NORMAL:    return "normal";
    case FP_SUBNORMAL: return "subnormal";
    case FP_ZERO:      return "Null";
    default:           return "unbekannt";
    }
}
int main() {
    const auto dmin = std::numeric_limits<double>::min();
    std::cout
        << "1.0/0.0 ist " << fpklass(1 / 0.0) << '\n'   // Ausgabe: 1.0/0.0 ist unendlich
      //= 1.0/0.0 ist unendlich
        << "0.0/0.0 ist " << fpklass(0.0 / 0.0) << '\n' // Ausgabe: 0.0/0.0 ist NaN
      //= 0.0/0.0 ist NaN
        << "dmin/2 ist " << fpklass(dmin / 2) << '\n'   // Ausgabe: dmin/2 ist subnormal
      //= dmin/2 ist subnormal
        << "-0.0 ist " << fpklass(-0.0) << '\n'       // Ausgabe: @MINUS@0.0 ist null
      //= -0.0 ist Null
        << "1.0 ist " << fpklass(1.0) << '\n';        // Ausgabe: 1.0 ist normal
      //= 1.0 ist normal
}


