#include <iostream>  // istream, ostream, cout
class Num {
    int val_ = 0;
public:
    int& operator*();  // Dereferenzieren: Zugriff auf den Wert direkt erhalten
    const int& operator*() const; // Dereferenzieren: Lesezugriff auf den Wert
    Num() {}
    explicit Num(int value) : val_{ value } {}
    // einstellige Operatoren
    Num& operator++(); // Pre-Inkrement
    Num& operator--(); // Pre-Dekrement
    Num operator+();   // Positiv
    Num operator-();   // Negieren
    Num operator~();   // bitweises Invertieren
    // zweistellige Operatoren
    // - zusammengesetzte Zuweisungen, arithmetisch
    Num& operator+=(const Num& re) { val_ += *re; return *this; }
    Num& operator-=(const Num& re) { val_ -= *re; return *this; }
    Num& operator*=(const Num& re) { val_ *= *re; return *this; }
    Num& operator/=(const Num& re) { val_ /= *re; return *this; }
    Num& operator%=(const Num& re) { val_ %= *re; return *this; }
    // - zusammengesetzte Zuweisungen, bitweise
    Num& operator|=(const Num& re) { val_ |= *re; return *this; }
    Num& operator&=(const Num& re) { val_ &= *re; return *this; }
    Num& operator^=(const Num& re) { val_ ^= *re; return *this; }
    Num& operator<<=(int n) { val_ <<= n; return *this; }
    Num& operator>>=(int n) { val_ >>= n; return *this; }
    // - Variation zusammengesetzter Zuweisungen, f?r einfachere Bedienung
    Num& operator+=(int re) { val_ += re; return *this; }
    Num& operator-=(int re) { val_ -= re; return *this; }
    // zweistellige Operatoren, mit Call-by-Value f?r den ersten Parameter
    //   und die die zusammengesetzte Zuweisung zu Hilfe nehmen
    // - Arithmetik
    friend Num operator+(Num li, const Num& re) { return li += re; }
    friend Num operator-(Num li, const Num& re) { return li -= re; }
    friend Num operator*(Num li, const Num& re) { return li *= re; }
    friend Num operator/(Num li, const Num& re) { return li /= re; }
    friend Num operator%(Num li, const Num& re) { return li %= re; }
    // - bitweise
    friend Num operator|(Num li, const Num& re) { return li |= re; }
    friend Num operator&(Num li, const Num& re) { return li &= re; }
    friend Num operator^(Num li, const Num& re) { return li ^= re; }
    // - Vergleiche
    // - ... fundamental f?r Standardcontainer und -algorithmen
    friend bool operator<(const Num& li, const Num& re) { return *li < *re; }
    friend bool operator==(const Num& li, const Num& re) { return *li == *re; }
    // - ... erweiterte Vergleiche
    friend bool operator>(const Num& li, const Num& re) { return *li > * re; }
    friend bool operator<=(const Num& li, const Num& re) { return *li <= *re; }
    friend bool operator>=(const Num& li, const Num& re) { return *li >= *re; }
    friend bool operator!=(const Num& li, const Num& re) { return *li != *re; }
    // - Ein- und Ausgabe
    friend std::ostream& operator<<(std::ostream& os, const Num& arg);
    friend std::istream& operator>>(std::istream& is, Num& arg);
};
// einstellige Operatoren
Num& Num::operator++() { ++val_; return *this; }
Num& Num::operator--() { --val_; return *this; }
Num Num::operator+() { return Num{ val_ }; }
Num Num::operator-() { return Num{ -val_ }; }
Num Num::operator~() { return Num{ ~val_ }; }
int& Num::operator*() { return val_; }
const int& Num::operator*() const { return val_; }
// Ein- und Ausgabe
std::ostream& operator<<(std::ostream& os, const Num& arg) { return os << *arg; }
std::istream& operator>>(std::istream& is, Num& arg) { return is >> *arg; }

int main() {
    using std::cout;
    Num a{ 1 };
    *a = 7;                              // operator* liefert auch int&
    a += Num{ 3 };                         // Inkrement mit Num
    cout << (++(++a)) << "\n";       // Ausgabe: 12
    //= 12
    a -= 2;                              // Variation mit int
    cout << --(--a) << "\n";             // Ausgabe: 8
    //= 8
    Num b{ 99 };
    cout << (a < b ? "ja\n" : "xxx\n");    // Ausgabe: ja
    //= ja
    cout << (a > b ? "xxx\n" : "nein\n");  // Ausgabe: nein
    //= nein
    b /= Num{ 3 };          // b: 33
    cout << b << "\n";  //#
    //= 33
    b %= Num{ 10 };         // b: 3
    cout << b << "\n"; //#
    //= 3
    b <<= 4;              // b: 48
    cout << b << "\n"; //#
    //= 48
    b >>= 2;              // b: 12
    cout << b << "\n"; //#
    //= 12
    Num c = b / Num{ 3 } +a * Num{ 2 }; // c: 20
    cout << c << "\n"; //#
    //= 20
}
























