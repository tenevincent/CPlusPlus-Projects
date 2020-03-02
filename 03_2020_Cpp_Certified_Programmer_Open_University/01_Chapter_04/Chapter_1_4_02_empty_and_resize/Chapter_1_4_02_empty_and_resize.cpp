// Chapter_1_4_02_empty_and_resize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    //containers
    vector <int> v;
    deque <int> d;
    list <int> l;
    cout << "Size of vector, deque, list: " << v.size() << " " << d.size() << " "
        << l.size() << endl;

    if (v.empty())
    {
        v.resize(10);
    }
    if (d.empty())
    {
        d.resize(10);
    }
    if (l.empty())
    {
        l.resize(10);
    }
    cout << "Size of vector, deque, list: " << v.size() << " " << d.size() << " "
        << l.size() << endl;

    if (!v.empty())
    {
        v.resize(9);
    }
    if (!d.empty())
    {
        d.resize(5);
    }
    if (!l.empty())
    {
        l.resize(0);
    }
    cout << "Size of vector, deque, list: " << v.size() << " " << d.size() << " "
        << l.size() << endl;
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
