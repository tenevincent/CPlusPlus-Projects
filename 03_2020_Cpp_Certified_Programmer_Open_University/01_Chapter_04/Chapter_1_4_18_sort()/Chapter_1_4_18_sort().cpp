// Chapter_1_4_18_sort().cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool compare(int v1, int v2)
{
    if (v1 > v2)
    {
        return true;
    }
    return false;
}


int main()
{
    int a[] = { 1,2,1,3,2,3,4,7,8,9,6,5,8,9,10 };

    list <int> l1(a, a + 15);

    print(l1.begin(), l1.end());

    cout << "Sorting - ascending" << endl;
    l1.sort();
    print(l1.begin(), l1.end());

    cout << "Sorting - descending" << endl;
    l1.sort(compare);
    print(l1.begin(), l1.end());

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
