
#include <iostream>
#include "chapter04.h"



void chapter04::listing01() {

	int ival1 = 0, ival2 = 0, ival3 = 0;
	int sum = 0, mul = 0, rest = 0;

	std::cout << "Rechnen mit Ganzzahlen\n";
	std::cout << "Wert 1: ";
	std::cin >> ival1;
	std::cout << "Wert 2: ";
	std::cin >> ival2;
	std::cout << "Wert 3: ";
	std::cin >> ival3;
	// Alles addieren
	sum = ival1 + ival2 + ival3;
	std::cout << ival1 << "+" << ival2 << "+" << ival3
		<< "=" << sum << '\n';
	// Alles multiplizieren
	mul = ival1 * ival2 * ival3;
	std::cout << ival1 << "*" << ival2 << "*" << ival3
		<< "=" << mul << '\n';
	// Dividieren mit Rest
	rest = (ival1 * ival2) % ival3;
	std::cout << "(" << ival1 << "*" << ival2 << ") / "
		<< ival3 << "=" << (ival1 * ival2) / ival3
		<< " (Rest: " << rest << ")\n";

}


void chapter04::listing02() {
	const double pi = 3.141592;
	double V = 0.0, r = 0.0, h = 0.0;
	std::cout << "Volumenberechnung (Zylinder)\n";
	std::cout << "Radius eingeben: ";
	std::cin >> r;
	if (std::cin.fail()) {
		std::cerr << "Fehler bei der Eingabe\n";
		return;
	}
	std::cout << "Hoehe eingeben : ";
	std::cin >> h;
	if (std::cin.fail()) {
		std::cerr << "Fehler bei der Eingabe\n";
		return;
	}
	V = r * r * pi * h;
	std::cout << "Das Volumen betraegt " << V << std::endl;
}

void chapter04::listing03() {
	int ival = 1;
	std::cout << "ival = " << ival << '\n';
	ival++;
	std::cout << "ival = " << ival << '\n';
	std::cout << "ival = " << ival++ << '\n';
	std::cout << "ival = " << ival << '\n';
	std::cout << "ival = " << ++ival << std::endl;
}


void chapter04::listing04() {
	signed int siwert = -100;
	int iwert = 100;

	// iwert wird zu unsigned int konvertiert
	unsigned int uiwert1 = iwert;
	// undefiniert – compilerabhängig
	unsigned int uiwert2 = siwert;
	// Ok, iwert speichert signed int-Wert
	int iwert2 = siwert;
	// undefiniert – compilerabhängig
	int iwert3 = 4294967290;
	// Ok
	unsigned int uiwert3 = 4294967290;

	std::cout << "siwert = " << siwert << '\n';
	std::cout << "iwert  = " << iwert << '\n';
	std::cout << "uiwert1= " << uiwert1 << '\n';
	std::cout << "uiwert2= " << uiwert2 << '\n';
	std::cout << "iwert2 = " << iwert2 << '\n';
	std::cout << "iwert3 = " << iwert3 << '\n';
	std::cout << "uiwert3= " << uiwert3 << std::endl;

}



void chapter04::listing05() {
	int iwert1 = 100;
	int iwert2 = 0;
	int iwert3 = -1;

	// int->bool wird nach true konvertiert
	bool bwert1 = iwert1;
	// int->bool wird nach false konvertiert
	bool bwert2 = iwert2;
	// int->bool wird nach true konvertiert
	bool bwert3 = iwert3;
	std::cout << "1==true/0==false" << '\n';
	std::cout << bwert1 << " " << bwert2 << " " << bwert3 << std::endl;

}


void chapter04::listing06() {
	float fwert = 3.14567;
	// Gleitkomma-Integral-Umwandlung -> aus 3.14567 wird 3
	int iwert = fwert;

	std::cout << "fwert = " << fwert << '\n';
	std::cout << "iwert = " << iwert << std::endl;

}


void chapter04::listing07() {

	double dval = 3.14;
	int ival{ (int)dval };          // Fehler !!! Narrowing

	short sval1{ 32767 };
	short sval2{ sval1 + 1 };  // Fehler !!! Narrowing

	long lval = { sval1 + 1 };  // OK!

	std::cout << dval << '\n';
	std::cout << ival << '\n';
	std::cout << sval1 << '\n';
	std::cout << sval2 << '\n';
	std::cout << lval << std::endl;
}



void chapter04::listing08() {

	double dwert = 9.1;
	// explizite Typumwandlung von double nach int
	int iwert = static_cast<int>(dwert);

	// explizite Typumwandlung von int nach float
	float fwert = static_cast<float>(iwert);

	// Konvertiert das Ergebnis in einen int-Wert
	int idoppelt = static_cast<int>(dwert * dwert);

	double dval = 3.14;
	// Typenwumwandlungsbeschränkung aufheben
	int ival{ static_cast<int>(dval) };

	// Mit auto geht es auch
	int aval{ static_cast<int>(dval) };

	std::cout << "dwert    = " << dwert << '\n';
	std::cout << "iwert    = " << iwert << '\n';
	std::cout << "fwert    = " << fwert << '\n';
	std::cout << "dwert    = " << dwert << '\n';
	std::cout << "idoppelt = " << idoppelt << '\n';
	std::cout << "dval     = " << dval << '\n';
	std::cout << "ival     = " << ival << std::endl;
	std::cout << "aval     = " << aval << std::endl;
}