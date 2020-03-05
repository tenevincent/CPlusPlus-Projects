// 01_Chapter02_10_Count().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
    int t[] = { 2, 10, 8, 4, 5, 5, 3, 10, 7, 2 };
    set<int, greater<int> > s1(t, t + 10);
    multiset<int, greater<int> > s2(t, t + 10);
    cout << "S1: ";     print(s1.begin(), s1.end()); cout << endl;
    cout << "S2: ";   print(s2.begin(), s2.end()); cout << endl;
    cout << "How many '2' there are?" << endl;
    cout << "S1: " << s1.count(2) << endl;
    cout << "S2: " << s2.count(2) << endl;
    if (s1.count(1) > 0)
    {
        cout << "There is '1' in the set\n";
    }
    else
    {
        cout << "There is no '1' in the set\n";
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
