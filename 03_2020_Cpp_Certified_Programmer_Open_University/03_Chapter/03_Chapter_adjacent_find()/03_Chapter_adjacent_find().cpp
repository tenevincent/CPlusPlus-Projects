// 03_Chapter_adjacent_find().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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
    The adjacent_find() function searches the range of elements first, last, in order to find the first pair of equal consecutive elements
    */


    int t[] = { 1, 2, 3, 4, 5, 1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4 };
    vector <int> v1(t, t + 18);
    for_each(v1.begin(), v1.end(), print<int>); cout << endl;
    cout << endl;
    cout << "Searching for a  pair of  elements:\n";
    vector<int>::iterator found = adjacent_find(v1.begin(), v1.end());
    if (found != v1.end())
    {
        cout << "Pair of elements " << *found << " has been found at position: " << distance(v1.begin(), found) << endl;
    }
    else
    {
        cout << "Pair of the same elements could not  be found\n";
    }
    cout << endl;

    char ts[] = { 'a','b', 'c', 'a', 'A', 'b','D', 'A', 'b', 'C', 'a', 'f' };
    list <int> l1(ts, ts + 12);
    list<int>::iterator founds = adjacent_find(l1.begin(), l1.end(), Compare());
    if (founds != l1.end())
    {
        cout << "Pair of elements " << *founds << " has been found at position: " << distance(l1.begin(), founds) << endl;
    }
    else
    {
        cout << "Pair of the same elements could not  be found\n";
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
