// Chapter_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iostream>
#include "Chapter_02.h"
using namespace std;



void  demo_vector1();

void  demo_vector2();

void  demo_vector3();

void  demo_vector4();

void demo_copy_constructor();

int main()
{

    //demo_vector1();
     
    //demo_vector2();

    //demo_vector3();

    // demo_vector4();

    demo_copy_constructor();


    std::cout << "Hello World!\n";
}

void demo_vector1()
{
    {
        vector<int> v1(10, 0);
        cout << "Size: " << v1.size() << endl;
        for (unsigned i = 0; i < v1.size(); ++i)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
}




void demo_vector2()
{

    {
        vector <int> _vector(10);
        vector <int> v2 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        for (unsigned i = 0; i < _vector.size(); ++i)
        {
            _vector[i] = i;
        }
        for (unsigned i = 0; i < _vector.size(); ++i)
        {
            cout << _vector[i] << " ";
            cout << v2[i] << " ";
        }
        cout << endl;


        std::vector<int>::iterator begin = _vector.begin();
        cout << *begin << endl;


        cout << _vector.size() << endl;
        _vector.push_back(100);
        cout << _vector.size() << endl;
        _vector.pop_back();
        cout << _vector.size() << endl;
    }
}

void demo_vector3()
{
    {
        //first one
        vector<int> v1(10, 0);
        for (unsigned i = 0; i < v1.size(); ++i)
        {
            v1[i] = i + 1;
        }
        cout << "Size (v1):  " << v1.size() << endl;
        for (unsigned i = 0; i < v1.size(); ++i)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
        //second one;
        vector<int> v2(v1.begin(), v1.end());
        cout << "Size (v2):  " << v2.size() << endl;
        for (unsigned i = 0; i < v2.size(); ++i)
        {
            cout << v2[i] << " ";
        }
    }
}


void demo_vector4() {
     int a1[]={1,2,3,4,5,6,7,8,9,10};
    //first one
     int size = sizeof(a1)/sizeof(a1[0]);
    vector<int> v1(a1, a1+size);
    cout<<"Size (v1):  "<<v1.size()<<endl;
    for(unsigned i = 0; i < v1.size(); ++i)
    {
        cout<< v1[i]<<" ";
    }
    cout<<endl;
    //second one;
    vector<int> v2(a1+5,a1+10);
    cout<<"Size (v2):  "<<v2.size()<<endl;
    for(unsigned i = 0; i < v2.size(); ++i)
    {
        cout<< v2[i]<<" ";
    }
    cout<<endl;
}

void demo_copy_constructor() {
    int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
    //first one
    vector<int> v1(a1, a1 + 10);
    cout << "Size (v1):  " << v1.size() << endl;
    for (unsigned i = 0; i < v1.size(); ++i)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    //second one;
    vector<int> v2(v1);
    cout << "Size (v2):  " << v2.size() << endl;
    for (unsigned i = 0; i < v2.size(); ++i)
    {
        cout << v2[i] << " ";
    }
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
