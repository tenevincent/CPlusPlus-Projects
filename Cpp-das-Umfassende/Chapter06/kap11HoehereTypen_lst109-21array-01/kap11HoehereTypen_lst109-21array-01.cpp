#include <array>
#include <iostream>
using std::cout; using std::array; using std::string;
int main() {
    array<string, 7> wotag = { "Montag", "Dienstag",        // deklarieren
        "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag" };
    cout << "Die Woche beginnt mit " << wotag[0] << ".\n"; // Werte lesen
    //= Die Woche beginnt mit Montag.
    cout << "Sie endet mit " << wotag.at(6) << ".\n";      // sicheres Werte Lesen
    //= Sie endet mit Sonntag.
    /* nordisch? */
    wotag[5] = "Sonnenabend";                              // Werte ver?ndern
}

