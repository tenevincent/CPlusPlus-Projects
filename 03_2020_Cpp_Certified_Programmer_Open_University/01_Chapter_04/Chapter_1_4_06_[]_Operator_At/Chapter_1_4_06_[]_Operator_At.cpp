// Chapter_1_4_06_[]_Operator_At.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <deque>
#include <iostream>

using namespace std;

template <class C>
void print(const C& container)
{
    for (unsigned i = 0; i < container.size(); ++i)
    {
        cout << container[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 }; 
    //containers
    vector <int> v(10);
    deque <int> d(10);

    for (unsigned i = 0; i < 10; ++i)
    {
        d[i] = a[i];
        v[i] = a[i];
    }
    print(v);
    print(d);
    cout << "Accessing out of range element:\n";
    cout << v[10] << " " << d[10] << endl;

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
