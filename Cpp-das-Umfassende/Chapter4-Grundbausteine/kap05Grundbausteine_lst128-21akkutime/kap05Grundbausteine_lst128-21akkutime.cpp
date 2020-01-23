#include <iostream>
#include <iomanip> // setprecision, fixed

constexpr int bilderProSek = 25;
constexpr int laufZeitInSek = 3600;
constexpr int bilderInsg = laufZeitInSek * bilderProSek;
constexpr float bildzeit = 1.0f / bilderProSek;

int main() {
    float filmzeit = 0.f;
    for (int n = 1; n <= bilderInsg; ++n) { // 1 .. bilderInsg
        filmzeit += bildzeit;// akkumulieren
        // ... hier Code f?r dieses Frame ...
    }
    std::cout << std::setprecision(10) << std::fixed
        << filmzeit << '\n'; // Ausgabe: 3602.2695312500
    //= 3602.2695312500
}

