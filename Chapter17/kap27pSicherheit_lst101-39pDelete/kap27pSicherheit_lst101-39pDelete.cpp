// kap27pSicherheit_lst101-39pDelete.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <memory>           // unique_ptr, shared_ptr


struct Typ {
    char* data_;             // roher Zeiger kann f?r unklare Besitzverh?ltnisse sorgen
    Typ(int n) : data_(new char[n]) {}
    ~Typ() { delete[] data_; }           // den Destruktor ben?tigen Sie

    Typ(const Typ&) = delete;            // keine Kopie zulassen
    Typ& operator=(const Typ&) = delete; // keine Zuweisung bitte
    Typ(Typ&&) = delete;                 // kein Verschieben
    Typ& operator=(Typ&&) = delete;      // kein Verschiebeoperator
};




struct Typ1 {               // automatische komplette Kopie der Ressource
    std::vector<char> data_;
    Typ1(int n) : data_(n) {}
};
struct Typ2 {               // Kopie untersagt, Verschieben m?glich
    std::unique_ptr<int[]> data_;
    Typ2(int n) : data_(new int[n]) {}
};
struct Typ3 {               // Kopie erlaubt, Ressource wird dann sauber geteilt
    std::shared_ptr<Typ1> data_;
    Typ3(int n) : data_(std::make_shared<Typ1>(n)) {}
};



struct Base {
    virtual ~Base() {
    
        std::cout << "Base destructor!" << std::endl;
    }; // definieren Sie den Destruktor, machen Sie ihn virtual
    virtual void other()  =0;
};

struct Derived : public Base {
    void other() override { }
};

int main() {
    Base* obj = new Derived{};
    /* ...mehr Programmzeilen hier... */
    delete obj;     // klappt, weil Base::~Base virtual ist
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
