#include <iostream>
namespace mylib {
    namespace v1 {
        int version() { return 1; }
    }
    inline namespace v2 { // aktuelle Version
        int version() { return 2; }
    }
}
int main() {
    std::cout << "Version " << mylib::version() << "\n";     // Ausgabe: 2
    //= Version 2
    std::cout << "Version " << mylib::v1::version() << "\n"; // Ausgabe: 1
    //= Version 1
    std::cout << "Version " << mylib::v2::version() << "\n"; // Ausgabe: 2
    //= Version 2
}

