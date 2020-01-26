#include <string> //#
using std::string; //#
struct Person {
    string name_;
    int alter_;
    string ort_;
};
int main() { //#
    Person p1{ "a", 21, "b" }; //#
    Person p2{ "a", 21 }; //#
    Person p3{ "a" }; //#
    Person p4{ }; //#

 


    Person p5(); //# nee
    // auto x = p5.alter_; //#
    // Person p6("a"); //# nee
    Person p7; //#
    // Person p8("a", 21, "b"); //# nee
    Person p9(p1); //#
} //#


