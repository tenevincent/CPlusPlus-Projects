// 03_Chapter_find_end().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

void print(const int& value)
{
    cout << value << " ";
}

int main()
{
    int t[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 2 };
    vector <int> v1(t, t + 18);
    for_each(v1.begin(), v1.end(), print); cout << endl;
    cout << endl;
    int ts[] = { 2,3 };
    cout << "Searching for the sequence 2, 3 from the beginning:\n";
    vector<int>::iterator found = search(v1.begin(), v1.end(), ts, ts + 2);
    if (found != v1.end())
    {
        cout << "Sequence 2, 3 has been found at position: " << distance(v1.begin(), found) << endl;
        cout << "Sequence 2, 3 has been found at position: " << distance(found, v1.begin()) << endl;
    }
    else
    {
        cout << "Sequence 2, 3 could not  be found\n";
    }
    cout << endl;
    cout << "Searching for the sequence 2, 3 from the end:\n";
    found = find_end(v1.begin(), v1.end(), ts, ts + 2);
    if (found != v1.end())
    {
        cout << "Sequence 2, 3 has been found at position: " << distance(v1.begin(), found) << endl;
    }
    else
    {
        cout << "Sequence 2, 3 could not  be found\n";
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
