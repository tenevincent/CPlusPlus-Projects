#include <vector>                    // Sie ben?tigen diesen Header
#include <iostream>
#include <algorithm>                           // count_if
#include <numeric>                             // iota
 
bool even(int n) { return n % 2 == 0; }            // Test auf gerade


int main() {
    std::vector<int> quadrate{};     // leer initialisieren
    for (int idx = 0; idx < 100; ++idx) {
        quadrate.push_back(idx * idx); // Anf?gen eines Elements
    }


   
    std::vector<int> quadrate2{ 1,4,9,16,25 }; // gef?llt initialisieren
    for (int zahl : quadrate2)  // zahl ist ein Quadrat nach dem anderen
        std::cout << zahl << " ";
    std::cout << std::endl;
    //= 1 4 9 16 25

    std::vector<int> quader{ 1,4,9,16,25 };
    for (int idx = 0; idx < quader.size(); ++idx)  // size enth?lt die Anzahl
        std::cout << quader[idx] << " ";      // [idx] oder at(idx) holt ein Element
    std::cout << std::endl;
    //= 1 4 9 16 25


    std::vector<int> qus{ 1,4,9,16,25 };
    for (auto it = qus.begin(); it != qus.end(); ++it) // zwischen begin() und end()
        std::cout << *it << " ";    // mit *it kommen Sie vom Iterator zum Element
    std::cout << std::endl;
    //= 1 4 9 16 25

    std::vector<int> data(100);                // 100 x null
    std::iota(data.begin(), data.end(), 0);    // 0, 1, 2, ... 99
    // z?hlt gerade Zahlen
    std::cout <<
        std::count_if(data.begin(), data.end(), even);
    //= 50
        

}

