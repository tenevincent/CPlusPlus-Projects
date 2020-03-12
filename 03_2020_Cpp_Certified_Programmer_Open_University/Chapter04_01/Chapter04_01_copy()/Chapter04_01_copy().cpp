// Chapter04_01_copy().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

template<class T>
void print(const T& value)
{
    cout << value << " ";
}

int main()
{
    int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector <int> vec01(t, t + 10);
    cout << "Source collection:\n";
    for_each(vec01.begin(), vec01.end(), print<int>); cout << endl;
    deque <int> dqueue1(vec01.size()); //list for 10 elements;
    cout << "Target collection before copy:\n";
    for_each(dqueue1.begin(), dqueue1.end(), print<int>); cout << endl;
    copy(vec01.begin(), vec01.end(), dqueue1.begin());


    cout << "Target collection after copy:\n";
    for_each(dqueue1.begin(), dqueue1.end(), print<int>); cout << endl;
    cout << endl;

    cout << "Copy backward\n";
    vector <int> v2(t, t + 10);
    cout << "Source collection:\n";
    for_each(v2.begin(), v2.end(), print<int>); cout << endl;
    deque <int> d2(v2.size()); //list for 10 elements;
    cout << "Target collection before copy:\n";
    for_each(d2.begin(), d2.end(), print<int>); cout << endl;
    copy_backward(v2.begin(), v2.end(), d2.end());
    
    cout << "Target collection after copy:\n";
    for_each(d2.begin(), d2.end(), print<int>); cout << endl;
    cout << endl;


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
