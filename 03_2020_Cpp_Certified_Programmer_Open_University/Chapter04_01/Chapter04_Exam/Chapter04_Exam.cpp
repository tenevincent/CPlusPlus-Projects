// Chapter04_Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>
 


using namespace std;
void printer(int i) {
    cout << i << ", ";
}


template<class T>struct Out {
    ostream& out;
    Out(ostream& o) : out(o) {}
    void operator()(const T& val) {
        out << val << ", ";
    }
};
struct Sequence {
    int start;
    Sequence(int start) :start(start) {}
    int operator()()
    {
        return start++ % 7;
    }
};
struct Odd { bool operator()(int v) { return v % 2 == 0; } };


int main()
{

    {
        // 01
        //int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        //vector<int> v1(mynumbers, mynumbers + 7);
        //copy(mynumbers, mynumbers + 7, v1.end());//LINE I
        //for_each(v1.begin(), v1.end(), printer);//LINE II
    }


    {
        // 02
        //int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        //vector<int> v1(mynumbers, mynumbers + 7);
        //copy_backward(mynumbers, mynumbers + 7, v1.rend());//LINE I
        //for_each(v1.begin(), v1.end(), printer);//LINE II
    }

    {
        // 03
        //int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        //set<int> s1(mynumbers, mynumbers + 7);
        //vector<int> v1(s1.rbegin(), s1.rend());
        //swap(s1, v1);//LINE I
        //for_each(v1.begin(), v1.end(), printer);//LINE II
    }
  
    {
        vector<int> v1(4);
        generate(v1.rbegin(), v1.rend(), Sequence(10));//LINE I
        stable_partition(v1.begin(), v1.begin(), Odd());//LINE II
        for_each(v1.begin(), v1.end(), Out<int>(cout));
    }


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
