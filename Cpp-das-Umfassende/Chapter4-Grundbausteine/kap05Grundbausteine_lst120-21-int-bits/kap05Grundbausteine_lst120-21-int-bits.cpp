#include <iostream>
int main() {
    unsigned a = 0b1111'0000;       // 240
    unsigned b = 0b0011'1100;       // 60
    std::cout << (a | b) << "\n"; // Bit-Oder: 252, in Bits 1111'1100
    //= 252
    std::cout << (a & b) << "\n"; // Bit-Und: 48, in Bits 0011'0000
    //= 48
    std::cout << (a ^ b) << "\n"; // Exklusiv-Oder: 204, in Bits 1100'1100
    //= 204
    unsigned int c = 170;           // in Bits 0..(24x0)..0'1010'1010
    std::cout << (~c) << "\n";    // Inv.: 4294967125, Bits: 1..(24x1)..1'0101'0101
    //= 4294967125
}

