// random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <random>

static const int NUM = 1000000;

void writeToFile(const char* fileName, const std::map<int, int>& data) {

    std::ofstream file(fileName);

    if (!file) {
        std::cerr << "Could not open the file " << fileName << ".";
        exit(EXIT_FAILURE);
    }

    // print the datapoints to the file
    for (auto mapIt : data) file << mapIt.first << " " << mapIt.second << std::endl;

}

int main() {

    std::random_device seed;

    // default generator
    std::mt19937 engine(seed());

    // distributions

    // min= 0; max= 20
    std::uniform_int_distribution<> uniformDist(0, 20);
    // mean= 50; sigma= 8
    std::normal_distribution<> normDist(50, 8);
    // mean= 6;
    std::poisson_distribution<> poiDist(6);
    // alpha= 1;
    std::gamma_distribution<> gammaDist;

    std::map<int, int> uniformFrequency;
    std::map<int, int> normFrequency;
    std::map<int, int> poiFrequency;
    std::map<int, int> gammaFrequency;

    for (int i = 1; i <= NUM; ++i) {
        ++uniformFrequency[uniformDist(engine)];
        ++normFrequency[round(normDist(engine))];
        ++poiFrequency[poiDist(engine)];
        ++gammaFrequency[round(gammaDist(engine))];
    }

    writeToFile("uniform_int_distribution.txt", uniformFrequency);
    writeToFile("normal_distribution.txt", normFrequency);
    writeToFile("poisson_distribution.txt", poiFrequency);
    writeToFile("gamma_distribution.txt", gammaFrequency);
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
