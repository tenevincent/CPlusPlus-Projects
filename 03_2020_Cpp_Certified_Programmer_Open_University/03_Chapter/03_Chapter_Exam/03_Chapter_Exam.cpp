// 03_Chapter_Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <iostream>
#include <algorithm>
#include <deque>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <algorithm>
#include <map>


using namespace std;

//void myprint(int i) {
//	cout << i << ", ";// Line I
//}

//struct myprinter {
//    void operator() (int i) { cout << i << ", "; }
//};


//class A {
//    int a;
//public:
//    A(int a) :a(a) {}
//    int getA() const { return a; } void setA(int a) { this->a = a; }
//    bool operator < (const A& b) const { return a < b.a; }
//};
//struct myprinter { void operator() (const A& a) { cout << a.getA() << ", "; } };
//struct doubler
//{
//    void operator() (A a) { a.setA(a.getA() * 2); }//LINE I
//};
//
//class Founder {
//public:
//    int val;
//    Founder(int  v) :val(v) {}
//    bool operator() (int v) { return (v == val); }//LINE I
//};

//class A {
//    int a;
//public:
//    A(int a) : a(a) {}
//    int getA() const { return a; }    void setA(int a) { this->a = a; }
//    bool operator < (const A& b) const { return a < b.a; }
//};
//class Founder {
//
//    A val;
//public:
//    Founder(A& v) :val(v) {}
//    bool operator() (A& v) { return (v.getA() == val.getA()); }
//};
//
//
//class A {
//    int a;
//    int getA() const { return a; }    void setA(int a) { this->a = a; }
//public:
//    A(int a) : a(a) {}
//    bool operator==(A& b) { return a == b.a; }
//};
//struct Comparer {
//    bool operator()(const A& a, const A& b) { return a.getA() == b.getA(); };//LINE I
//};


class A {
	int a;
public:
	A(int a) : a(a) {}
	int getA() const { return a; }    void setA(int a) { this->a = a; }
	// bool operator < (const A& b) const { return a < b.a; }//LINE I
	bool operator==(A& b) { return a == b.a; }
	operator int() const { return a; }//LINE I
};




struct Compare {
	bool operator ()(A a) { return (a.getA() < 6); }
};

struct Pair {
	bool operator ()(int a) {
		return (a % 2) != 0;        //LINE I
	}
};


bool identical(int a, int b) {
	return b == a;//LINE I
}




void myprint(pair<int, int> i) {
	cout << i.first << ", ";
}




