#include <string>
#include <iostream>
int main() {
    std::cout << "C-Zeichenkettenliteral\n";
    //= C-Zeichenkettenliteral
    // using std::literals::string_literals::operator""s;
    // using namespace std::string_literals;
    // using namespace std::literals::string_literals;
    using namespace std::literals;
    std::cout << "Echter string\n"s;
    //= Echter string
}


