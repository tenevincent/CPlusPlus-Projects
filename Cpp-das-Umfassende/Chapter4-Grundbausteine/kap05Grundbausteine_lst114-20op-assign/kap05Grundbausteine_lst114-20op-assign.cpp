#include <iostream>
#include <bitset>                      // hilft bei der Ausgabe von Zahlen als Bitfolge
int main() {
    int a = 0;
    for (int idx = 0; idx < 8; idx++) {
        a <<= 2;                       // um zwei Bit nach links schieben: "...100"
        a |= 1;                        // unterstes Bit setzen: "...1"
    }
    std::cout << std::bitset<16>(a) << "\n"; // 01010101010101
    //= 0101010101010101
    std::cout << a << "\n";            // 21845
    //= 21845
}

