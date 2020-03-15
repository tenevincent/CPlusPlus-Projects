// Chapter05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctype.h>
#include <string>

using namespace std;

template<class T>
void print(const T& value)
{
    cout << value << " ";
}

char t(char c)
{
    return tolower(c);
}
string toLower(const string& v)
{
    string ret(v);
    transform(ret.begin(), ret.end(), ret.begin(), t);
    return ret;
}

bool descending_caseinsensitive(const string& a, const string& b)
{
    return toLower(b) < toLower(a);
}

bool descending_casesensitive(const string& a, const string& b)
{
    return b < a;
}

bool ascending_caseinsensitive(const string& a, const string& b)
{
    return toLower(a) < toLower(b);
}


int main()
{
    string t[] = { "AB", "dC", "ba", "aB", "BC", "bc", "BA", "cd", "Cd", "ab" };
    vector <string> v1(10);

    copy(t, t + 10, v1.begin());
    cout << "Source collection:\n";
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<string>); cout << endl;

    cout << "Sorting in ascending order:\n";
    cout << "Normal sort:\n";
    sort(v1.begin(), v1.end());
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<string>); cout << endl;
    cout << "Stable sort:\n";
    copy(t, t + 10, v1.begin());
    stable_sort(v1.begin(), v1.end(), ascending_caseinsensitive);
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<string>); cout << endl << endl;

    cout << "Sorting in descending order:\n";
    cout << "Normal sort:\n";
    sort(v1.begin(), v1.end(), descending_casesensitive);
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<string>); cout << endl;
    cout << "Stable sort:\n";
    copy(t, t + 10, v1.begin());
    stable_sort(v1.begin(), v1.end(), descending_caseinsensitive);
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<string>); cout << endl << endl;


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
