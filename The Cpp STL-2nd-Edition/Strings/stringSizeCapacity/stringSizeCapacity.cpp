// stringSizeCapacity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void showStringInfo(const std::string& s) {

    std::cout << s << std::endl;
    std::cout << "s.size(): " << s.size() << std::endl;
    std::cout << "s.capacity(): " << s.capacity() << std::endl;
    std::cout << "s.max_size(): " << s.max_size() << std::endl;
    std::cout << std::endl;

}

int main() {

    std::string str;
    showStringInfo(str);

    str += "12345";
    showStringInfo(str);

    str.resize(30);
    showStringInfo(str);

    str.reserve(1000);
    showStringInfo(str);

    str.shrink_to_fit();
    showStringInfo(str);
        
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
