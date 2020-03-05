// 01_Chapter02_11_LowerBound().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//    set
#include <set>
#include <iostream>
#include <functional>

using namespace std;

template <class T> void print(T start, T end) {
    for (; start != end; ++start) {
        std::cout << *start << " ";
    }
}


void DoExecuteLowerBound();

int main()
{
    int t[] = { 1, 10, 8, 4, 5, 6, 3, 9, 7, 2 };
    set <int> s1(t, t + 10);
    cout << "S1: ";     print(s1.begin(), s1.end()); cout << endl;
    cout << "Finding range [4,6]:\n";
    set<int>::iterator it1 = s1.lower_bound(4);
    set<int>::iterator it2 = s1.upper_bound(6);
    print(it1, it2); cout << endl << endl;
    cout << "Finding single value range using equal_bounds\n";
    pair<set<int>::iterator, set<int>::iterator> p = s1.equal_range(4);
    print(p.first, p.second); cout << endl;


    DoExecuteLowerBound();



    return 0;
}


void DoExecuteLowerBound() {

    int t[] = { 1, 10, 5, 8, 4, 5, 6, 3, 9, 7, 2, 4 };
    multiset <int> s1(t, t + 12);
    cout << "S1: ";     print(s1.begin(), s1.end()); cout << endl;
    cout << "Finding range [4,6]:\n";
    multiset<int>::iterator it1 = s1.lower_bound(4);
    multiset<int>::iterator it2 = s1.upper_bound(6);
    print(it1, it2); cout << endl << endl;
    cout << "Finding single value range using equal_bounds\n";
    pair<multiset<int>::iterator, multiset<int>::iterator> p = s1.equal_range(4);
    print(p.first, p.second); cout << endl;
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
