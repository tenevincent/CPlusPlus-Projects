#include <string> //#
#include <iostream> //#
#include <iomanip>   //#
using std::cout; using std::setw; using std::string; //#
struct MeinWert { //#
    static int zaehler;              //#
    int nummer_;                     //#
    string name_;                    //#
    explicit MeinWert(string name) //#
        : nummer_{ ++zaehler }         //#
        , name_{ name }                //#
    { //#
        cout << setw(nummer_) << std::setfill('_') << "_" //#
            << "Konstruktor " << name_ << "\n"; //#
    } //#
    ~MeinWert() {                    //#
        cout << setw(nummer_) << std::setfill('_') << "_" //#
            << "Destruktor " << name_ << "\n"; //#
    } //#
}; //#
int MeinWert::zaehler = 0;           //#
//# ======================
void funktion(MeinWert paramWert) {
    std::cout << "(funktion)\n";
    MeinWert lokalWert{ "lokal" };
}

int main() {
    MeinWert mwert1{ "mwert1" };
    funktion(MeinWert{ "temp" });
    funktion(mwert1);
    {
        MeinWert mwert2{ "mwert2" };
    }
    //= _Konstruktor mwert1
    //= __Konstruktor temp
    //= (funktion)
    //= ___Konstruktor lokal
    //= ___Destruktor lokal
    //= __Destruktor temp
    //= (funktion)
    //= ____Konstruktor lokal
    //= ____Destruktor lokal
    //= _Destruktor mwert1
    //= _____Konstruktor mwert2
    //= _____Destruktor mwert2
    //= _Destruktor mwert1
}

