// 03_Chapter_find().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int t[] = { 10, 2, 4, 3, 5, 6, 10, 8, 9, 11 };
    deque <int> d1(t, t + 10);
    cout << "Look for the first even element in the container:\n";
    deque<int>::iterator found = find(d1.begin(), d1.end(), 11);
    if (found != d1.end())
    {
        cout << "Value 10 found at position : " << distance(found, d1.begin()) << endl;
        cout << endl;
        cout << "Founding all remaining elements of value 10\n";
        ++found; // skip element already found if any;
        while ((found = find(found, d1.end(), 10)) != d1.end())
        {
            cout << "Next value 10 found at position : " << distance(d1.begin(), found) << endl;
            ++found;
        }
    }
    else
    {
        cout << "Value 10 not found\n";
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
