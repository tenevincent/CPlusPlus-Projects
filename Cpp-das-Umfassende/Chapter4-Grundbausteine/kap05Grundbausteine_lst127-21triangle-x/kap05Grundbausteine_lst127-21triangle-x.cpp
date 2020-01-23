#include <iostream> //#
#include <cmath> // sqrt  //#
#include <iomanip> // setprecision, fixed //#
using std::min; using std::max;  //#
template<typename T> T heron(T a, T b, T c) {  //#
    auto s = (a + b + c) / 2;  //#
    return sqrt(s * (s - a) * (s - b) * (s - c));  //#
}  //#
template<typename T> T kahan(T a, T b, T c) {  //#
    auto x = max<T>(a, max<T>(b, c));  //#
    auto y = max<T>(min<T>(a, b), min<T>(max<T>(a, b), c));  //#
    auto z = min<T>(a, min<T>(b, c));  //#
    return sqrt((x + (y + z)) * (z - (x - y)) * (z + (x - y)) * (x + (y - z))) / 4;  //#
    //# (a+(b+c)) (c-(a-b)) (c+(a-b)) (a+(b-c))
}  //#
template<typename T> void dreieck(T a, T b, T c) {  //#
    std::cout //#
        << "heron: " << heron(a, b, c) << '\n'  //#
        << "kahan: " << kahan(a, b, c) << '\n';  //#
}  //#
int main() {
    std::cout << std::setprecision(15) << std::fixed;
    dreieck(100'000.0f, 99'999.999'79f, 0.000'29f);
    //= heron: 0.000000000000000
    //= kahan: 14.500000000000000
    dreieck(100'000.0, 99'999.999'79, 0.000'29);
    //= heron: 9.999999809638329
    //= kahan: 10.000000077021038
}

