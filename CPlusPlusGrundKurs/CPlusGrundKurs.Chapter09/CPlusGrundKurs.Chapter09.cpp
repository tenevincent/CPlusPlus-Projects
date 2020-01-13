// CPlusGrundKurs.Chapter09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Globale Deklarationen
void funktion();
int iwert = 1;

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




int main()
{
	int gesamt = 0;
	// Aufruf von funktion() aus Namensbereich VIP_Bereich
	VIP_Bereich::funktion();
	// Aufruf von funktion() aus Namensbereich User_Bereich
	User_Bereich::funktion();
	// Aufruf der globalen Funktion funktion() ...
	funktion(); // oder: ::funktion();
	// Zugriff auf den Wert iwert aus VIP_Bereich
	VIP_Bereich::iwert = 66;
	// Aufruf von funktion() aus Namensbereich VIP_Bereich
	VIP_Bereich::funktion();
	// Rechnung mit Werten aus mehreren Namensbereichen
	gesamt = VIP_Bereich::iwert +
		User_Bereich::iwert + ::iwert;
	std::cout << "Summe aus allen Namensbereichen : "
		<< gesamt << '\n';
	return 0;




}

// --- Definitionen ---
void funktion() {
	std::cout << "Globale funktion()       : "
		<< "Wert von iwert : " << iwert << std::endl;
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
