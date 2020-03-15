// 02_Chapter_modul_Quizz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <set>
#include <iostream>
#include <vector>
#include <list>
#include<string>
#include <map>

using namespace std;
int main()
{

    {
        int myNumbers[] = { 3,9,2,4,4 };
        std::vector<int> v(myNumbers, myNumbers + 5);
        std::set<int>  mySet(v.begin(), v.end());
        if (mySet.count(4)) {
            mySet.erase(4);

            mySet.insert(4);
            mySet.insert(4);
            mySet.erase(4);
        }

    }
  
    {
        int mynumbers[] = {3,9,2,1,4};
        std::vector<int> v(mynumbers,mynumbers+5);

        std::set<int> myset(v.begin(), v.end());
        myset.insert(v.begin(), v.end());
        myset.erase(myset.lower_bound(2), myset.upper_bound(3));
    }


    {
        int myNumbers[] = {3,9,2,4,5};
        std::list<int> mylist(myNumbers,myNumbers+5);
      //  mylist.erase(4);

    }

    {
        int myNumbers[] = { 3,9,2,4,5 };
        string words[] = {"three", "nine", "two", "four", "five"};

        map<int, string> m;
        for (size_t i = 0; i < 5; i++)
        {
            m.insert(pair<int,string>(myNumbers[i], words[i]));                
        }
        pair<map<int, string>::iterator, map<int, string>::iterator > myRange = m.equal_range(3);


    }

    std::cout << "Hello World!\n";
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
