// 01_Chapter_1_5_8_Queue_front()_back()_push().cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <queue>
#include <iostream>

using namespace std;

int main()
{
    int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
    queue<int> q1;
    q1.push(100);
    cout << "Front: " << q1.front() << " Back: " << q1.back() << endl;
    q1.push(13);
    cout << "Front: " << q1.front() << " Back: " << q1.back() << endl;
    q1.push(44);
    cout << "Front: " << q1.front() << " Back: " << q1.back() << endl;
    //removal;
    q1.pop();
    cout << "Front: " << q1.front() << " Back: " << q1.back() << endl;
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
