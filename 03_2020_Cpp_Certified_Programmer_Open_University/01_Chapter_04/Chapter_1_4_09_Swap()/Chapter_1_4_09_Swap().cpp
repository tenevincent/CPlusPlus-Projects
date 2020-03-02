// Chapter_1_4_09_Swap().cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    vector <int> v1(a, a + 5);
    deque <int> d1(a, a + 5);
    list <int> l1(a, a + 5);

    vector<int> v2(a + 5, a + 10);
    deque<int> d2(a + 5, a + 10);
    list<int>  l2(a + 5, a + 10);

    print(v1.begin(), v1.end());
    print(v2.begin(), v2.end());
    print(d1.begin(), d1.end());
    print(d2.begin(), d2.end());
    print(l1.begin(), l1.end());
    print(l2.begin(), l2.end());

    cout << "Swapping elements:\n";
    v1.swap(v2);
    d1.swap(d2);
    l1.swap(l2);
    print(v1.begin(), v1.end());
    print(v2.begin(), v2.end());
    print(d1.begin(), d1.end());
    print(d2.begin(), d2.end());
    print(l1.begin(), l1.end());
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
