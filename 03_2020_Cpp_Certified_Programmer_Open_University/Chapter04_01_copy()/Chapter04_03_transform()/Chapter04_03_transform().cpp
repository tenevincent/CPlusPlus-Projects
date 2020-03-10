// Chapter04_03_transform().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

template <class T>
void print(const T& value)
{
    cout << value << " ";
}

struct Add
{
    int _v;
    Add(int v) : _v(v) {}
    int operator()(int a)
    {
        return a + _v;
    }
};

struct Average
{
    double operator()(const int& a, const int& b)
    {
        return (a + b) / 2.0;
    }
};

int main()
{
    int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v1(t, t + 10);
    list<double> l1(v1.size());
    cout << "Source collection:\n";
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;
    cout << "Adding value - 10 to all the elements of the collection:\n";
    transform(v1.begin(), v1.end(), l1.begin(), Add(10));


    cout << "l1: "; for_each(l1.begin(), l1.end(), print<double>); cout << endl << endl;
    cout << "Adding value - 10 - storing result in the same collection:\n";
    transform(v1.begin(), v1.end(), v1.begin(), Add(10));


    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;
    cout << "Calculating average of elements from two collections:\n";
    list <int>l2(l1.size());
    transform(v1.begin(), v1.end(), l1.rbegin(), l2.begin(), Average());


    cout << "l2: "; for_each(l2.begin(), l2.end(), print<double>); cout << endl << endl;

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
