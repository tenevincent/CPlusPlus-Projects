// Chapter04_01_swap()_swap_ranges()_iter_swap().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

template <class T>
void print(const T& value)
{
    cout << value << " ";
}

int main()
{
    cout << "Simple swap of values:\n";
    int a = 10, b = 100;
    cout << "a: " << a << " b: " << b << endl;
    swap(a, b);


    cout << "After swap:\n";
    cout << "a: " << a << " b: " << b << endl;
    cout << endl;

    cout << "Simple iterator swap:\n";
    int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int size = sizeof(t) / sizeof(t[0]);
    list <int> l1(t, t + size);
    for_each(l1.begin(), l1.end(), print<int>); cout << endl;
    cout << "Swapping first and last elements:\n";
    for_each(l1.begin(), l1.end(), print<int>); cout << endl;
    list<int>::iterator it = l1.end();
    advance(it, -1);
    iter_swap(l1.begin(), it);



    cout << "After swap:\n";
    for_each(l1.begin(), l1.end(), print<int>); cout << endl;
    cout << endl;

    cout << "Swapping iterator ranges - switching halves of the list:\n";
    for_each(l1.begin(), l1.end(), print<int>); cout << endl;
    advance(it, -4);
    swap_ranges(l1.begin(), it, it);


    cout << "After swap:\n";
    for_each(l1.begin(), l1.end(), print<int>); cout << endl;

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
