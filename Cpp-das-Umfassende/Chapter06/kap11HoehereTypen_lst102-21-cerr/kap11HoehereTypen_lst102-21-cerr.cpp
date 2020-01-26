// Rufen Sie dieses Programm zum Beispiel mit 'prog.exe > datei.txt' auf
#include <iostream>  // cout, cerr
int main() {
    std::cout << "Ausgabe nach cout\n";      // wird nach 'datei.txt' ausgegeben
    std::cerr << "Fehlermeldung!\n";         // erscheint trotzdem auf der Konsole
    std::cout << "Wieder normale Ausgabe\n"; // wieder in die Datei
}


