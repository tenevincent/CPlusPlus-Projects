// Exercise02_quick_delete_from_unordered_vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void quick_remove_at(std::vector<T>& v, std::size_t idx)
{
    if (idx < v.size()) {
        v.at(idx) = std::move(v.back());
        v.pop_back();
    }
}

template <typename T>
void quick_remove_at(std::vector<T>& v, typename std::vector<T>::iterator it)
{
    if (it != std::end(v)) {
        *it = std::move(v.back());
        v.pop_back();
    }
}

int main()
{
    std::vector<int> v{ 123, 456, 789, 100, 200 };

    quick_remove_at(v, 2);

    for (int i : v) {
        std::cout << i << ", ";
    }
    std::cout << '\n';

    quick_remove_at(v, std::find(std::begin(v), std::end(v), 123));

    for (int i : v) {
        std::cout << i << ", ";
    }
    std::cout << '\n';

    std::vector<int> vv;

    quick_remove_at(vv, 0);
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
