// CPlusPlus17GetttingStartedSection03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;


int main()
{

    set<int> s1 = { 1, 3, 5, 5, 7, 9 };
    set<int> s2 = { 2, 3, 7, 8, 10 };

    vector<int> v(s1.size() + s2.size());

    cout << "\nFirst set values are ..." << endl;
    copy(s1.begin(), s1.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    cout << "\nSecond set values are ..." << endl;
    copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    auto pos = set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
        v.begin());
    v.resize(pos - v.begin());

    cout << "\nValues present in set one but not in set two are  ..." << endl;
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;

    v.clear();

    v.resize(s1.size() + s2.size());

    pos = set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), v.begin());

    v.resize(pos - v.begin());

    cout << "\nMerged set values in vector are ..." << endl;
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;


    std::cout << "Hello World!\n";
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
