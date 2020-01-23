#include <iostream>   // cin, cout f?r Eingabe und Ausgabe

void eingabe(unsigned& gebTag_,
    unsigned& gebMonat_,
    unsigned& gebJahr_,
    unsigned long long& steuernummer_,
    double& koerperlaenge_)
{
    /* Eingaben noch ohne gute Fehlerbehandlung... */
    std::cout << "Geb.-Tag: "; std::cin >> gebTag_;
    std::cout << "Geb.-Monat: "; std::cin >> gebMonat_;
    std::cout << "Geb.-Jahr: "; std::cin >> gebJahr_;
    std::cout << "Steuernummer: "; std::cin >> steuernummer_;
    std::cout << "Koerperlaenge: "; std::cin >> koerperlaenge_;
}
int main() {
    /* Daten */
    unsigned gebTag_ = 0;
    unsigned gebMonat_ = 0;
    unsigned gebJahr_ = 0;
    unsigned long long steuernummer_ = 0;
    double koerperlaenge_ = 0.0;
    /* Eingabe */
    eingabe(gebTag_, gebMonat_, gebJahr_, steuernummer_, koerperlaenge_);
    /* Berechnungen */
    // ...
}

