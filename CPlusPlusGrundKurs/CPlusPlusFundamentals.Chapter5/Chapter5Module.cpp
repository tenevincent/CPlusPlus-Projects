#include "Chapter5Module.h"

void Chapter5Module::evaluateListing01() {
	int ival = 0;
	std::cout << "Bitte eine Ganzzahl eingeben: ";
	std::cin >> ival;
	if (std::cin.fail()) {
		// Code, wenn Fehler bei der Eingabe
		std::cout << "Es wurde keine Zahl eingegeben\n";
	}
	std::cout << "Nach der if-Verzweigung\n";
}

void Chapter5Module::evaluateListing02() {

	int ival = 0;
	std::cout << "Bitte eine Ganzzahl eingeben: ";
	std::cin >> ival;
	if (std::cin.fail()) {
		// Code, wenn Fehler bei der Eingabe
		std::cout << "Es wurde keine Zahl eingegeben\n";
	}
	else {
		std::cout << "Ihre Eingabe: " << ival << std::endl;
	}
	std::cout << "Nach der if-Verzweigung\n";
}

void Chapter5Module::evaluateListing03() {

	int ival = 0;
	std::cout << "Bitte eine Ganzzahl ungleich 0 eingeben: ";
	std::cin >> ival;
	if (std::cin.fail()) {
		// Code, wenn Fehler bei der Eingabe
		std::cout << "Es wurde keine Zahl eingegeben\n";
	}
	else if (ival != 0) {
		std::cout << "Ihre Eingabe: " << ival << std::endl;
	}
	else {
		std::cout << "0 ist hier nicht erlaubt\n";
	}
	std::cout << "Nach der if-Verzweigung\n";
}


void Chapter5Module::evaluateListing04() {

	int val1 = 0, val2 = 0;

	std::cout << "Bitte 1. Ganzzahl: ";
	std::cin >> val1;
	if (std::cin.fail()) {
		std::cout << "Fehler bei der Eingabe\n";
		return;
	}
	std::cout << "Bitte 2. Ganzzahl: ";
	std::cin >> val2;
	if (std::cin.fail()) {
		std::cout << "Fehler bei der Eingabe\n";
		return;
	}
	int max = (val1 > val2) ? val1 : val2;
	std::cout << max << " ist der groessere Wert" << std::endl;
}


void Chapter5Module::evaluateListing05() {
	using namespace std;

	int ival1 = 0, ival2 = 0;
	cout << "1. Ganzzahl : ";
	cin >> ival1;
	cout << "2. Ganzzahl : ";
	cin >> ival2;

	if ((ival1 > 0) || (ival2 > 0)) {
		// mindestens ein Ausdruck ist wahr – true
		cout << "Mindestens einer der beiden Wert ist groesser als 0." << endl;
	}
	else {
		// keiner der Ausdrücke ist wahr – false
		cout << "Beide Werte sind kleiner/gleich 0." << endl;
	}
}

void Chapter5Module::evaluateListing07() {


	int choice = 0;
	std::cout << "Umrechnen von Strecken\n";
	std::cout << "-1- inch (Zoll)\n";
	std::cout << "-2- foot\n";
	std::cout << "-3- yard\n";
	std::cout << "-4- mile\n";
	std::cout << "Ihre Wahl bitte : ";
	std::cin >> choice;
	if (std::cin.fail()) {
		std::cerr << "Fehler bei der Eingabe\n";
		return;  // Programm beenden
	}
	double m = 0.0;
	std::cout << "Strecke in Meter: ";
	std::cin >> m;
	if (std::cin.fail()) {
		std::cerr << "Fehler bei der Eingabe\n";
		return;  // Programm beenden
	}
	std::cout << "Ihre Wahl ist ";
	switch (choice) {
	case 1:
		std::cout << m << " meter = " << m / 0.0254 << " inch\n";
		break;
	case 2:
		std::cout << m << " meter = " << m / 0.3048 << " foot\n";
		break;
	case 3:
		std::cout << m << " meter = " << m / 0.9144 << " yard\n";
		break;
	case 4:
		std::cout << m << " meter = " << m / 1609.344 << " mile\n";
		break;
	default:
		std::cout << "\nFehler bei der Auswahl !\n";
	}

}

void Chapter5Module::evaluateListing11() {


	int ival = 0;
	while (true) {
		std::cout << "Bitte eine Ganzzahl: ";
		std::cin >> ival;
		if (std::cin.good()) {
			std::cout << ival << " -> (Zahl ok)\n";
		}
		else {
			std::cerr << "Fehler bei der Eingabe\n";
			break;
		}
	}
	std::cout << "Programmende erreicht!\n";
}