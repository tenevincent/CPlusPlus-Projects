// Chapter04_12_partition().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

template<class T>
void print(const T& value)
{
    cout << value << " ";
}

struct Pred
{
    int value;
    Pred(const int& v) :value(v) {}
    bool operator()(const int& a)
    {
        return a < value;
    }
};

int main()
{
    int t[] = { 1, 10, 8, 4, 5, 6, 7, 3, 9, 2, 12, 15,49,2,1,0,-28 };

    int size = sizeof(t) / sizeof(t[0]);
    vector<int> v1(t, t + size);
    cout << "Source collection:\n";
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;

    cout << "Normal partitioning:\n";
    vector<int>::iterator it = partition(v1.begin(), v1.end(), Pred(5));
    cout << "Partitioning into two groups: < 5 and > 5:\n";
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl;
    cout << "The first group: "; for_each(v1.begin(), it, print<int>); cout << endl;
    cout << "The second group: "; for_each(it, v1.end(), print<int>); cout << endl << endl;

    cout << "Stable partitioning:\n";
    copy(t, t + size, v1.begin()); //reinitializing collection;
    it = stable_partition(v1.begin(), v1.end(), Pred(5));
    cout << "Partitioning into two groups: < 5 and > 5:\n";
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl;
    cout << "The first group: "; for_each(v1.begin(), it, print<int>); cout << endl;
    cout << "The second group: "; for_each(it, v1.end(), print<int>); cout << endl;

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
