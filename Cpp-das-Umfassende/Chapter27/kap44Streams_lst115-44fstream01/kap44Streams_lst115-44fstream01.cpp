#include <fstream>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> // setw
#include <iostream>
#include <fstream>
#include <iostream>
using std::cout;

void datei_oeffnen();
void datei_zeilen_weisen_lesen();


int main() {

   // datei_oeffnen();

    datei_zeilen_weisen_lesen();


}


void datei_zeilen_weisen_lesen() {

    std::ifstream file("kap44Streams_lst115-44fstream01.cpp");
    if (!file) { /* Fehler */ cout << "ERR\n"; return ; }
    std::ofstream filecopy("backup.cpp");
    if (!filecopy) { /* Fehler */ cout << "ERR\n"; return ; }
    std::string puffer;
    while (getline(file, puffer)) {
        filecopy << puffer << std::endl;
        cout << puffer << std::endl;
    }
    if (file.eof()) {
        file.clear();
    }


}

void datei_schreiben() {
    std::ofstream file("data.dat");
    if (!file) {
        std::cout << "Konnte data.dat nicht öffnen\n";
        return ;
    }
    std::cout << "Bitte eine Ganzzahl eingeben: ";
    file << std::setw(10) << std::setfill('*') << 1234 << std::endl;

    if (file.is_open()) {
        file.close();
    }

}

void datei_oeffnen() {

    std::string name = "textfile.txt";
    std::ifstream file01;
    file01.open(name);
    if (file01.fail()) {
        std::cout << "Konnte " << name << " nicht oeffnen\n";
        //= Konnte textfile.txt nicht oeffnen
    }
    std::ofstream file02("data.dat");
    if (file02.good()) {
        std::cout << "data.dat geoeffnet bzw. erzeugt\n";
        //= data.dat geoeffnet bzw. erzeugt
    }
    std::fstream file03;
    file03.open("database.db");
    if (!file03) {
        std::cout << "Konnte database.db nicht oeffnen\n";
        //= Konnte database.db nicht oeffnen
    }
}



