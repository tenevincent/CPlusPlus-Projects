#include <vector>
#include <string>
#include <iostream>
using std::string; using std::cout;

struct Person {
    string name_;
    int alter_;
    string ort_;
    // fungiert als Defaultkonstruktor:
    Person(string n = "N.N.", int a = 18, string o = "Berlin")
        : name_(n), alter_(a), ort_(o) {
    
        std::cout << "copy constructor" << std::endl;
    }
};

int main() {
    std::vector<Person> personen{}; // zun?chst leer
    personen.resize(5); // auf f?nf "leere" Personen erweitern
    cout << personen[3].ort_ << "\n"; // Ausgabe: Berlin
    //= Berlin

    return 1;
}


