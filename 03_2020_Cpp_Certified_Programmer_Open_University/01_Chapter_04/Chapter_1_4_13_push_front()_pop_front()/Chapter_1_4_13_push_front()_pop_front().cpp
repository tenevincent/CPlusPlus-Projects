// Chapter_1_4_13_push_front()_pop_front().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <deque>
#include <list>
#include <iostream>

using namespace std;

template<class I>
void print(const I& start, const I& end)
{
    for (I it = start; it != end; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    deque <int> d;
    list <int> l;

    for (unsigned i = 0; i < 10; ++i)
    {
        d.push_front(i);
        l.push_front(i);
    }
    cout << "Deque:  ";    print(d.begin(), d.end());
    cout << "List:   ";    print(l.begin(), l.end());

    for (unsigned i = 0; i < 5; ++i)
    {
        d.pop_front();
        l.pop_front();
    }
    cout << "Deque:  ";    print(d.begin(), d.end());
    cout << "List:   ";    print(l.begin(), l.end());

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
