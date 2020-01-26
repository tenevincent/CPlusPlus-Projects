#include <vector>
struct Zahl {
    int wert_ = 0;
    Zahl() {} // Standardkonstruktor
    explicit Zahl(int w) : wert_{ w } {}
};
int main() {
    std::vector<Zahl> zahlen{}; // okay: Zahl erf?llt die Bedingungen
    zahlen.push_back(Zahl{ 2 });
}

