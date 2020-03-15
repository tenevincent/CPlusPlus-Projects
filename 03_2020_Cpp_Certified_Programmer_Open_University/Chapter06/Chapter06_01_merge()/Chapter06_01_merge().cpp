// Chapter06_01_merge().cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int compare(int a, int b)
{
    return b < a;
}

int main()
{
    int t1[] = { 1, 10, 3, 4, 6, 8, 9, 2 };
    int t2[] = { 8, 4, 5, 6, 9, 7 };
    deque <int> d1(t1, t1 + 8);
    deque <int> d2(t2, t2 + 6);
    deque <int> d3(d1.size() + d2.size());

    cout << "Source collections:\n";
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;
    cout << "d2: ";     print(d2.begin(), d2.end()); cout << endl;

    cout << "Trying to merge not sorted collections:\n";
    //visual studio might rise an exception in debug mode
    merge(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin());
    cout << "d3: ";     print(d3.begin(), d3.end()); cout << endl << endl;

    cout << "Sorting is required - ascending order:\n";
    sort(d1.begin(), d1.end()); 
    sort(d2.begin(), d2.end());
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;
    cout << "d2: ";     print(d2.begin(), d2.end()); cout << endl;
    cout << "Merging:\n";
    merge(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin());
    cout << "d3: ";     print(d3.begin(), d3.end()); cout << endl << endl;

    cout << "Sorting is required - descending order:\n";
    sort(d1.begin(), d1.end(), compare); 
    sort(d2.begin(), d2.end(), compare);
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;
    cout << "d2: ";     print(d2.begin(), d2.end()); cout << endl;
    cout << "Merging:\n";
    merge(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin(), compare);
    cout << "d3: ";     print(d3.begin(), d3.end()); cout << endl;
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
