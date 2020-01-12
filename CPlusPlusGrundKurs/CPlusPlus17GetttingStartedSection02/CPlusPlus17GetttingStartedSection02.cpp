// CPlusPlus17GetttingStartedSection02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;
#include <vector>
#include <iostream>
#include <array>
#include <list>
#include <forward_list>
#include "CPlusPlus17GetttingStartedSection02.h"
#include <deque>
#include <algorithm>
#include <iterator>

int main()
{

	// ExecuteArray();
    // ExecuteArray02();


    // ExecuteVector01();
    // ExecuteVector02();

    // ExecuteList();
    // ExecuteList02();

    ExecuteDequeue();



    ExecuteForwaredList01();



    std::cout << "Hello World!\n";
}

void ExecuteDequeue()
{

    deque<int> d = { 10, 20, 30, 40, 50 };

    cout << "\nInitial size of deque is " << d.size() << endl;

    d.push_back(60);
    d.push_front(5);

    cout << "\nSize of deque after push back and front is " << d.size() << endl;

    copy(d.begin(), d.end(), ostream_iterator<int>(cout, "\t"));
    d.clear();

    cout << "\nSize of deque after clearing all values is " << d.size() << endl;

    cout << "\nIs the deque empty after clearing values ? " << (d.empty() ? "true" : "false") << endl;
}

void ExecuteForwaredList01()
{

    forward_list<int> myForwardList = { 10, 10, 20, 30, 45, 45, 50 };

    cout << "\nlist with all values ..." << endl;
    copy(myForwardList.begin(), myForwardList.end(), ostream_iterator<int>(cout, "\t"));

    cout << "\nSize of list with duplicates is " << distance(myForwardList.begin(), myForwardList.end()) << endl;

    myForwardList.unique();

    cout << "\nSize of list without duplicates is " << distance(myForwardList.begin(), myForwardList.end()) << endl;

    myForwardList.resize(distance(myForwardList.begin(), myForwardList.end()));

    cout << "\nlist after removing duplicates ..." << endl;
    copy(myForwardList.begin(), myForwardList.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
}

void ExecuteList02()
{

    list<int> myList = { 100, 20, 5, 80, 50 };

    cout << "\nPrint the list before sorting ..." << endl;
    copy(myList.begin(), myList.end(), ostream_iterator<int>(cout, "-->"));
    cout << "X" << endl;

    myList.sort();

    cout << "\nPrint the list after sorting ..." << endl;
    copy(myList.begin(), myList.end(), ostream_iterator<int>(cout, "-->"));
    cout << "X" << endl;
}

void ExecuteList()
{

    list<int> myList;

    for (int count = 0; count < 5; ++count)
        myList.push_back((count + 1) * 100);

    auto pos = myList.begin();

    cout << "\nPrint the list ..." << endl;
    while (pos != myList.end())
        cout << *pos++ << "-->";
    cout << " X" << endl;
}

void ExecuteVector02()
{
    vector<int> v;
    cout << "\nType empty string to end the input once you are done feeding the vector" << endl;
    cout << "\nEnter some numbers to feed the vector ..." << endl;

    istream_iterator<int> start_input(cin);
    istream_iterator<int> end_input;
    copy(start_input, end_input, back_inserter(v));

    cout << "\nPrint the vector ..." << endl;
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
}

void ExecuteVector01()
{
    vector<int> v = { 1, 5, 2, 4, 3 };

    cout << "\nSize of vector is " << v.size() << endl;

    auto pos = v.begin();

    cout << "\nPrint vector elements before sorting" << endl;
    while (pos != v.end())
        cout << *pos++ << "\t";
    cout << endl;

    sort(v.begin(), v.end());

    pos = v.begin();

    cout << "\nPrint vector elements after sorting" << endl;

    while (pos != v.end())
        cout << *pos++ << "\t";
    cout << endl;
}

void ExecuteArray02()
{
    array<int, 6> arrayList;
    int size = arrayList.size();
    for (int index = 0; index < size; ++index)
        arrayList[index] = (index + 1) * 100;

    cout << "\nPrint values in original order ..." << endl;
    auto pos = arrayList.begin();
    while (pos != arrayList.end())
        cout << *pos++ << "\t";
    cout << endl;

    cout << "\nPrint values in reverse order ..." << endl;
    auto rpos = arrayList.rbegin();
    while (rpos != arrayList.rend())
        cout << *rpos++ << "\t";
    cout << endl;
}

void ExecuteArray()
{
	array<int, 5> a = { 1, 5, 2, 4, 3 };

	cout << "\nSize of array is " << a.size() << endl;

	auto pos = a.begin();
    for (auto elem : a)
    {
        cout << elem++ << "\t";
    }

	cout << endl;
	while (pos != a.end())
		cout << *pos++ << "\t";
	cout << endl;
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
