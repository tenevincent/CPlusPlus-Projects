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
void ausgabe(Wert2 x) {         // abgeleitete Klasse als Wert
    x.print(cout);
}
int main() {
#if 0 //#
    Basis2 ba2{}; ausgabe(ba2); // ba2 kann nicht in Wert2 umgewandelt werden
#endif //#
    Wert2 we2{}; ausgabe(we2);  // gibt 10 aus
    //= 10
}

