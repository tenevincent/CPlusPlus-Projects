#include <array>
#include <algorithm>                         // accumulate
#include <numeric>                           // iota

using Januar = std::array<int, 31>;           // Alias f?r wiederholte Verwendung

void initJanuar(Januar& jan) {               // das genaue Array als Parameter
    std::iota(begin(jan), end(jan), 1);      // f?llt mit  1, 2, 3 ... 31
}
int sumJanuar(const Januar& jan) {           // das genaue Array als Parameter
    return std::accumulate(begin(jan), end(jan), 0); // Hilfsfunktion f?r Summe
}
int main() {
    Januar jan;                              // deklariert ein array<int,31>
    initJanuar(jan);
    int sum = sumJanuar(jan);
    (void)sum; //#
}

