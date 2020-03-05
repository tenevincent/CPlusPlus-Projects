// Chapter_1_Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <deque>
#include <vector>
#include <iostream>
using namespace std;

template<typename T> ostream& print01(T& start, T& end)
{
    for (; start != end; ++start)
    {
        cout << *start << " ";
    }
    return cout;
}


template<typename T> ostream& print02(T const& start, T const& end){

for (T i = start; i != end; ++i)
{
    cout << *i << " ";
}
return cout;
}

template<typename T> ostream& print03(const T& start, const T& end)
{
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
        cout << *tmp << " ";
    }
    return cout;
}

 

template<typename T> ostream& print(const T& start, const T& end)
{
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
        cout << *tmp << " ";
    }
    return cout;
}


class A
{
public:
    int a;
public:
    A(int a) :a(a) {}
};

void fill(const int table[], unsigned size, vector<A*>& v)
{
    for (unsigned i = 0; i < size; ++i)
    {
        v.push_back(new A(table[i]));
    }
}


//ostream& operator<<(ostream& c, const A& o)
//{
//    c << o.a;
//    return c;
//}

ostream& operator<<(const A& o, ostream& c)
{
    c << o.a;
    return c;
}


int main()
{
    {
        // 01
        //std::vector<int>	v1;		// LINE I
        //v1.push_back(10);			// LINE II
        //std::cout << v1.front() << ":" << v1.back() << std::endl;		// LINE III
    }


    {
        // 02
        //vector<int>	v1(4, 3);
        //v1.push_back(4);
        //for (vector<int>::iterator i = v1.rbegin(); i != v1.rend(); ++i)
        //{
        //    cout << *i << " ";
        //}
    }

  
    {
        // 03
        //vector<int>	v1(10, -1);
        //vector<int> v2;
        //v2.reserve(10);
        //for (unsigned i = 0; i < 10; i++)
        //{
        //    v2.push_back(i);
        //}
        //cout << v1.size() << " " << v2.size() << " ";
    }


    {
        // 04
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //vector<int> v1(tab, tab + 10);
        //vector<int> v2(v1.size(), 0);
        //try
        //{
        //    for (unsigned i = 0; i <= v1.size(); ++i)
        //    {
        //        int tmp = v1[i];				// LINE I
        //        v1[i] = v1.at(v1.size() - i);		// LINE	II
        //        v1.at(i) = tmp;					// LINE III
        //        cout << v1[i] << " ";
        //    }
        //}
        //catch (...)
        //{
        //    cout << "Exception!" << endl;
        //}
    }

    {
        // 05
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //deque<int> d1(tab, tab + 10);
        //deque<int> d2;
        //deque<int>::iterator it;
        //for (it = d1.begin(); it != d1.end(); ++it)
        //{
        //    d2.push_back(d1[d1.end() - it - 1]);	//LINE I
        //}
        //print(d2.rbegin(), d2.rend()) << endl;	//LINE II
    }

    {
        // 06
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //deque<int> d1(tab, tab + 10);

        //deque<int>::const_iterator it = d1.begin() + 3;
        //d1.erase(it, it + 1);
        //print02(d1.begin(), d1.end());
        //d1.clear();
        //cout << d1.size() << endl;
    }

    {
        // 08
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //deque<int> d1(tab, tab + 10);
        //deque<int> d2;

        //while (!d1.empty())
        //{
        //    d2.push_front(d1.back());		//	LINE I
        //    d1.pop_front();					//	LINE II
        //}
        //print03(d2.begin(), d2.end()) << ": " << d2.size() << endl;
    }

    {
        //08
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //list<A> l1(tab, tab + 10);
        //deque<A> d1;
        //list<A>::iterator it;
        //for (it = l1.begin(); it != l1.end(); ++it)
        //{
        //    d1.insert(d1.begin(), it[0]);
        //}
        //print(d1.begin(), d1.end()) << endl;
    }
 
 
    {
        // 10
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //list<A> l1(tab, tab + 10);
        //deque<A> d1;
        //list<A>::iterator it;

        //for (it = l1.begin(); it != l1.end(); ++it)
        //{
        //    d1.insert(d1.begin(), *it);
        //}
        //print(d1.begin(), d1.end()) << endl;
    }

    {
        // 11
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //list<int> l1(tab, tab + 10);
        //list<int> l2;
        //list<int>::iterator it;
        //for (it = l1.begin(); it != l1.end(); ++it)
        //{
        //    l2.push_back(l1[l1.end() - it - 1]);	//LINE I
        //}
        //print(l2.begin(), l2.end()) << endl;	//LINE II

    }
    {
        // 12
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //list<int> l1(tab, tab + 10);

        //list<int>::iterator it = l1.begin() + 3;	//LINE I
        //l1.erase(it, advance(it, 1));					//LINE II
        //print(l1.begin(), l1.end());
        //l1.clear();										//LINE III
        //cout << l1.size() << endl;
    }

    {
        // 14
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //list<int> l1(tab, tab + 10);
        //list<int> l2;
        //l2.resize(10);

        //while (!l1.empty())
        //{
        //    l2.insert(l2.end(), l1.front());
        //    l1.pop_front();
        //}
        //print(l2.begin(), l2.end()) << ": " << l2.size() << endl;
    }

    {
        // 15
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //list<A> l1(tab, tab + 10);
        //list<A> l2;
        //list<A>::iterator it;
        //for (it = l1.begin(); it != l1.end(); ++it)
        //{
        //    l2.push_front(it);
        //}
        //print(l2.begin(), l2.end()) << endl;
    }

    {
        // 16
        //int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //vector<A*> v1;
        //fill(tab, 10, v1);

        //vector<A*>::iterator it;
        //list<A> l1;
        //for (it = v1.begin(); it != v1.end(); ++it)
        //{
        //    l1.push_front(**it);
        //}
        //print(l1.begin(), l1.end()) << endl;
    }

    {
        // 19
        //int t[] = { 3, 5, 1, 4, 2 };
        //vector<int>	v(t, t + 5);
        //priority_queue<int> q(v.begin(), v.end());
        //cout << q.top() << " ";
        //q.push(0);
        //cout << q.top() << endl;

    }

    {
        // 22
        //int t[] = { 1, 5, 3, 4, 2 };
        //deque<int>	d(t, t + 5);
        //queue<int> q(d);
        //cout << q.front() << " " << q.back() << " ";
        //q.pop();
        //cout << q.front() << " " << q.back() << endl;

    }

    {
        //// 23
        //list liste; stack s(liste);
       
        //stack st;
        //vector v1; stack s3(v1);
        //deque d4; stack s4(d4);

        //deque d5; stack s5(d5.begin(), d5.end());
    }

    {
        int t[] = { 1, 5, 3, 4, 2 };
        deque<int>	d(t, t + 5);
        stack<int> s(d);
        cout << s.top() << " ";
        d.push_front(6);
        cout << s.top() << endl;
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
