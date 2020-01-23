#include <iostream>                                // f?r std::cin, std::cout, std::endl
#include <string>                                  // std::stoi

void berechne(int n) {                             // eine eigene Funktion
    using namespace std;                           // f?r std::cout und std::endl
    /* Teiler ausgeben */
    cout << "Teiler von " << n << " sind:\n";
    for (int teiler = 1; teiler <= n; ++teiler) {     // statt teiler=teiler+1
        if (n % teiler == 0)
            cout << teiler << ", ";
    }
    cout << endl;
}

int main(int argc, const char* argv[]) {           // Argumente f?r main
    using namespace std;
    /* Zahl ermitteln */
    int wert = 0;
    if (argc <= 1) {
        std::cout << "Geben Sie eine Zahl ein: ";
        std::cin >> wert;                          // In Variable wert lesen
        if (!cin) {                                 // pr?fen, ob lesen klappte
            return 1;                              // Fehler bei Benutzereingabe
        }
    }
    else {
        wert = std::stoi(argv[1]);
    }
    berechne(wert);                                // Funktionsaufruf
    return 0;
}

