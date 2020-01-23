#include <iostream>                     // cout
int main(int argc, const char* argv[]) {
    bool mitParametern = argc > 1;      // Vergleichsergebnis zwischengespeichert
    if (mitParametern) {                 // ... und verwendet
        std::cout << "Sie haben das Programm mit Parametern aufgerufen.\n";
    }
    return 0;
    (void)argv; //# unused
}

