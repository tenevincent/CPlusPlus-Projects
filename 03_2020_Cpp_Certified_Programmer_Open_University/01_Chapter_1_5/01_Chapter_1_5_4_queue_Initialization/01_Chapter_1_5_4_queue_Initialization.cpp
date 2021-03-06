// 01_Chapter_1_5_4_queue_Initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <queue>
#include <deque>
#include <list>
#include <vector>
using namespace std;

int main()
{

    {
        int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
        //1. default constructor
        queue <int> s1;
        //2. copy constructor;
        queue <int> s2(s1);
        //3. initiilization using predefined container
        deque <int> d1(a1, a1 + 10);
        queue <int> s3(d1);

        //4. using non-default storage
        queue<int, list <int> > s4;
        queue<int, vector <int> > s5;
    }



    // 1.5.10 Queue initialization � the wrong way
    {
        int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
        //1. Not allowed - iterator constructor
        queue <int> s1(a1, a1 + 10);
        //2. Not allowed - copy constructor source and target stack object using different
           // storage containers
        queue<int, vector <int> > s2(s1);
        //3. Not allowed - initialization using predefined container - using different
           //storage object than declared
        deque <int> d1(a1, a1 + 10);
        queue<int, vector <int> > s3(d1);

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
