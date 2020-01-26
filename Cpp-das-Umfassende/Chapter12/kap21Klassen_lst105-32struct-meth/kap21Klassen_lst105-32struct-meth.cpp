#include <string>
#include <iostream>
using std::string; using std::cout;
struct Person {
    string name_;
    int alter_;
    string ort_;
    
    //void drucke();      // Funktion als Methode des Typs

    void drucke() { // Name der Methode wird um Person:: erweitert
        cout << name_       // in einer Methode k?nnen Sie direkt auf Felder zugreifen
            << " (" << alter_ << ") aus " << ort_ << "\n";
    }

};

/*
void Person::drucke() { // Name der Methode wird um Person:: erweitert
    cout << name_       // in einer Methode k?nnen Sie direkt auf Felder zugreifen
        << " (" << alter_ << ") aus " << ort_ << "\n";
}
*/
int main() {
    Person otto{ "Otto", 45, "Kassel" };
    otto.drucke();      // Aufruf der Methode f?r eine Variable des Typs
    //= Otto (45) aus Kassel
}


