#include <string>
using std::string;
struct Person {
    string name_;
    int alter_;
    string ort_;
    Person();                          // Konstruktor ohne Argumente
    Person(string n, int a, string o); // Konstruktor mit drei Argumenten
    Person(string n, int a);           // Konstruktor mit zwei Argumenten
    Person(string n);                  // Konstruktor mit einem Argument
};
Person::Person()
    : name_{ "kein Name" }, alter_{ -1 }, ort_{ "kein Ort" } { }
Person::Person(string n, int a, string o)
    : name_{ n }, alter_{ a }, ort_{ o } { }
Person::Person(string n, int a)
    : name_{ n }, alter_{ a }, ort_{ "kein Ort" } { }
Person::Person(string n)
    : name_{ n }, alter_{ -1 }, ort_{ "kein Ort" } { }


