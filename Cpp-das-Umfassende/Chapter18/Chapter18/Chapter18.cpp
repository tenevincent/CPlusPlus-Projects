#include <iostream>
class Schrauber;
class Ding {
    int value_; // privat
public:
    explicit Ding(int value) : value_{ value } {}
    void inc() { ++value_; }
    std::ostream& print(std::ostream& os) const { return os << value_; }
    friend class Schrauber;
};



class Schrauber {
    const Ding& ding_;
public:
    explicit Schrauber(const Ding& ding) : ding_{ ding } {}
    auto dingWert() const {
        return ding_.value_;                   // Zugriff auf Privates aus Ding
    }
};
int main() {
    Ding ding{ 45 };
    ding.print(std::cout) << '\n';             // Ausgabe: 45
    //= 45
    Schrauber schrauber{ ding };
    ding.inc(); // internen Wert ver?ndern
    std::cout << schrauber.dingWert() << '\n'; // Ausgabe: 46
    //= 46
}
