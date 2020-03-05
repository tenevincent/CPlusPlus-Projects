// 01_Chapter02_06_Erase().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// set example
#include <set>
#include <iostream>
#include <functional>
//#include <multiset>
 

using namespace std;

template <class T> void print(T start, T end) {
    for (; start != end; ++start) {
        std::cout << *start << " ";
    }
}


void DoExecuteErase();


int main()
{
    int t[] = { 16, 10, 8, 40, 6, 15, 3, 9, 7, 2 };
    set<int, greater<int> > s1(t, t + 10);
    print(s1.begin(), s1.end()); cout << endl << endl;
    cout << "Removing element from a certain position (iterator):\n";
    set<int>::iterator it = s1.find(15);
    s1.erase(it);
    print(s1.begin(), s1.end()); cout << endl << endl;

    cout << "Removing certain value (9) from the set:\n";
    s1.erase(9);
    print(s1.begin(), s1.end()); cout << endl << endl;

    cout << "Removing range of iterators:\n";
    s1.erase(s1.find(6), s1.end());
    print(s1.begin(), s1.end()); cout << endl << endl;

    cout << "Removing all the elements from the set\n";
    s1.clear();
    cout << "S1 size: " << s1.size() << endl;
    return 0;
}


void DoExecuteErase() {


    //int t[] = { 9, 10, 8, 15, 6, 15, 3, 9, 7, 2 };
    //multiset<int, greater > s1(t, t + 10);
    //print(s1.begin(), s1.end()); cout << endl << endl;
    //cout << "Removing element from a certain position (iterator):\n";
    //multiset::iterator <int> it = s1.find(15);
    //s1.erase(it);
    //print(s1.begin(), s1.end()); cout << endl << endl;

    //cout << "Removing certain value (9) from the multiset:\n";
    //s1.erase(9);
    //print(s1.begin(), s1.end()); cout << endl << endl;

    //cout << "Removing range of iterators:\n";
    //s1.erase(s1.find(6), s1.end());
    //print(s1.begin(), s1.end()); cout << endl << endl;

    //cout << "Removing all the elements from the set\n";
    //s1.clear();
    //cout << "S1 size: " << s1.size() << endl;
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
