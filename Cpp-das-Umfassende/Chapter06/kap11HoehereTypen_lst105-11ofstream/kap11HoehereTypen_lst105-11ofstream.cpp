#include <fstream>
#include <iostream>
int main(int argc, char* argv[]) {

    
    std::ofstream meineAusgabe{ "output1.txt" };
    meineAusgabe << "Zeile 1\n";
    meineAusgabe << "Zeile 2\n";
    meineAusgabe << "Zeile 3\n";
    meineAusgabe << "Zeile 4\n";
    meineAusgabe << "Zeile 5\n";


    std::string wert;
    std::ifstream meineEingabe2{ "output1.txt" };
    meineEingabe2 >> wert;

    std::cout << wert << std::endl;
  
    std::ifstream meineEingabe3{ "output1.txt" };
    if (!meineEingabe3) {
        std::cerr << "Fehler beim ?ffnen der Datei!\n";
    }
    else {
        meineEingabe3 >> wert;
    }
    std::cout << wert << std::endl;

}

