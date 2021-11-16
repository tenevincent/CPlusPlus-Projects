// 03_Chapter_equal().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

template <class T>
void print(const T& value)
{
    cout << value << " ";
}

struct Compare
{

    bool operator()(const char& f, const char& s)
    {
        return tolower(f) == tolower(s);
    }
};

int main()
{

    /*
    true if the elements in the two given ranges are found to be equal.
    */

    int t1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int t2[] = { 1, 2, 4, 6, 7, 3, 5, 9, 10, 8 };

    vector <int> v1(t1, t1 + 10);
    list <int> l1(t2, t2 + 10);

    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl;
    cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl;

    if (equal(v1.begin(), v1.end(), l1.begin()))
    {
        cout << "Collections v1 i l1 are equal!\n";
    }
    else
    {
        cout << "Collections v1 i l1 are NOT equal!\n";
    }
    cout << endl;

    char t3[] = { 'a','b', 'C', 'd', 'e', 'F','g', 'h', 'i', 'J' };
    char t4[] = { 'a','b', 'C', 'D', 'E', 'F','g', 'h', 'i', 'j' };

    vector <int> v2(t3, t3 + 10);
    list <int> l2(t4, t4 + 10);

    cout << "v2: "; for_each(v2.begin(), v2.end(), print<int>); cout << endl;
    cout << "l2: "; for_each(l2.begin(), l2.end(), print<int>); cout << endl;

    cout << "Case sensitive comparison:\n";
    if (equal(v2.begin(), v2.end(), l2.begin()))
    {
        cout << "Collections v2 i l2 are equal!\n";
    }
    else
    {
        cout << "Collections v2 i l2 are NOT equal!\n";
    }
    cout << endl;

    cout << "Case insensitive comparison:\n";
    if (equal(v2.begin(), v2.end(), l2.begin(), Compare()))
    {
        cout << "Collections v2 i l2 are equal!\n";
    }
    else
    {
        cout << "Collections v2 i l2 are NOT equal!\n";
    }
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
