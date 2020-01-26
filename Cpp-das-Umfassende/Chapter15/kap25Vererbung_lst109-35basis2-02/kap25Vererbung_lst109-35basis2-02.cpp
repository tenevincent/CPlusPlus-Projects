#include <iostream> //#
using std::ostream; using std::cout; //#
struct Basis2 { //#
    int acht_ = 8; //#
    virtual int wert() const        //#
    {
        return acht_;
    } //#
    void print(ostream& os) const //#
    {
        os << wert() << "\n";
    } //#
}; //#
struct Wert2 : public Basis2 { //#
    int zehn_ = 10; //#
    virtual int wert() const override //#
    {
        return zehn_;
    } //#
}; //#
//... Basis2 und Wert2 wie gehabt ...
void ausgabe(const Basis2& x) {        // ?bergabe als Referenz
    x.print(cout);
}
int main() {
    Basis2 ba2{}; ausgabe(ba2); // gibt 8 aus
    //= 8
    Wert2 we2{}; ausgabe(we2);  // gibt 10 aus, denn das Objekt wird nicht kopiert
    //= 10
}

