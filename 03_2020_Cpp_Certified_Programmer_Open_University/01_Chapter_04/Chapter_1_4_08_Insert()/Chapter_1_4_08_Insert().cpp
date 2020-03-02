// Chapter_1_4_08_Insert().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>

using namespace std;

template <class I>
void print(const I& start, const I& end)
{
    I it;
    for (it = start; it != end; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    vector <int> v(a, a + 10);

    vector<int>::iterator it = v.insert(v.begin() + 5, 100);
    print(v.begin(), v.end());
    cout << "Inserted element: " << *it << endl;
    cout << "Size: " << v.size() << endl;

    vector <int> v2;
    v2.insert(v2.begin(), v.rbegin(), v.rend());
    print(v2.begin(), v2.end());

    vector <int> v3(v.begin(), v.begin() + 5);
    v3.insert(v3.end(), 3, 100);

    print(v3.begin(), v3.end());

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
