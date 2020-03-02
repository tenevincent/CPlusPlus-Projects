// Chapter_1_4_06_Assign.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

template<class I>
void print(const I& start, const I& end)
{
    I it;
    for (it = start; it != end; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    //containers
    vector <int> v(a, a + 5);
    deque <int> d(a, a + 5);
    list <int> l(a, a + 5);

    print(v.begin(), v.end());
    print(d.begin(), d.end());
    print(l.begin(), l.end());

    cout << "Assigning a new content:\n";
    v.assign(a, a + 10);
    d.assign(a, a + 10);
    l.assign(a, a + 10);
    print(v.begin(), v.end());
    print(d.begin(), d.end());
    print(l.begin(), l.end());

    cout << "Assigning a new content II:\n";
    v.assign(3, 100);
    d.assign(3, 1000);
    l.assign(3, 10000);
    print(v.begin(), v.end());
    print(d.begin(), d.end());
    print(l.begin(), l.end());
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
