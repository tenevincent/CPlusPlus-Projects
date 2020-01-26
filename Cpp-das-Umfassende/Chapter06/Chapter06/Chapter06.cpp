#include <iostream>   // cin, cout f?r Eingabe und Ausgabe
#include <string>     // Sie ben?tigen diesen Header der Standardbibliothek




void eingabe(
    std::string& name,            // Als Parameter
    unsigned& gebJahr)
{
    /* Eingaben noch ohne gute Fehlerbehandlung... */
    std::cout << "Name: ";
    std::getline(std::cin, name); // getline liest in einen String ein
    if (name.length() == 0) {      // length ist eine Methode von string
        std::cout << "Sie haben einen leeren Namen eingegeben.\n";
        exit(1);
    }
    std::cout << "Geb.-Jahr: ";
    std::cin >> gebJahr;

    
}


int main() {
    /* Daten */
    std::string name;             // definiert und initialisiert eine string-Variable
    unsigned gebJahr = 0;
    /* Eingabe */
    eingabe(name, gebJahr);
    /* Berechnungen */
    // ...
}