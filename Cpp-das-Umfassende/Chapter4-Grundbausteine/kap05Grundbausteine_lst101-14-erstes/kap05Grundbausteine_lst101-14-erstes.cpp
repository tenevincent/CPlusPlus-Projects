// kap05Grundbausteine_lst101-14-erstes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>                         // Module/Bibliotheken einbinden
int main()                                  // main() ist der Beginn des Programms
{
    int wert = 100;                         // Variable mit Anfangswert
    std::cout << "Teiler von " << wert << " sind:\n";    // Ausgabe von Text
    //= Teiler von 100 sind:
    for (int teiler = 1; teiler <= wert; teiler = teiler + 1) // Schleife von 1 bis 100
    {                                       // hier beginnt der Wiederholungsteil
        if (wert % teiler == 0)              // Test f?r eine bedingte Ausf?hrung
            std::cout << teiler << ", ";    // nur bei positivem Test
    }                                       // Ende der Schleife
    std::cout << "\n";                      // einmalige Ausgabe
    //= 1, 2, 4, 5, 10, 20, 25, 50, 100,
    return 0;                               // bedeutet in main() Programmende
}                                           // Ende von main()

