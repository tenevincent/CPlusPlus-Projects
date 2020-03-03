// 01_Chapter_1_5_2_Assignment_Operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>

#include<stack>

#include<deque>

#include<list>

#include<vector>

using namespace std;

int main()

{

    int a1[] = { 1,2,3,4,5,6,7,8,9,10 };

    deque<int> d1(a1, a1 + 10);

    stack<int> s1;

    stack<int> s2(d1);

    //1. Correct - source and target stack are of the same type

    s1 = s2;

    cout << s1.size() << ":" << s2.size() << endl;

    stack<int, vector<int> > s3;

    //2. Incorrect - target and source stack are not of the same type

    //s3 = s2;

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
