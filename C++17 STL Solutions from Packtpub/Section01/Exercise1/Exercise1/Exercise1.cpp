// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 1, 2, 3, 2, 5, 2, 6, 2, 4, 8 };

    {
        const auto new_end = remove(begin(v), end(v), 2);
        v.erase(new_end, end(v));
    }

    for (auto i : v) {
        cout << i << ", ";
    }
    cout << '\n';

    {
        const auto odd([](int i) { return i % 2 != 0; });
        v.erase(remove_if(begin(v), end(v), odd), end(v));
    }

    v.shrink_to_fit();

    for (auto i : v) {
        cout << i << ", ";
    }
    cout << '\n';
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
