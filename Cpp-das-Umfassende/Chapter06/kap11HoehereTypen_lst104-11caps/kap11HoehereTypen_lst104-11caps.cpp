#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) { // Start bei 1
        for (char* p = argv[i]; *p != '\0'; ++p) {
            char c = toupper(*p);
            std::cout << c;
        }
        std::cout << ' ';
    }
    std::cout << '\n';
    //= HALLO TEXT
}

