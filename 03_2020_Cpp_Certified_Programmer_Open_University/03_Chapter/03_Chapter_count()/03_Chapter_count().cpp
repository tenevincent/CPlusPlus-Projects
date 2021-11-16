// 03_Chapter_count().cpp : This file contains the 'main' function. Program execution begins and ends there.
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

struct Find
{
    char value;
    Find(const char& v) :value(toupper(v)) {}

    bool operator()(const char& v)
    {
        return toupper(v) == value;
    }
};

int main()
{
    /*
    The first version (count()) counts the number of times value appears among the elements from the range last, first.
    */

    /*
    The number of elements either equal to value or for which predicate p returns true.
    */


    int t[] = { 1, 2, 3, 4, 5, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4 };
    vector <int> v1(t, t + 18);
    for_each(v1.begin(), v1.end(), print<int>); cout << endl;

    cout << endl;
    cout << "Counting values 2:\n";
    unsigned int number = count(v1.begin(), v1.end(), 2);
    cout << "Number of items (2) found: " << number << endl;
    cout << endl;

    cout << "Counting values 10:\n";
    number = count(v1.begin(), v1.end(), 10);
    cout << "Number of items (10) found: " << number << endl;
    cout << endl;

    char ts[] = { 'a','b', 'c', 'a', 'A', 'b','D', 'A', 'b', 'C', 'a', 'f' };
    list <int> l1(ts, ts + 12);

    cout << "Counting values 'a' - case insensitive:\n";
    number = count_if(l1.begin(), l1.end(), Find('a'));
    cout << "Number of items ('a') found: " << number << endl;
    cout << endl;

    cout << "Counting values 'a' - case sensitive:\n";
    number = count(l1.begin(), l1.end(), 'a');
    cout << "Number of items ('a') found: " << number << endl;
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
