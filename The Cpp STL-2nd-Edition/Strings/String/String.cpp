// String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <chrono>
#include <ctime>

 



template <class Container>
void split2(const std::string& str, Container& cont, char delim = ' ')
{
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim)) {
        cont.push_back(token);
    }
}



int main(int argc, char* argv[]) {


    auto start = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(start);
    std::cout << "finished computation at " << std::ctime(&end_time);


     

    std::string strContent = "10.01.2009;10;10;10;10";
    std::vector<std::string> listString;

    split2(strContent, listString,   ';');



    std::cout << std::endl;
    std::cout << "Type in your names in the form FirstnameFamilyname." << std::endl;

    std::string name, firstName, familyName;
    std::vector<std::pair<std::string, std::string> > allNames;

    for (int i = 1; i < argc; ++i) {

        name = argv[i];

        auto strIt = std::find_if(name.begin() + 1, name.end(), [](char c) { return std::isupper(c); });

        if (strIt != name.end()) {
            firstName = std::string(name.begin(), strIt);
            familyName = std::string(strIt, name.end());
            allNames.push_back(std::make_pair(firstName, familyName));
        }

    }

    std::string greeting;

    std::cout << std::endl;

    for (auto pa : allNames) {
        greeting = "Hello " + pa.second + " " + pa.first;
        std::cout << greeting << std::endl;
    }

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
