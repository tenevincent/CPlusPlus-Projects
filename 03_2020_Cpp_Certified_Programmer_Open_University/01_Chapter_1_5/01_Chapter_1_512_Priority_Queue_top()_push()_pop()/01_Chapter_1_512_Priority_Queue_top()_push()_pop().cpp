// 01_Chapter_1_512_Priority_Queue_top()_push()_pop().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <functional>

using namespace std;

int main()
{
    int a1[] = { 1, 100, 34, 23, 9 };

    priority_queue<int>  q1(a1, a1 + 5);
    priority_queue<int, deque<int>, greater <int> > q2(a1, a1 + 5);
    cout << "q1 queue top: " << q1.top() << endl;
    cout << "q2 queue top: " << q2.top() << endl;
    cout << "Adding value: 101\n";
    q1.push(101);
    q2.push(101);
    cout << "q1 queue top: " << q1.top() << endl;
    cout << "q2 queue top: " << q2.top() << endl;
    cout << "Removing top of the queue: \n";
    q1.pop();
    q2.pop();
    cout << "q1 queue top: " << q1.top() << endl;
    cout << "q2 queue top: " << q2.top() << endl;
    //not allowed assignment
    //q1.top()=1000;
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
