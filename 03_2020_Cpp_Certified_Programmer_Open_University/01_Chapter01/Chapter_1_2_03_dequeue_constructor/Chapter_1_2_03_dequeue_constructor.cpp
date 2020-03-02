// Chapter_1_2_03_dequeue_constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <deque>
#include <vector>
#include <iostream>

using namespace std;

int main()
{

    // 1.2.14 deque constructors – size constructors
    {
        deque<int> d1(10, 0);
        cout << "Size: " << d1.size() << endl;
        for (unsigned i = 0; i < d1.size(); ++i)
        {
            cout << d1[i] << " ";
        }
        cout << endl;
    }


    //1.2.15 deque – iterator constructors
    {
        int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
        //first one
        deque <int>d1(a1, a1 + 10);
        cout << "Size (d1):  " << d1.size() << endl;

        d1[0] = 9;
        d1[1] = 10;
        for (unsigned i = 0; i < d1.size(); ++i)
        {
            cout << d1[i] << " ";
        }
        cout << endl;
        //second one;
        deque <int>d2(a1 + 5, a1 + 10);
        cout << "Size (d2):  " << d2.size() << endl;
        for (unsigned i = 0; i < d2.size(); ++i)
        {
            cout << d2[i] << " ";
        }
        cout << endl;
    }



    // 1.2.15 deque – iterator constructors
    {
        int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
        //first one
        deque <int>d1(a1, a1 + 10);
        cout << "Size (d1):  " << d1.size() << endl;
        for (unsigned i = 0; i < d1.size(); ++i)
        {
            cout << d1[i] << " ";
        }
        cout << endl;
        //second one;
        deque <int>d2(a1 + 5, a1 + 10);
        cout << "Size (d2):  " << d2.size() << endl;
        for (unsigned i = 0; i < d2.size(); ++i)
        {
            cout << d2[i] << " ";
        }
        cout << endl;
    }

    // 1.2.16 Iterator constructors
    {
        //vector
        vector <int>v(10, 0);
        for (unsigned i = 0; i < v.size(); ++i)
        {
            v[i] = i + 1;
        }
        cout << "Size (v):  " << v.size() << endl;
        for (unsigned i = 0; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        //deque
        deque <int>d(v.begin(), v.begin() + 5);
        cout << "Size (d):  " << d.size() << endl;
        for (unsigned i = 0; i < d.size(); ++i)
        {
            cout << d[i] << " ";
        }
        cout << endl;
    }


    //  1.2.17 deque – copy constructors
    {
        int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
        //first one
        deque <int> d1(a1, a1 + 10);
        cout << "Size (d1):  " << d1.size() << endl;
        for (unsigned i = 0; i < d1.size(); ++i)
        {
            cout << d1[i] << " ";
        }
        cout << endl;
        //second one;
        deque <int> d2(d1);
        cout << "Size (d2):  " << d2.size() << endl;
        for (unsigned i = 0; i < d2.size(); ++i)
        {
            cout << d2[i] << " ";
        }
        cout << endl;
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
