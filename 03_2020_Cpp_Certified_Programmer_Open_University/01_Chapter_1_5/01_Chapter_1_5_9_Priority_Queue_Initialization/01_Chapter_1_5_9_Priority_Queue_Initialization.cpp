// 01_Chapter_1_5_9_Priority_Queue_Initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <functional>
using namespace std;

int main()
{


    // 1.5.15 Priority queue – initialization
    {
        int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
        //1. default constructor
        priority_queue<int>  s1;
        //2. copy constructor;
        priority_queue<int>  s2(s1);
        //3. initiilization using iterators
        vector<int>  v1(a1, a1 + 10);
        priority_queue<int>  s3(v1.begin(), v1.end());

        //4. using non-default storage
        priority_queue<int, deque <int> > s4;

        //5. Providing different comparator type
        priority_queue<int, vector<int>, greater <int> > s5;

    }


    {
        int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
        vector<int>    v1(a1, a1 + 10);
        //1. using external storage object only
        priority_queue<int>  q1(v1);
        //2. using forbidden container type as internal storage
        priority_queue<int, list <int> > q2;
        //3. providing comparator but not container type
        priority_queue<int, greater <int> > q3;
        //4. using different comparator object than declared - warning,
            //but the comparator object type is deducted from constructor parameter
        priority_queue<int>  q4(greater<int>());
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
