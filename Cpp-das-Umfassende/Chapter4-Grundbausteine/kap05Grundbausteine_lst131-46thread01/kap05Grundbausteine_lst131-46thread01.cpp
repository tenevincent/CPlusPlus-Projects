#include <iostream>
void ausgabe(int a, int b, int c) {
    std::cout << a << ' ' << b << ' ' << c << '\n';
}
int zahl() {
    static int val = 0;
    return ++val;
}
int main() {
    ausgabe(zahl(), zahl(), zahl()); // in welcher Reihenfolge?
    //= 2 1
}

