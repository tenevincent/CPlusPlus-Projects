// Chapter05_07_binary_search().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <deque>
#include <string>
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

template <class T> void print(T start, T end) {
    for (; start != end; ++start) {
        std::cout << *start << " ";
    }
}

bool compare(int a, int b)
{
    return b < a;
}

void printMessage(bool value, int element)
{
    if (value)
    {
        cout << "Element " << element << " has been found!\n";
    }
    else
    {
        cout << "Element " << element << " could not be found!\n";
    }
}
int main()
{
    int t[] = { 1, 10, 8, 4, 5, 6, 3, 9, 7, 2 };
    deque <int> d1(t, t + 10);
    cout << "Source collection:\n";
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;
    cout << "Sorting is required - ascending order:\n";
    //sort(d1.begin(), d1.end());
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;

    cout << "Finding element  [5]:\n";
    printMessage(binary_search(d1.begin(), d1.end(), 5), 5);

    cout << "--------------------------------------------------\n";
    cout << "Searching for element in the collection which is not sorted properly\n";
    cout << "Finding element [5] - assuming descending order of elements:\n";
    printMessage(binary_search(d1.begin(), d1.end(), 5, compare), 5); cout << endl;

    cout << "--------------------------------------------------\n";
    cout << "Sorting is required - descending order:\n";
    sort(d1.begin(), d1.end(), compare);
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;

    cout << "Finding element  [5]:\n";
    printMessage(binary_search(d1.begin(), d1.end(), 5, compare), 5);
    return 0;
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
