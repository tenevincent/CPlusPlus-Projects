#include "ChapterModule.h"
#include <string>

void ChapterModule::ShowListing01() {

	std::vector<int> ivec(10);
	std::cout << "Anzahl Elemente : " << ivec.size() << '\n';
	ivec[0] = 123;       // erstes Element
	ivec.at(1) = 234;    // zweites Element
	ivec.push_back(456); // letztes Element

	// Array um 2 Elemente vergrößern
	ivec.resize(ivec.size() + 2);

	std::cout << "Wert fuer 7. Element : ";
	std::cin >> ivec.at(6);
	if (std::cin.fail()) {
		std::cerr << "Fehler bei der Eingabe\n";
		return;
	}
	// Alle Elemente ausgeben
	for (size_t i = 0; i < ivec.size(); i++) {
		std::cout << ivec[i] << std::endl;
	}

}

void ChapterModule::ShowVectorStdLib02() {

	std::vector<int> ivec(10);
	std::cout << "Anzahl Elemente : " << ivec.size() << '\n';
	ivec[0] = 123;       // erstes Element
	ivec.at(1) = 234;    // zweites Element
	ivec.push_back(456); // letztes Element

	// Array um 2 Elemente vergrößern
	ivec.resize(ivec.size() + 2);

	std::cout << "Wert fuer 7. Element : ";
	std::cin >> ivec.at(6);
	if (std::cin.fail()) {
		std::cerr << "Fehler bei der Eingabe\n";
		return;
	}
	// Alle Elemente ausgeben
	for (auto elem : ivec) {
		std::cout << elem << std::endl;
	}

}


void ChapterModule::ShowCArray03() {

	constexpr int SIZE = 10;
	int iarr[SIZE] = { 0 };
	// Alle Elemente mit einem Wert initialisieren
	for (auto i = 0; i < SIZE; i++) {
		iarr[i] = 123;
	}
	// Einzelnen Wert einlesen
	std::cout << "Wert für 7. Element: ";
	std::cin >> iarr[6];
	if (std::cin.fail()) {
		std::cout << "Fehler bei der Eingabe\n";
		return;
	}
	// Alle Elemente ausgeben
	for (auto i = 0; i < SIZE; i++) {
		std::cout << iarr[i] << std::endl;
	}
}

void ChapterModule::ShowIterateCArray04() {

	constexpr int SIZE = 5;
	int iarr[SIZE] = { 0 };
	// Alle Elemente mit einem Wert initialisieren
	for (auto& elem : iarr) {
		elem = 123;
	}
	// Einzelnen Wert einlesen
	std::cout << "Wert für 7. Element: ";
	std::cin >> iarr[3];
	if (std::cin.fail()) {
		std::cout << "Fehler bei der Eingabe\n";
		return;
	}
	// Alle Elemente ausgeben
	for (auto elem : iarr) {
		elem = 111;
		std::cout << elem << std::endl;
	}


	for (auto elem : iarr) {
		std::cout << elem << std::endl;
	}
}

void ChapterModule::ShowCplusPlusString05() {

	std::string str1{ "String Nr. 1" };
	// Einfache Zuweisung ist möglich
	std::string str2 = str1;
	std::string str3{};

	// Ausgabe über std::cout
	std::cout << "str1: " << str1 << '\n';
	std::cout << "str2: " << str2 << '\n';
	// Komplette Zeile einlesen
	std::cout << "String eingeben: ";
	std::getline(std::cin, str3);  // Zeile einlesen
	std::cout << "Ihre Eingabe: " << str3 << '\n';
	// String str1 durch str3 ersetzen
	str1.assign(str3);
	std::cout << "str1: " << str1 << std::endl;
	// Anzahl der Zeichen im String ausgeben
	std::cout << "Zeichen in str1: " << str1.size() << '\n';
	// Maximal mögliche Größe
	std::cout << "Max. Zeichen für str1: " << str1.max_size()
		<< '\n';;
	// Strings aneinanderhängen
	str1.append(str2);
	std::cout << "str1: " << str1 << std::endl;

}