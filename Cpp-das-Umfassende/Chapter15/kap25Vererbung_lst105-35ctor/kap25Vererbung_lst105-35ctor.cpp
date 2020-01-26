class Base {
public:
    Base() {}                 // null-Argument-Konstruktor
    explicit Base(int i) {}   // ein Argument
    Base(int i, int j) {}     // zwei Argumente
    void func() {};           // Methode
};
class Derived : public Base { // kein eigener Konstruktor

    using Base::Base;

};
int main() {
    Base b0{};                // okay, null-Argument-Konstruktor
    Base b1{ 12 };              // okay, ein Argument
    Base b2{ 6,18 };            // okay, zwei Argumente
    Derived d0{};             // okay, Compiler generiert Default-Konstruktor
    d0.func();                // okay, Methode wird geerbt
#if 1                         //#
    Derived d1{ 7 };            // Fehler: kein Konstruktor f?r ein Argument definiert
    Derived d2{ 3,13 };         // Fehler: kein Konstruktor f?r zwei Argumente definiert
#endif                        //#
}


