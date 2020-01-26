#include <string> //#
#include <iostream> // cout, ostream //#
using std::string; using std::cout;//#
// Ausschnitt ...
struct Person {//#
    string name_;//#
    int alter_;//#
    string ort_;//#
 

    std::ostream& drucke(std::ostream& os) {
        return os << name_ << " (" << alter_ << ") aus " << ort_;
    }
 
    friend std::ostream& operator<<(std::ostream& os, const Person& dt);

};


std::ostream& operator<<(std::ostream& os, Person& p) {
    return p.drucke(os);
}



int main() {
    Person paul{ "Paul", 23, "Dresden" };
    cout << "Sie sind " << paul << ", richtig?\n";
    //= Sie sind Paul (23) aus Dresden, richtig?
}

 
