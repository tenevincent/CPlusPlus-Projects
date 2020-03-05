// 01_Chapter02_08_Swap().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// set
#include <set>
#include <string>
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
    string t1[] = { "aaa", "bbb", "ccc" };
    string t2[] = { "xxx", "yyy", "zzz" };
    set <string> s1(t1, t1 + 3);
    set <string> s2(t2, t2 + 3);
    cout << "S1: ";     print(s1.begin(), s1.end()); cout << endl;
    cout << "S2: ";   print(s2.begin(), s2.end()); cout << endl;
    cout << "Swap:\n";
    s1.swap(s2);
    cout << "S1: ";     print(s1.begin(), s1.end()); cout << endl;
    cout << "S2: ";   print(s2.begin(), s2.end()); cout << endl;
    cout << "Swap:\n";
    s2.swap(s1);
    cout << "S1: ";     print(s1.begin(), s1.end()); cout << endl;
    cout << "S2: ";   print(s2.begin(), s2.end()); cout << endl;
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
