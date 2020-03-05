// 01_Chapter02_03_Iterators_Methods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// set

#include <set>
#include <iostream>
#include <functional>
#include "01_Chapter02_03_Iterators_Methods.h"

using namespace std;

template <class T> void print(T start, T end) {
    for (; start != end; ++start) {
        std::cout << *start << " ";
    }
}


void OnExecuteDoIterators();

int main()
{
    int t[] = { 1, 10, 8, 4, 6, 5, 3, 9, 7, 2 };
    set <int> s1(t, t + 10);
    set<int, greater <int> > s2(s1.begin(), s1.end());
    cout << "Standard iterator:\n";
    set<int>::iterator it1 = s1.begin();
    for (; it1 != s1.end(); ++it1)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    it1 = s2.begin();
    for (; it1 != s2.end(); ++it1)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    cout << "Reverse iterators:\n";
    print(s1.rbegin(), s1.rend()); cout << endl;
    print(s2.rbegin(), s2.rend()); cout << endl;

    cout << "Const iterators: \n";
    print(s1.cbegin(), s1.cend()); cout << endl;
    print(s2.cbegin(), s2.cend()); cout << endl;
    cout << "Const iterators - reverse: \n";
    print(s1.crbegin(), s1.crend()); cout << endl;
    print(s2.crbegin(), s2.crend()); cout << endl;


    /***********************************************************/
    //there is no difference between const and non const iterators
    // all set/multiset iterators are const regardless of declaration:
    set<int>::const_iterator cit1 = s1.begin();
    it1 = s1.cbegin();
    it1 = s1.begin();
    //  attempt to modify uncomment to test it;
    //*it1=100;


    OnExecuteDoIterators();


    return 0;
}

void OnExecuteDoIterators()
{

    {
        int t[] = { 1, 10, 8, 4, 6, 5, 3, 9, 7, 2 };
        multiset <int> s1(t, t + 10);
        multiset<int, greater <int> > s2(s1.begin(), s1.end());
        cout << "Standard iterator:\n";
        multiset<int>::iterator it1 = s1.begin();
        for (; it1 != s1.end(); ++it1)
        {
            cout << *it1 << " ";
        }
        cout << endl;
        it1 = s2.begin();
        for (; it1 != s2.end(); ++it1)
        {
            cout << *it1 << " ";
        }
        cout << endl;
        cout << "Reverse iterators:\n";
        print(s1.rbegin(), s1.rend()); cout << endl;
        print(s2.rbegin(), s2.rend()); cout << endl;

        cout << "Const iterators: \n";
        print(s1.cbegin(), s1.cend()); cout << endl;
        print(s2.cbegin(), s2.cend()); cout << endl;
        cout << "Const iterators - reverse: \n";
        print(s1.crbegin(), s1.crend()); cout << endl;
        print(s2.crbegin(), s2.crend()); cout << endl;


        /***********************************************************/
        //there is no difference between const and non const iterators
        // all set/multiset iterators are const regardless of declaration:
        multiset<int>::const_iterator cit1 = s1.begin();
        it1 = s1.cbegin();
        it1 = s1.begin();
        //  attempt to modify uncomment to test it;
        //*it1=100;
    }
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
