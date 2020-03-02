// Chapter_1_3_1_Iterators_Usage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    //containers
    vector <int> v(10);
    deque <int> d(10);
    list <int> l(10);

    int i = 1;
    //vector
    vector<int>::iterator itV;
    for (itV = v.begin(); itV != v.end(); ++itV, ++i)
    {
        *itV = i;
    }
    for (itV = v.begin(); itV != v.end(); ++itV)
    {
        cout << *itV << " ";
    }
    cout << endl;
    //deque
    deque<int>::iterator itD = d.begin();
    for (itD = d.begin(); itD != d.end(); ++itD, ++i)
    {
        *itD = i;
    }
    for (itD = d.begin(); itD != d.end(); ++itD)
    {
        cout << *itD << " ";
    }
    cout << endl;

    list<int>::iterator itL = l.begin();
    for (; itL != l.end(); ++itL, ++i)
    {
        *itL = i;
    }
    for (itL = l.begin(); itL != l.end(); ++itL)
    {
        cout << *itL << " ";
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
