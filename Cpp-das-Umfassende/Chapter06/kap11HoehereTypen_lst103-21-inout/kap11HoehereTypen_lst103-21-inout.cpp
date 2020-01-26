#include <iostream>                      // cin, cout f?r Eingabe und Ausgabe
#include <string>
#include <array>
using std::cin; using std::cout;         // Abk?rzungen cin und cout

void eingabe(
    std::string& name,
    unsigned& gebTag,
    unsigned& gebMonat,
    unsigned& gebJahr,
    long long& steuernummer,
    std::array<int, 12>& monatseinkommen) // array ist ein Container
{
    /* Eingaben noch ohne gute Fehlerbehandlung... */
    cout << "Name: ";
    std::getline(cin, name);   // getline nimmt Eingabestrom und String
    if (name.length() == 0) {
        cout << "Sie haben einen leeren Namen eingegeben.\n";
        exit(1);
    }
    cout << "Geb.-Tag: "; cin >> gebTag;
    cout << "Geb.-Monat: "; cin >> gebMonat;
    cout << "Geb.-Jahr: "; cin >> gebJahr;
    cout << "Steuernummer: "; cin >> steuernummer;
    for (int m = 0; m < 12; ++m) {
        cout << "Einkommen Monat " << m + 1 << ": "; // mehrere Ausgaben
        cin >> monatseinkommen[m];                // Einlesen mit Operator
    }
    cout << std::endl;
}

int main() {
    std::string name{};
    unsigned tag = 0;
    unsigned monat = 0;
    unsigned jahr = 0;
    long long stNr = 0;
    std::array<int, 12> einkommen{};
    eingabe(name, tag, monat, jahr, stNr, einkommen);
    // ... Berechnungen ...
}

