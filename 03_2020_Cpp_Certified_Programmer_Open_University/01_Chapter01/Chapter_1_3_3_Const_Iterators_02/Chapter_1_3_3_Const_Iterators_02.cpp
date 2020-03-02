// Chapter_1_3_3_Const_Iterators_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

int main()
{

    /*
    The example illustrated in the code cannot be compiled. 
    The compiler doesn’t allow anything to be assigned to 
    an element referred to by a constant iterator.
    */
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    //containers
    vector<int>  v(a, a + 10);
    deque<int>  d(a, a + 10);
    list<int>  l(a, a + 10);

    vector<int> ::const_iterator it1 = v.begin();
    *it1 = *it1 + 1;
    deque<int> ::const_iterator it2 = d.begin();
    *it2 = *it2 + 1;
    list<int> ::const_iterator it3 = l.begin();
    *it3 = *it3 + 1;
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
