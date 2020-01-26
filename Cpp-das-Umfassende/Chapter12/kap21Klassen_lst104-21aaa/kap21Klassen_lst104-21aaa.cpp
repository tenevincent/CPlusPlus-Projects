#include <string> //#
using std::string; //#
struct Person { //#
    string name_;  //#
    int alter_; //#
    string ort_; //#
};  // abschlie?endes Semikolon //#
auto erzeuge(string name, int alter, string ort) {
    return Person{ name, alter, ort };       // auto verlangt Konstruktornamen
}
#if 0 //#
auto erzeuge2(string name, int alter, string ort) {
    return { name, alter, ort };       // auto mit initializer_list geht nicht
}
#endif //#
int main() { auto p = erzeuge("name", 22, "ort"); } //#

