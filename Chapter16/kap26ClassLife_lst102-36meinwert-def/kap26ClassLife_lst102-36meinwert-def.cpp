#include <string>
#include <iostream>
#include <iomanip>   // setw
using std::cout; using std::setw; using std::string;
struct MeinWert {
	static int zaehler;              // static: existiert nur einmal f?r alle Instanzen
	int nummer_;                     // Einr?cktiefe dieser Instanz f?r die Ausgabe
	string name_;                    // Name dieser Instanz f?r die Ausgabe
	explicit MeinWert(string name)
		: nummer_{ ++zaehler }         // Z?hler f?r Einr?cktiefe pro Instanz hochz?hlen
		, name_{ name }                // Name des Objekts f?r Ausgabe merken
	{
		cout << setw(nummer_) << " " // nummer_ verwenden f?r Einr?ckungstiefe
			<< "Konstruktor " << name_ << "\n"; // Instanzname ausgeben
	}
	~MeinWert() {                    // Destruktor
		cout << setw(nummer_) << " "
			<< "Destruktor " << name_ << "\n";
	}
};
int MeinWert::zaehler = 0;           // Initialisierung der statischen Klassenvariablen


void funktion(const MeinWert& paramRef) {
	MeinWert lokalWert{ "lokal" };
	(void)paramRef;//#
}

int main() {
	MeinWert mwert1{ "mwert1" };
	funktion(MeinWert{ "temp" });
	funktion(mwert1);
	{
		MeinWert mwert2{ "mwert2" };
		(void)mwert2;//#
	}
	(void)mwert1;//#
}






