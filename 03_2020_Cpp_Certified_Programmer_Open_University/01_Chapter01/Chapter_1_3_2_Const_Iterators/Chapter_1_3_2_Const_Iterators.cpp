// Chapter_1_3_2_Const_Iterators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    //containers
    vector <int> v(a, a + 10);
    deque <int> d(a, a + 10);
    list <int> l(a, a + 10);

    //vector
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    //deque
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    //list
    for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }
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
