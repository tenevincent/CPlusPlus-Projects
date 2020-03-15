// 03_Chapter_find_if().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//    find_if
#include <iostream>
#include <deque>
#include <set>
#include <algorithm>

using namespace std;

bool odd(const int& value)
{
    return value % 2 != 0;
}

struct Even
{
    bool operator()(const int& value)
    {
        return value % 2 == 0;
    }
};

int main()
{
    int t[] = { 10, 2, 4, 3, 5, 6, 7, 8, 9, 1 };
    deque <int> d1(t, t + 10);
    cout << "Look for the first odd element in the container:\n";
    deque<int>::iterator found = find_if(d1.begin(), d1.end(), odd);
    if (found != d1.end())
    {
        cout << "Found odd element: " << *found << endl;
    }
    else
    {
        cout << "Odd element not found\n";
    }
    cout << endl;

    cout << "Look for the first even element in the container:\n";
    found = find_if(d1.begin(), d1.end(), Even());
    if (found != d1.end())
    {
        cout << "Found even element: " << *found << endl;
    }
    else
    {
        cout << "Even element not found\n";
    }
    cout << endl;

    set <int> s1(t, t + 10);

    cout << "Look for the first odd element in the set:\n";
    set<int>::iterator founds = find_if(s1.begin(), s1.end(), odd);
    if (founds != s1.end())
    {
        cout << "Found odd element: " << *founds << endl;
    }
    else
    {
        cout << "Odd element not found\n";
    }
    cout << endl;

    cout << "Look for the first even element in the set:\n";
    founds = find_if(s1.begin(), s1.end(), Even());
    if (founds != s1.end())
    {
        cout << "Found even element: " << *founds << endl;
    }
    else
    {
        cout << "Even element not found\n";
    }
    cout << endl;
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
