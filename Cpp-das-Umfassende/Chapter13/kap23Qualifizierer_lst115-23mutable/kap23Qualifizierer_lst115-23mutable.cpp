#include <iostream>
class Data {
    int value_;
    mutable size_t getCount_;
public:
    explicit Data(int v) : value_{ v } {}
    ~Data() {
        std::cout << "get wurde " << getCount_ << "-mal benutzt\n";
    }
    int get() const {
        ++getCount_;
        return value_;
    }
};
int main() {
    Data d{ 42 };
    for (int i = 0; i < 10; ++i) { d.get(); }
    //= get wurde 10-mal benutzt
} // Ausgabe: get wurde 10-mal benutzt

