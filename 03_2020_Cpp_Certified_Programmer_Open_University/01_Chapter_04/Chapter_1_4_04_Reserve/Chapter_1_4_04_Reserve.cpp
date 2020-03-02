// Chapter_1_4_04_Reserve.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector <int> v;
    cout << "Size and capacity: " << v.size() << " " << v.capacity() << endl;
    v.reserve(15);
    cout << "Size and capacity: " << v.size() << " " << v.capacity() << endl;
    cout << "Adding elements" << endl;
    for (int i = 0; i < 10; ++i)
    {
        v.push_back(i);
        cout << "Size and capacity: " << v.size() << " " << v.capacity() << endl;
    }
    cout << "Trying to shrink..." << endl;
    v.reserve(10);
    cout << "Size and capacity: " << v.size() << " " << v.capacity() << endl;
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
