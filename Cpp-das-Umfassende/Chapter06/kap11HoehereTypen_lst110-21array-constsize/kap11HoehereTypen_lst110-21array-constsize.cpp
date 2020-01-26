#include <array>
#include <iostream>
constexpr size_t MONATE = 12; /* Monate im Jahr */
int main() {
    std::array<unsigned, MONATE> mtage = {     // okay mit einer Konstante
        31,28,31,30,31,30,31,31,30,31,30,31 };
#if 0 //# hide line in print
    unsigned alter = 0;
    std::cout << "Wie alt sind Sie? "; std::cin >> alter;
#else //#hide
    constexpr size_t alter = 44; //#
#endif //#hide
    std::array<int, alter> lebensjahre;       // Arraygr??e geht nicht per Variable
    (void)mtage; (void)lebensjahre; //#
}


