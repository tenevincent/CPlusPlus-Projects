// kap25Vererbung_lst101-35-vererbung1-value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>   // setfill, setw
using std::ostream; using std::setfill; using std::setw;
class Value {
protected: // nicht ?ffentlich, nur f?r den eigenen und abgeleiteten Gebrauch
    int value_;
    const unsigned width_;
    Value(int v, unsigned w) // Konstruktor mit zwei Argumenten
        : value_{ v }, width_{ w } {}
public:
    ostream& print(ostream& os) const;
};
ostream& operator<<(ostream& os, const Value& rechts) {
    return rechts.print(os);
}
ostream& Value::print(ostream& os) const {
        return os << setfill('0') << setw(width_) << value_;
}

class Year : public Value {               // von Klasse Value ableiten
public:
    explicit Year(int v) : Value{ v, 4 } {
    

    } // Basisklasse initialisieren
};
class Month : public Value {
public:
    explicit Month(int v) : Value{ v, 2 } {}
};
struct Day : public Value {               // class-public entspricht struct
    explicit Day(int v) : Value{ v, 2 } {}
};




int main()
{
    Year thisvalue(1);


    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
