// Chapter04_10_rotate().cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

template<class T>
void print(const T& value)
{
    cout << value << " ";
}

int main()
{
    int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list <int> l1(t, t + 10);
    cout << "Source collection:\n";
    cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;

    cout << "Rotating elements - putting 3 on top:\n";
    list<int>::iterator it = l1.begin();
    advance(it, 2);
    rotate(l1.begin(), it, l1.end());
    cout << "Collection after rotate\n";
    cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;

    cout << "Rotating elements - putting 7 on top:\n";
    it = l1.begin();
    advance(it, 4);
    rotate(l1.begin(), it, l1.end());
    cout << "Collection after rotate\n";
    cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;

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
