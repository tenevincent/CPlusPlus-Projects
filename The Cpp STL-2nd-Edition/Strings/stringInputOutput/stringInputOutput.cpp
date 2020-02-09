// stringInputOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> readFromFile(const char* fileName) {

    std::ifstream file(fileName);

    if (!file) {
        std::cerr << "Could not open the file " << fileName << ".";
        exit(EXIT_FAILURE);
    }

    std::vector<std::string> lines;
    std::string line;
    while (getline(file, line)) lines.push_back(line);

    return lines;

}

int main() {

    std::cout << std::endl;

    std::string fileName;
    std::cout << "Your filename: ";
    std::cin >> fileName;

    std::cout << fileName.data() << std::endl;


    std::vector<std::string> lines = readFromFile(fileName.c_str());

    int num{ 0 };
    for (auto line : lines) std::cout << ++num << ": " << line << std::endl;

    std::cout << std::endl;

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
