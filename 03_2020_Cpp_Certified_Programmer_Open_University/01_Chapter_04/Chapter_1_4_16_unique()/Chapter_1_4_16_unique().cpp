// Chapter_1_4_16_unique().cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int main()
{
    int a[] = { 1,2,1,3,2,3,4,3,4,7,8,9,6,6,5,8,9,10 };

    list <int> l1(a, a + 18);
    list <int> l2(a, a + 18);
    print(l1.begin(), l1.end());

    cout << "Deleting all subsequent duplicates" << endl;
    l1.unique();
    print(l1.begin(), l1.end());

    cout << "Deleting all subsequent duplicates from sorted list" << endl;
    l2.sort();
    l2.unique();
    print(l2.begin(), l2.end());

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
