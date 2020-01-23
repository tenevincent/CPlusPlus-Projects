#include <iostream>
void ausgabe(int a, int b) {
    std::cout << a << ' ' << b << '\n';
}
int zahl() {
    static int val = 0;
    return ++val;
}
int main() {
    ausgabe(zahl(), zahl()); // in welcher Reihenfolge?
    //= 2 1
}

