// 01_Chapter_1_5_10_Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int a1[] = { 1,2,3,4,5,6,7,8,9,10 };

    priority_queue<int>  q1(a1, a1 + 10);
    priority_queue<int>  q2;
    //1. Correct - source and target stack are of the same type
    q1 = q2;
    cout << q1.size() << ":" << q2.size() << endl;

    priority_queue<int, deque <int> > q3;
    //2a. Incorrect - target and source queue are not of the same type - internal
       // storage
    q3 = q2;
    priority_queue<int, vector <int>, greater <int> > q4;
    //2b. Incorrect - target and source queue are not using the same comparator
    q4 = q1;
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
