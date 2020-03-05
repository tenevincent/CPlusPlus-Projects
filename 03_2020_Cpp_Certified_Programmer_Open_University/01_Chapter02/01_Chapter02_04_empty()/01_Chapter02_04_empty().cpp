// 01_Chapter02_04_empty().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <set>
#include <iostream>
#include <functional>

using namespace std;

template <class T> void print(T start, T end) {
    for (; start != end; ++start) {
        std::cout << *start << " ";
    }
}

int main()
{
    int t[] = { 2, 10, 8, 4, 5, 5, 3, 10, 7, 2 };
    multiset <int> s1(t, t + 10);
    set <int> s2(s1.begin(), s1.end());
    cout << "Multiset:\n";
    cout << "Size: " << s1.size() << " Max size: " << s1.max_size() << endl;
    print(s1.begin(), s1.end()); cout << endl;
    cout << "Set:\n";
    cout << "Size: " << s2.size() << " Max size: " << s2.max_size() << endl;
    print(s2.begin(), s2.end()); cout << endl;

    cout << "Deleting all elements from the multiset\n";
    s1.clear();
    if (s1.empty())
    {
        cout << "Multiset is empty!\n";
    }
    else
    {
        print(s1.begin(), s1.end()); cout << endl;
    }

    if (s2.empty())
    {
        cout << "Set is empty!\n";
    }
    else
    {
        print(s2.begin(), s2.end()); cout << endl;
    }
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
