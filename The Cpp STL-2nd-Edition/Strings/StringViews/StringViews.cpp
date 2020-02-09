// StringViews.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


#include <iostream>
#include <string>
#include <string_view>
#include <algorithm>

int main() {

    std::string str = "   A lot of space";
    std::string_view  strView = str;
    strView.remove_prefix(std::min(strView.find_first_not_of(" "), strView.size()));
    std::cout << "str      :  " << str << std::endl
        << "strView  : " << strView << std::endl;

    std::cout << std::endl;

    char arr[] = { 'A', ' ', 'l', 'o', 't', ' ', 'o', 'f', ' ', 's', 'p', 'a', 'c', 'e', '\0',  '\0',  '\0' };
    std::string_view strView2(arr, sizeof arr);
    auto trimPos = strView2.find('\0');
    if (trimPos != strView2.npos) strView2.remove_suffix(strView2.size() - trimPos);
    std::cout << "arr     : " << arr << ", size=" << sizeof arr << std::endl
        << "strView2: " << strView2 << ", size=" << strView2.size() << std::endl;

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
