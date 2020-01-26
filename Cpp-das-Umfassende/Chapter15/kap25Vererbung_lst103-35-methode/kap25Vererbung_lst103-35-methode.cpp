#include <iostream>
struct Basis {
public:
    int acht_ = 8;
    int wert() const { return acht_; }
    void print(std::ostream& os) const { os << wert() << "\n"; }
};
class Print : public Basis {
public:
    int neun_ = 9;
    void print(std::ostream& os) const { os << wert() << "\n"; }
};
class Wert : public Basis {
public:
    int zehn_ = 10;
    int wert() const { return zehn_; }
};
class Beides : public Basis {
public:
    int elf_ = 11;
    int wert() const { return elf_; }
    void print(std::ostream& os) const { os << wert() << "\n"; }
};

int main() {
    Basis ba{}; ba.print(std::cout);   // Basisaufruf
    //= 8
    Print pr{}; pr.print(std::cout);   // print ?berschrieben
    //= 8
    Wert we{}; we.print(std::cout);    // print aus Basis
    //= 8
    Beides be{}; be.print(std::cout);  // alles ?berschrieben
    //= 11
}

