// CPlusGrundKurs.Chapter10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CPlusGrundKurs.Chapter10.h"
#include <vector>
#include <string>

struct artikel {
	int sachnummer;
	std::string bezeichnung;
	int anzahl;

	void output(const artikel& artRef) {
		std::cout << artRef.sachnummer << std::endl;
		std::cout << artRef.bezeichnung << std::endl;
		std::cout << artRef.anzahl << std::endl;
	}


	void output02(const artikel *artRef) {
		std::cout << artRef->sachnummer << std::endl;
		std::cout << artRef->bezeichnung << std::endl;
		std::cout << artRef->anzahl << std::endl;
	}

};




void showListing01();
void showListing02();
void showListing03();
void showListing04();
 


int main()
{

	enum class wochentag { SO = 7, MO = 1, DI, MI, DO, FR, SA };

	wochentag wtag01{ wochentag::FR }; // C++11-Style
	wochentag wtag02 = wochentag::DI;
	// int wtag03 = wochentag::MO; // Fehler in C++11!!!
	int wtag04 = static_cast<int>(wochentag::MO);

	if (wtag01 == wochentag::FR) {
		// Endlich Wochenende ...
		std::cout << "Endlich Wochenende ..." << std::endl;
	}

	switch (wtag02) {
	case wochentag::MO: std::cout << "Montag" << std::endl; break;
	case wochentag::DI: std::cout << "Dienstag" << std::endl; break;
	case wochentag::MI: std::cout << "Mittwoch" << std::endl; break;
	case wochentag::DO: std::cout << "Donnerstag" << std::endl; break;
	case wochentag::FR: std::cout << "Freitag" << std::endl; break;
	case wochentag::SA: std::cout << "Samstag" << std::endl; break;
	case wochentag::SO: std::cout << "Sonntag" << std::endl; break;
	}

	// showListing01();

	 // showListing02();

	showListing04();


	return 0;
}

void showListing01()
{

	int *dynarray = nullptr;
	size_t elements = 0;
	std::cout << "Wie viele Werte wollen Sie speichern? ";
	std::cin >> elements;
	if (std::cin.fail()) {
		std::cerr << "Fehler bei der Eingabe\n";
		return;
	}



	// Speicher reservieren
	dynarray = new int [elements] {0};


	std::cout << "size of the array is " << sizeof(dynarray) / sizeof(dynarray[0]) << std::endl;



	for (auto i = 0; i < elements; ++i) {
		std::cout << i + 1 << ".Wert : ";
		std::cin >> dynarray[i];
		if (std::cin.fail()) {
			std::cerr << "Fehler bei der Eingabe\n";
			break;
		}
	}
	int sum = 0;
	std::cout << "Die Summe aller Werte lautet: ";
	for (auto i = 0; i < elements; i++) {
		sum += dynarray[i];
	}
	std::cout << sum << std::endl;
	// Speicher wieder freigeben
	delete[] dynarray;
	dynarray = nullptr;

}






void showListing02() {

	int elements = 0;
	std::cout << "Wie viele Werte wollen Sie speichern? ";
	std::cin >> elements;
	if (std::cin.fail()) {
		std::cerr << "Fehler bei der Eingabe\n";
		return;
	}
	// Speicher reservieren
	std::unique_ptr<int[]> dynarray(new int [elements] {0});
	for (int i = 0; i < elements; i++) {
		std::cout << i + 1 << ".Wert : ";
		std::cin >> dynarray[i];
		if (std::cin.fail()) {
			std::cerr << "Fehler bei der Eingabe\n";
			break;
		}
	}
	int sum = 0;
	std::cout << "Die Summe aller Werte lautet: ";
	for (int i = 0; i < elements; i++) {
		sum += dynarray[i];
	}
	std::cout << sum << std::endl;
}


void showListing03() {
	std::vector<artikel> verschiedenes(10);

	verschiedenes.at(0).sachnummer = 2345;
	verschiedenes.at(0).bezeichnung = "Seifenlauge";
	verschiedenes.at(0).anzahl = 5;

	std::cout << "Sachnummer  : ";
	std::cin >> verschiedenes.at(1).sachnummer;
	std::cout << "Bezeichnung : ";
	std::cin >> verschiedenes.at(1).bezeichnung;
	std::cout << "Anzahl      : ";
	std::cin >> verschiedenes.at(1).anzahl;


	// Ausgabe ...
	std::cout << verschiedenes.at(0).sachnummer << "(SN) : "<< std::endl;
	std::cout << verschiedenes.at(0).bezeichnung << " -> " << std::endl;
	std::cout << verschiedenes.at(0).anzahl << " St." << std::endl;

	std::cout << "---------------------" << "  " << std::endl;
	std::cout << "---------------------" << "  " << std::endl;

	std::cout << verschiedenes.at(1).sachnummer << "(SN) : " << std::endl;
	std::cout << verschiedenes.at(1).bezeichnung << " -> " << std::endl;
	std::cout << verschiedenes.at(1).anzahl << " St." << std::endl;
}


void showListing04() {
	artikel pulver{ 1234, "Eisenpulver 0.3mm (1kg)", 10 };
	pulver.output(pulver);

	std::unique_ptr<artikel> artikelPtr(new artikel{ 1234, "Eisenpulver 0.3mm (1kg)", 10 });

	artikelPtr->output02(new artikel{ 1234, "Eisenpulver 0.3mm (1kg)", 10 });
 
  


}