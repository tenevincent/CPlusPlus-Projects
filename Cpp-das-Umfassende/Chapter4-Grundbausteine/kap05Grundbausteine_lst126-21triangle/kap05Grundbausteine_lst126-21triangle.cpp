#include <iostream>
#include <cmath> // sqrt
using  std::min; using std::max;
template<typename T> T heron(T a, T b, T c) {
    auto s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
template<typename T> T kahan(T a, T b, T c) {
    auto x = max(a, max(b, c));
    auto y = max(min(a, b), min(max(a, b), c));
    auto z = min(a, min(b, c));
    return sqrt((x + (y + z)) * (z - (x - y)) * (z + (x - y)) * (x + (y - z))) / 4;
    //# (a+(b+c)) (c-(a-b)) (c+(a-b)) (a+(b-c))
}
template<typename T> void dreieck(T a, T b, T c) {
    std::cout << "heron: " << heron(a, b, c) << '\n';
    std::cout << "kahan: " << kahan(a, b, c) << '\n';
}
int main() {
    dreieck(3.0f, 4.0f, 5.0f);
    //= heron: 6
    //= kahan: 6
}

