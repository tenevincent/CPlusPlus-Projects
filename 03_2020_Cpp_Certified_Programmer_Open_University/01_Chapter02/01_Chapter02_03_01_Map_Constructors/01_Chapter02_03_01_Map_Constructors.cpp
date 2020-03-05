// 01_Chapter02_03_01_Map_Constructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//    map
#include <map>
#include <iostream>
#include <functional>
#include <iomanip>

using namespace std;

template<class T> void print(T start, T end) {
    while (start != end) {
        std::cout << start->first << ":" << start->second << " "; start++;
    }
}

template<class T, class U> void fillMap(map<T, T>& m, U start, U end)
{
    for (; start != end; ++start)
    {
        m.insert(pair<T, T>(*start, *start));
    }
}

void DoExecuteConstructor();

int main()
{
    int t[] = { 1, 10, 8, 4, 6, 5, 3, 9, 7, 2 };
    //1. standard initialization - default constructor
    map<int, int > m1;
    fillMap(m1, t, t + 10);
    //2. iterator constructor
    map<int, int> m2(m1.begin(), m1.end());
    //2b. iterator constructor - wrong
    //map<int, int> m2(t, t+10);
    print(m2.begin(), m2.end()); cout << endl;
    //3. copy constructor
    map<int, int> m3(m2);
    print(m3.begin(), m3.end()); cout << endl;

    //4. providing different comparator
    map<int, int, greater<int> > m4(m1.begin(), m1.end());
    print(m4.begin(), m4.end()); cout << endl;
    //5. Not allowed - source and target object are not of the same type
    //map<int, greater<int> > m5 (m3);

    //6. assignment
    map<int, int> m6;
    m6 = m3;
    print(m6.begin(), m6.end()); cout << endl;
    //7. Not allowed - assignment of incompatible map objects
    //m6 = m4;


    DoExecuteConstructor();


    return 0;
}



template<class T, class U> void fillMap(multimap<T, T>& m, U start, U end)
{
    for (; start != end; ++start)
    {
        m.insert(pair<T, T>(*start, *start));
    }
}


void DoExecuteConstructor() {
    int t[] = { 2, 10, 8, 4, 5, 5, 3, 10, 7, 2 };
    //1. standard initialization - default constructor
    multimap<int, int > m1;
    fillMap(m1, t, t + 10);
    //2. iterator constructor
    multimap<int, int> m2(m1.begin(), m1.end());
    //2b. iterator constructor - wrong
    //multimap<int, int> m2(t, t+10);
    print(m2.begin(), m2.end()); cout << endl;
    //3. copy constructor
    multimap<int, int> m3(m2);
    print(m3.begin(), m3.end()); cout << endl;

    //4. providing different comparator
    multimap<int, int, greater<int> > m4(m1.begin(), m1.end());
    print(m4.begin(), m4.end()); cout << endl;
    //5. Not allowed - source and target object are not of the same type
    //multimap<int, greater<int> > m5 (m3);

    //6. assignment
    multimap<int, int> m6;
    m6 = m3;
    print(m6.begin(), m6.end()); cout << endl;
    //7. Not allowed - assignment of incompatible multimap objects
    //m6 = m4;
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
