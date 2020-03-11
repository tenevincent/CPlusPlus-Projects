// Chapter04_11_random_shuffle().cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int main()
{
    int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector <int> v1(t, t + 10);
    cout << "Source collection:\n";
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;

    cout << "Randomly shuffling elements:\n";
    random_shuffle(v1.begin(), v1.end());
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;

    cout << "Randomly shuffling elements - again:\n";
    random_shuffle(v1.begin(), v1.end());
    cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;

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
