#include <iostream>
#include <stdexcept> // exception

int main() {
    try {
        // ... Ihr sonstiger Code ...
    }
    catch (std::exception exc) {
        std::cerr << "main: " << exc.what() << "\n";
    }
}

