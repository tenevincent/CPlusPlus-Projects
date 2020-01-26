#include <iostream>

using std::ostream; using std::cout;
struct Basis2 {
    int acht_ = 8;
    virtual int wert() const          // virtuelle Methode
    {
        return acht_;
    }
    void print(ostream& os) const
    {
        os << wert() << "\n";
    }
};

struct Wert2 : public Basis2 {
    int zehn_ = 10;
    virtual int wert() const override // ?berschreiben
    {
        return zehn_;
    }
};

int main() {
    Wert2 we2{}; we2.print(cout);     // verwenden
    //= 10
}


