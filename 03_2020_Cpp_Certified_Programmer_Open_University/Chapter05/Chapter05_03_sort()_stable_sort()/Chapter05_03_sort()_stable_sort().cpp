// Chapter05_03_sort()_stable_sort().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctype.h>
#include <string>

using namespace std;

class Something
{
public:
    int first_key, second_key;
    string value;
    Something(int first_key, int second_key, string value) :first_key(first_key), second_key(second_key), value(value) {}
    Something() {}
};

void print(const Something& v)
{
    cout << v.value << " ";
}

bool ascending_one_key(const Something& a, const Something& b)
{
    return a.first_key < b.first_key;
}

bool ascending_keys_sum(const Something& a, const Something& b)
{
    return a.first_key + a.second_key < b.first_key + b.second_key;
}

int main()
{
    vector <Something> v(5);
    v.push_back(Something(1, 1, "One"));
    v.push_back(Something(2, 2, "Two"));
    v.push_back(Something(4, 4, "Four"));
    v.push_back(Something(3, 0, "Three"));
    v.push_back(Something(5, 5, "Five"));
    cout << "Source collection:\n";
    cout << "v: "; for_each(v.begin(), v.end(), print); cout << endl;


    cout << "Sorting in ascending order:\n";
    cout << "Stable sort:\n";
    stable_sort(v.begin(), v.end(), ascending_one_key);
    cout << "v: "; for_each(v.begin(), v.end(), print); cout << endl;
    cout << "Normal sort:\n";
    sort(v.begin(), v.end(), ascending_keys_sum);
    cout << "v: "; for_each(v.begin(), v.end(), print); cout << endl << endl;


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
