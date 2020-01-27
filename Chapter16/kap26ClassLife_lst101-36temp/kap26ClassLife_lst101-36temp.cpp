#include <string>
#include <iostream>                          // cout
using std::string; using std::cout;
struct Value {
    int wert_;
    Value(int wert)                          // 1-Arg-Konstruktor = Typumwandlung
        : wert_{ wert } {}
};
size_t laenge(string arg) {
    return arg.size();
}
Value doppel(Value v) {
    return Value{ v.wert_ * 2 };
}
int main() {
    cout << laenge("Hipphopp") << "\n";      // const char* in string
    //= 8
    cout << doppel(10).wert_ << "\n";        // int in Value
    //= 20
    string name{ "Gandalf" };
    cout << (name + " der Graue") << "\n"; // string + const char*
    //= Gandalf der Graue
}

