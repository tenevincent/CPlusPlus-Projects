// 03_Chapter_find_first_of().cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

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
    int t[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 2 };
    vector <int> v1(t, t + 18);
    for_each(v1.begin(), v1.end(), print<int>); cout << endl;
    cout << endl;
    int ts[] = { 2,3 };
    cout << "Searching for the any of elements 2, 3 from the beginning:\n";
    vector<int>::iterator found = find_first_of(v1.begin(), v1.end(), ts, ts + 2);
    if (found != v1.end())
    {
        cout << "Found value: " << *found << " at position : " << distance(v1.begin(), found) << endl;
        cout << "Looking for any other element with value 2 or 3\n";
        ++found; // skip element already found if any;
        while ((found = find_first_of(found, v1.end(), ts, ts + 2)) != v1.end())
        {
            cout << "Found value: " << *found << " at position : " << distance(v1.begin(), found) << endl;
            ++found;
        }
    }
    else
    {
        cout << "No elements with value 2 or 3!\n";
    }
    cout << endl;

    char t1[] = { 'a','b', 'c', 'd', 'A', 'b','D', 'A', 'b', 'C', 'a', 'f' };
    vector <int> v2(t1, t1 + 12);
    for_each(v2.begin(), v2.end(), print<int>); cout << endl;
    cout << endl;
    char ts1[] = { 'a','b' };
    cout << "Searching for the any of elements 'a', 'b' from the beginning:\n";
    vector<int>::iterator found1 = find_first_of(v2.begin(), v2.end(), ts1, ts1 + 2, Compare());
    if (found1 != v2.end())
    {
        cout << "Found value: " << *found1 << " at position : " << distance(v2.begin(), found1) << endl;
        cout << "Looking for any other element with value 'a' or 'b'\n";
        ++found1; // skip element already found if any;
        while ((found1 = find_first_of(found1, v2.end(), ts1, ts1 + 2, Compare())) != v2.end())
        {
            cout << "Found value: " << *found1 << " at position : " << distance(v2.begin(), found1) << endl;
            ++found1;
        }
    }
    else
    {
        cout << "No elements with value 'a' or 'b'!\n";
    }
    cout << endl;
    cout << "Searching for the any of elements 'a', 'b' from the beginning - case sensitive:\n";
    found1 = find_first_of(v2.begin(), v2.end(), ts1, ts1 + 2);
    if (found1 != v2.end())
    {
        cout << "Found value: " << *found1 << " at position : " << distance(v2.begin(), found1) << endl;
        cout << "Looking for any other element with value 'a' or 'b'\n";
        ++found1; // skip element already found if any;
        while ((found1 = find_first_of(found1, v2.end(), ts1, ts1 + 2)) != v2.end())
        {
            cout << "Found value: " << *found1 << " at position : " << distance(v2.begin(), found1) << endl;
            ++found1;
        }
    }
    else
    {
        cout << "No elements with value 'a' or 'b'!\n";
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
