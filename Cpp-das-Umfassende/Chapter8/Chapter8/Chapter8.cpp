#include <iostream> //#
#include <vector> //#
int main() { //#
    std::vector<int> data(10);     // 10 mal 0 in einem vector
    data.front() = 666;            // schreibt 666 an die vorderste Stelle
    std::cout << data.size() << "\n"; //= 10
    std::cout << data[0] << "\n"; //= 666
    std::cout << data[1] << "\n"; //= 0
} //#
