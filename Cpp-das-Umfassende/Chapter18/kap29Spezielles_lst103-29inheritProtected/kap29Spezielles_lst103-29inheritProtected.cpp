// kap29Spezielles_lst103-29inheritProtected.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
using std::cout; using std::ostream;



class Base {
public:
    int xPublic = 1;
protected:
    int xProtected = 2;
private:
    int xPrivate = 3;
};
class DerivedPublic : public Base {
    // xPublic wird 'public'
    // xProtected wird 'protected'
    // xPrivate ist hier nicht sichtbar
};
class DerivedProtected : protected Base {
    // xPublic wird 'protected'
    // xProtected wird 'protected'
    // xPrivate ist hier nicht sichtbar
};
class DerivedPrivate : private Base { // oder wenn nichts angegeben
    // xPublic wird 'private'
    // xProtected wird 'private'
    // xPrivate ist hier nicht sichtbar
};


// ... wie zuvor ...
struct Normalfall : public DerivedPublic {
    void drucke() {
        cout << xPublic;
        cout << xProtected;
    }
};
struct Spezialfall : public DerivedPrivate {
    void drucke() {
#if 0 //#
        cout << xPublic;                  // kein Zugriff
        cout << xProtected;               // kein Zugriff
#endif //#
    }
};



// ... wie zuvor ...
int main() {
    // ?ffentlich erben
    DerivedPublic dpu{};
    cout << dpu.xPublic << '\n';        // Ausgabe: 1
    //= 1
#if 0 //#
    cout << dpu.xProtected << '\n'; // kein Zugriff von au?en
#endif //#
// gesch?tzt erben
    DerivedProtected dpt{};
#if 0 //#
    cout << dpt.xPublic << '\n';    // kein Zugriff von au?en
    cout << dpt.xProtected << '\n'; // kein Zugriff von au?en
#endif //#
// private erben
    DerivedPrivate dpv{};
#if 0 //#
    cout << dpv.xPublic << '\n';    // kein Zugriff von au?en
    cout << dpv.xProtected << '\n'; // kein Zugriff von au?en
#endif //#
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
