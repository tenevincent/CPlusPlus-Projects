// Chapter_1_4_17_merge().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

//descending order
bool compare(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    return false;
}

int main()
{
    int a[] = { 1,2,3,4,5 };
    int b[] = { 6,7,8,9,10 };
    list <int> l1(a, a + 5);
    list <int> l2(b, b + 5);
    //reversed order
    list <int> l3(l1.rbegin(), l1.rend());
    list <int> l4(l2.rbegin(), l2.rend());
    l2.merge(l1);
    print(l2.begin(), l2.end());
    cout << "Size of source list l1: " << l1.size() << endl;
    l3.merge(l4, compare);
    print(l3.begin(), l3.end());
    cout << "Size of source list l4: " << l4.size() << endl;
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
