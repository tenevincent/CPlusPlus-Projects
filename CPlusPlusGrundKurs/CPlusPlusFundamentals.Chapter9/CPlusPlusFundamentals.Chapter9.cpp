// CPlusPlusFundamentals.Chapter9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "xyz.h"


// Globale Deklarationen
void funktion();
int gWert = 1;

// Deklaration von Namensbereich VIP_Bereich
namespace VIP_Bereich {
    int iwert = 11;
    void funktion();
}

// Deklaration von Namensbereich User_Bereich
namespace User_Bereich {
    int iwert = 22;
    void funktion();
}



int iwert = 1234;


int main()
{


   
    xyz_funktion();
    iwert = 9876;

    xyz_funktion();

    return 1;





    int gesamt = 0;
    // Aufruf von funktion() aus Namensbereich VIP_Bereich
    VIP_Bereich::funktion();
    // Aufruf von funktion() aus Namensbereich User_Bereich
    User_Bereich::funktion();
    // Aufruf der globalen Funktion funktion() ...
    ::funktion(); // oder: ::funktion();
    // Zugriff auf den Wert iwert aus VIP_Bereich
    VIP_Bereich::iwert = 66;
    // Aufruf von funktion() aus Namensbereich VIP_Bereich
    VIP_Bereich::funktion();
    // Rechnung mit Werten aus mehreren Namensbereichen
    gesamt = VIP_Bereich::iwert +
        User_Bereich::iwert + ::gWert;
    std::cout << "Summe aus allen Namensbereichen : "
        << gesamt << '\n';
    return 0;
}

// --- Definitionen ---
void funktion() {
    std::cout << "Globale funktion()       : "
        << "Wert von iwert : " << gWert << std::endl;
}

void VIP_Bereich::funktion() {
    std::cout << "VIP_Bereich::funktion()  : "
        << "Wert von iwert : " << iwert << std::endl;
}

namespace User_Bereich {
    void funktion() {
        std::cout << "User_Bereich::funktion() : "
            << "Wert von iwert : " << iwert << std::endl;
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
