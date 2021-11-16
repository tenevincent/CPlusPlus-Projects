// 03_Chapter_for_each().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

void print(const  int value) //change argument to const int & value for set 
{
    cout << value << " ";
}

struct Print
{
    void operator()(const int value) //change argument to const int & value for set
    {
        cout << value << " ";
    }
};

int main()
{
    int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list <int> l1(t, t + 10);
    cout << "Print all elements of the container - using function\n";
    for_each(l1.begin(), l1.end(), print); cout << endl << endl;

    cout << "Print all elements of the container - using function object\n";
    for_each(l1.begin(), l1.end(), Print()); cout << endl << endl;

    //!! Be aware of sets and maps !!
    // change arguments of function print and function object must be const
    /* */
    set <int>s1(t, t+10);

    cout<<"Print all elements of the set - using function\n";
    for_each(s1.begin(), s1.end(), print); cout<<endl<<endl;

    cout<<"Print all elements of the set - using function object\n";
    for_each(s1.begin(), s1.end(), Print() ); cout<<endl<<endl;
    
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
