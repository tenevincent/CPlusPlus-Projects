// Chapter05_05_upper_bound().cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int main()
{
    int t[] = { 1, 10, 8, 4, 5, 6, 3, 9, 7, 2 };
    deque <int> d1(t, t + 10);
    cout << "Source collection:\n";
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;
    cout << "Sorting is required - ascending order:\n";
    sort(d1.begin(), d1.end());
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;

    cout << "Finding range [4,6]:\n";
    deque<int>::iterator it1 = lower_bound(d1.begin(), d1.end(), 4);
    deque<int>::iterator it2 = upper_bound(d1.begin(), d1.end(), 6);
    print(it1, it2); cout << endl;
    cout << "Finding single value range using equal_bounds\n";
    pair<deque<int>::iterator, deque<int>::iterator> p = equal_range(d1.begin(), d1.end(), 4);
    print(p.first, p.second); cout << endl << endl;

    cout << "--------------------------------------------------\n";

    cout << "Sorting is required - descending order:\n";
    sort(d1.begin(), d1.end(), compare);
    cout << "d1: ";     print(d1.begin(), d1.end()); cout << endl;

    cout << "Finding range [6,4]:\n";
    it1 = lower_bound(d1.begin(), d1.end(), 6, compare);
    it2 = upper_bound(d1.begin(), d1.end(), 4, compare);
    print(it1, it2); cout << endl;
    cout << "Finding single value range using equal_bounds\n";
    p = equal_range(d1.begin(), d1.end(), 4, compare);
    print(p.first, p.second); cout << endl;
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
