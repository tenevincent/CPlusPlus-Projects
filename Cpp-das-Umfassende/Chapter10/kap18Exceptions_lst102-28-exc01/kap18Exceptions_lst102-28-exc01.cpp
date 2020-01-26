#include <iostream>            // cout, cerr
#include <vector>
#include <string>
#include <fstream>             // ifstream
#include <stdexcept>           // invalid_argument
using std::vector; using std::string; using std::cout; using std::ifstream;

size_t zaehleWoerter(const string& filename) { // 0 oder gr??er
    std::ifstream file{};      // unge?ffnet erzeugen
    // anmelden f?r Exceptions:
    file.exceptions(ifstream::failbit | ifstream::badbit);
    file.open(filename);       // k?nnte eine Exception ausl?sen
    size_t count = 0;
    string wort;
    file.exceptions(ifstream::badbit); // EOF keine Exception mehr
    while (!file.eof()) {       // noch nicht am Ende?
        file >> wort;   ++count;
    }
    return count - 1;            // @MINUS@1: am EOF wurde noch ein Wort gelesen
}
void process(const vector<string>& args) {
    if (args.size() == 0) { // process erwartet Parameter
        throw std::invalid_argument{ "Kommandozeilenarg. fehlt" }; // ausl?sen
    }
    else {
        for (const string filename : args) {
            cout << filename << ": " << zaehleWoerter(filename) << std::endl;
        }
    }
}
int main(int argc, const char* argv[]) {
    try {                                      // Block mit Fehlerbehandlungen
        process(
            vector<string>{argv + 1, argv + argc}); // const char*[] nach vector<string>
        return 0;
    }
    catch (std::exception & exc) {  // Fehlerbehandlung
        std::cerr << "Es trat ein Fehler auf: " << exc.what() << "\n";
        return 1;
    }
}