int main() {

	// 01
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v1(mynumbers, mynumbers + 7);
		//set<int> s1(mynumbers, mynumbers + 7);
		//deque<int> d1(mynumbers, mynumbers + 7);
		//d1.pop_front();// Line II
		//for_each(v1.begin(), v1.end(), myprint); // Line III
		//for_each(s1.begin(), s1.end(), myprint);
		//for_each(d1.begin(), d1.end(), myprint);
	}

	// 02
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v1(mynumbers, mynumbers + 7);
		//deque<int> d1(mynumbers, mynumbers + 7);
		//set<int> s1(mynumbers, mynumbers + 7);
		//v1.pop_back(5);// Line I
		//for_each(s1.begin(), s1.end(), myprinter());  // Line II
		//for_each(d1.begin(), d1.end(), *(new myprinter()));  // Line III
		//for_each(v1.begin(), v1.end(), myprinter );  //Line IV
	}

	// 03
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<A> v1(mynumbers, mynumbers + 7);
		//set<A> s1(mynumbers, mynumbers + 7);
		//for_each(v1.begin(), v1.end(), doubler()); for_each(v1.begin(), v1.end(), myprinter());//LINE II
		//for_each(s1.begin(), s1.end(), doubler()); for_each(s1.begin(), s1.end(), myprinter());//LINE III
	}

	// 04
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v1(mynumbers, mynumbers + 7);
		//deque<int> d1(mynumbers, mynumbers + 7);
		//set<int> s1(mynumbers, mynumbers + 7);
		//vector<int>::iterator found = find(v1.begin(), v1.end(), 3);//LINE I
		//if (found != v1.end())//LINE II
		//    cout << "found" << ", ";
		//cout << find(d1.begin(), d1.end(), 9) << ", ";//LINE III
		//cout << find(s1.begin(), s1.end(), 6);//LINE IV
	}

	// 05
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<A> v1(mynumbers, mynumbers + 7);
		//for_each(v1.begin(), v1.end(), doubler());
		//vector<A>::iterator it = find(v1.begin(), v1.end(), A(7));
		//cout << it->getA() << endl;//LINE III
	}

	//06
	{

		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v1(mynumbers, mynumbers + 7);
		//if (find(v1.begin(), v1.end(), 7) == find(v1.begin(), v1.end(), Founder(7).val)) {//LINE II
		//    cout << "Found!\n";
		//}
		//else {
		//    cout << "Not found!\n";
		//}
	}


	// 07
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<A> v1(mynumbers, mynumbers + 7);//LINE I
		//set<A> s1(mynumbers, mynumbers + 7);
		//A a(5);
		//Founder f(a);
		//find_if(s1.begin(), s1.end(), f);//LINE II
		//if (find_if(v1.begin(), v1.end(), f) != v1.end()) {//LINE III
		//    cout << "Found!\n";
		//}
		//else {
		//    cout << "Not found!\n";
		//}

	}


	// 08
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//vector<int>::iterator it;
		//int m1[] = { 9, 0, 2 };
		//it = find_end(v.begin(), v.end(), m1, m1 + 3);//LINE I
		//if (it != v.end())
		//    cout << "Found at position: " << it - v.begin() << endl;
	}


	// 09
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<A> v(mynumbers, mynumbers + 7);
		//vector<A>::iterator it;
		//A m1[] = { A(2), A(3), A(4) };
		//it = find_end(v.begin(), v.end(), m1, m1 + 3, Comparer());//LINE II
		//cout << "Found at position: " << it + v.begin() << endl;//LINE III
	}

	// 10
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//vector<int>::iterator it;
		//int m1[] = { 9, 0, 2 };
		//it = find_first_of(v.begin(), v.end(), m1, m1 + 3);//LINE I
		//cout << "First found at position: " << it - v.begin() << endl;//LINE II
	}


	// 11
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//vector<int>::iterator it = v.begin();
		//int m1[] = { 9, 0, 2 };

		//while ((it = find_first_of(it, v.end(), m1, m1 + 3)) != v.end()) {//LINE I
		//    cout << it - v.begin() << ", ";//LINE II
		//    it++;
		//}
		//cout << endl;
	}


	// 12
	{
		//int mynumbers[] = { 3, 9, 0, 2, 2, 2, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//vector<int>::iterator it = v.begin();

		//while ((it = adjacent_find(it, v.end())) != v.end()) {//LINE I
		//    cout << it - v.begin() << ", "; it--;//LINE II
		//}
		//cout << endl;
	}


	// m13
	{
		//int mynumbers[] = { 3, 9, 0, 2, 2, 2, 5 };
		//vector<A> v(mynumbers, mynumbers + 7);
		//vector<A>::iterator it = v.begin();

		//while ((it = adjacent_find(it, v.end(), compare)) != v.end()) {//LINE I
		//    cout << it - v.begin() << ", "; it++;//LINE II
		//}
		//cout << endl;
	}

	//14
	{

	}

	// 15
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//vector<int> d(mynumbers, mynumbers + 12);
		//int count =count(d.begin(), d.end(), 6);//LINE I
		//cout << count << endl;
	}

	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//vector<int> v(mynumbers, mynumbers + 12);

		//int count = std::count(v.begin(), v.end(), Compare());//LINE II
		//cout << count << endl;
	}


	//
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//set<A> d(mynumbers, mynumbers + 12);
		//int count = count_if(d.begin(), d.end(), Compare());//LINE II
		//cout << count << endl;
	}

	// Q18
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//set<int> s(mynumbers, mynumbers + 12);
		//int count = count_if(s.begin(), s.end(), Pair());//LINE II
		//cout << count << endl;
	}

	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//vector<int> v1(mynumbers, mynumbers + 12);
		//set<int> s1(mynumbers, mynumbers + 12);
		//v1.push_back(10);//LINE I
		//pair<set<int>::iterator, vector<int>::iterator> resultSet = mismatch(s1.begin(), s1.end(), v1.begin());//LINE II
		//cout << *resultSet.first << ", " << *resultSet.second << endl;//LINE III
	}


	// Q20
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//int othernumbers[] = { 3, 9, 0, 3, 1, 4, 3, 6, 6, 9, 8, 3 };
		//vector<int> v1(mynumbers, mynumbers + 12);
		//deque<int> d1(othernumbers, othernumbers + 12);

		//pair<deque<int>::iterator, vector<int>::iterator > result;//LINE II
		//result = mismatch(d1.begin(), d1.end(), v1.begin(), identical);         //LINE III
		//if (result.first == d1.end() && result.second == v1.end())
		//    cout << "Identical\n";
		//else
		//    cout << "Not identical\n";
	}


	// Q21
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//vector<int> v1(mynumbers, mynumbers + 12);
		//set<int> s1(mynumbers, mynumbers + 12);
		//v1.push_back(10);
		//pair<set<int>::iterator, vector<int>::iterator > resultSet = std::equal(s1.begin(), s1.end(), v1.begin());//LINE I
		//cout << *resultSet.first << ", " << *resultSet.second << endl;//LINE II
	}

	// Q22
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//set<A> s(mynumbers, mynumbers + 12);
		//cout << equal(s.begin(), s.end(), s.begin()) << endl;//LINE II
	}


	// Q23
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//vector<int>::iterator it;
		//int m1[] = { 9, 0, 2 };
		//it = search(v.begin(), v.end(), m1, m1 + 3);//LINE I
		//cout << "found at position: " << it - v.begin() << endl;//LINE II
	}


	// Q24
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<A> v(mynumbers, mynumbers + 7);
		//vector<A>::iterator it;
		//A m1[] = { A(2), A(3), A(4) };
		//it = search(v.begin(), v.end(), m1, m1 + 3);//LINE I
		//cout << "First found at position: " << it - v.begin() << endl;//LINE II
	}

	// Q25
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
		//vector<int> v(mynumbers, mynumbers + 12);

		//vector<int>::iterator it = search_n(v.begin(), v.end(), 2, 1);//LINE I
		//if (it != v.end())
		//    cout << it - v.begin() << endl;//LINE II
	}

	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//map<int, int> m;
		//for (int i = 0; i < 7; i++) {
		//	m[i] = mynumbers[i];
		//}
		//pair<const int, int> p(4, 1);
		//map<int, int>::iterator it = find(m.begin(), m.end(), p);//LINE I
		//if (it != m.end())
		//	cout << it->first << endl;
		//else
		//	cout << "Not found!\n";
	}



	{
		int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		map<int, int> m;
		for (int i = 0; i < 7; i++) {
			m[i] = mynumbers[i];//LINE I
		}

		for_each(m.begin(), m.end(), myprint);//LINE II
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
