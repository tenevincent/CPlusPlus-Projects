#include <iostream>      // cout
#include <iomanip>       // setprecision
#include <cmath>         // fabs
using std::cout;         // cout als Abk?rzung f?r std::cout
int main() {
    cout << std::fixed << std::setprecision(25);  // f?r besser lesbare Ausgabe
    // 0.1 und 0.01 kann double nicht exakt speichern
    double x = 0.1 * 0.1;
    cout << "0.1*0.1: " << x << "\n";
    // Ausgabe: 0.1*0.1: 0.0100000000000000019428903
    if (x == 0.01) {      // vergleichen Sie double niemals mit ==
        cout << "ja! x == 0.01" << "\n";
    }
    else {
        cout << "Oh-oh! x != 0.01" << "\n";      // Sie sehen diese Ausgabe
    }
    //= 0.1*0.1: 0.0100000000000000019428903
    //= Oh-oh! x != 0.01
    // Achtung vor allem beim Vergleich mit 0.0
    double null = x - 0.01;
    cout << "null: " << null << "\n";
    // Ausgabe: null: 0.0000000000000000017347235
    if (std::fabs(null) < 0.00000001) {           // gegen ein "Epsilon"
        cout << "ja! null ist nahe 0.0" << "\n"; // Sie sehen diese Ausgabe
    }
    else {
        cout << "Oh-oh! null nicht nahe 0.0" << "\n";
    }
    //= null: 0.0000000000000000017347235
    //= ja! null ist nahe 0.0
    // Br?che von 2er-Potenzen sind weniger kritisch
    double y = 0.5 * 0.5;
    cout << "0.5*0.5: " << y << "\n";
    // Ausgabe: 0.5*0.5: 0.2500000000000000000000000
    if (y == 0.25) {    // hier klappt der gef?hrliche Vergleich ausnahmsweise
        cout << "ja! y == 0.25" << "\n";         // Sie sehen diese Ausgabe
    }
    else {
        cout << "Oh-oh! y != 0.25" << "\n";
    }
    //= 0.5*0.5: 0.2500000000000000000000000
    //= ja! y == 0.25
    //
    return 0;
}






