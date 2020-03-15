// 02_Chapter_Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>
#include <iostream>
#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <set>
#include <list>


using namespace std;

class A {
	int a;
public:
	string name;
	A(int a) :a(a) {}
	int getA() const { return a; }
	operator int() const { return a; }
	bool operator < (const A& b) const { return a < b.a; }//LINE I
};

template<class T> void print(T start, T end) {
	while (start != end) {
		std::cout << *start << ", "; start++;
	}
}

int main()
{


	{
		// Q1
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int>        v(mynumbers, mynumbers + 7);
		//set<int> set1(v.begin(), v.end());
		//set<int, greater<int> > set2(v.begin(), v.end()); //LINE I
		//for (set<int, int>::iterator i = set2.begin(); i != set2.end(); i++)
		//	cout << *i << " ";
		//for (set<int>::iterator i = set1.begin(); i != set1.end(); i++)
		//	cout << *i << ", ";
		//cout << endl;

	}


	// Q2
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int>        v(mynumbers, mynumbers + 7);
		//set<int> s1(v.begin(), v.end());
		//s1.insert(v.begin(), v.end());
		//s1.insert(10);

		//auto lower = s1.lower_bound(4);
		//auto upper = s1.upper_bound(6);


		//s1.erase(s1.lower_bound(4), s1.upper_bound(6));
		//s1.insert(v.begin(), v.end());
		//for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
		//	cout << *i << ", ";
	}


	// Q3
	{
		//A mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<A>        v(mynumbers, mynumbers + 7);
		//set<A> s1(v.begin(), v.end()); //LINE I
		//s1.insert(v.begin(), v.end());
		//s1.erase(s1.lower_bound(3), s1.upper_bound(6));
		//for (set<A>::iterator i = s1.begin(); i != s1.end(); i++) {
		//	cout << i->getA() << " ";
		//}
		//cout << endl;
	}


	// Q4
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 4 };
		//list<int> v(mynumbers, mynumbers + 7);//LINE I
		//set<int> s1(v.begin(), v.end());
		//if (s1.count(4) == 2) {
		//    s1.erase(4);
		//}
		//for (set<int>::iterator i = s1.begin(); i != s1.end(); i++) {
		//    cout << *i << ", ";
		//}
	}


	// Q5
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//set<int> s1(v.begin(), v.end());
		//s1.insert(v.begin(), v.end());
		//s1.insert(v.begin(), v.end());//LINE I
		//set<int>::iterator found = s1.find(9);
		//for (; found != s1.end(); ++found)
		//    cout << *found << ", ";
	}


	// Q6
	//{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//set<int> s(v.begin(), v.end());
		//for (int i = 10; i > 0; i) {
		//    int x = s.top(); //LINE I
		//    s.pop();                 //LINE II
		//    v.push_back(i + x);//LINE III
		//}
		//print(v.begin(), v.end()); print(s.begin(), s.end()); cout << endl;
	//}


	// Q7
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//set<int> s(v.begin(), v.end());
		//s.insert(v.begin(), v.end());
		//v.push_back(5);
		//s.insert(8);
		//pair<set<int>::iterator, set<int>::iterator> range;
		//range = s.equal_range(5);//LINE I
		//cout << *range.first << ", " << *range.second << endl;


		//typedef set<int, less< int > > IntSet;
		//IntSet s1;
		//set <int, less< int > > ::const_iterator s1_RcIter;

		//s1.insert(10);
		//s1.insert(20);		
		//s1.insert(21);
		//s1.insert(30);
		//s1.insert(35);
		//s1.insert(40);
		//s1.insert(45);

		//pair <IntSet::const_iterator, IntSet::const_iterator> p1, p2;
		//p1 = s1.equal_range(20);

		//std::cout << *p1.first << " " << *p1.second << std::endl;

	}





	// Q8
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//multiset<int> s1(v.begin(), v.end());
		//multiset<int, greater<int> > s2(v.begin(), v.end());//LINE I
		//s2.insert(9);//LINE II
		//for (multiset<int>::iterator i = s1.begin(); i != s1.end(); i++)
		//    cout << *i << ", ";
		//for (multiset<int, greater<int> >::iterator i = s2.begin(); i != s2.end(); i++)
		//    cout << *i << ", ";
		//cout << endl;
	}

	// Q9
	//{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//set<int>        s1(mynumbers, mynumbers + 7);
		//multiset<int> s2(s1.begin(), s1.end());
		//s2.insert(s1.begin(), s1.end());
		//s2.erase(s2.lower_bound(1), s2.upper_bound(4));//LINE I
		//for (multiset<int>::iterator i = s2.begin(); i != s2.end(); i++) {
		//    cout << *i << ", ";
		//}
	//}

	// Q10
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//set<A>        s(mynumbers, mynumbers + 7);                        //LINE II
		//multiset<A> s1(s.begin(), s.end());        //LINE III
		//s1.insert(s.begin(), s.end());
		//s1.erase(s1.lower_bound(5), s1.upper_bound(2));//LINE IV
		//multiset<A>::iterator i = s1.begin();
		//for (; i != s1.end(); i++)
		//{
		//	cout << i->getA() << ", ";
		//}
		//cout << endl;
	}

	// Q11
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 5 };
		//list<int> v(mynumbers, mynumbers + 7);//LINE I
		//multiset<int> s1(v.begin(), v.end());
		//if (s1.count(5) == 1)//LINE II
		//    s1.erase(5);
		//for (multiset<int>::iterator i = s1.begin(); i != s1.end(); i++)
		//    cout << *i << ", ";
	}

	// Q12
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 7 };
		//multiset<int> s1(mynumbers, mynumbers + 7);//LINE I
		//s1.insert(s1.find(3), 6);                                 //LINE II
		//for (multiset<int>::iterator i = s1.begin(); i != s1.end(); i++)
		//	cout << *i << ", ";
	}

	// Q13
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 7 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//multiset<int> s1(mynumbers, mynumbers + 7);
		//for (int i = 9; i > 0; i) {
		//	double x = s1.pop();//LINE I
		//	v.push_back(i + x);  //LINE II
		//}
		//print(v.begin(), v.end()); cout << endl;
	}

	// Q14
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 7 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//multiset<int> s1(v.begin(), v.end());
		//s1.insert(v.begin(), v.end());
		//s1.insert(v.begin(), v.end());//LINE I
		//pair<multiset<int>::iterator, multiset<int>::iterator> range;
		//range = s1.equal_range(5);
		//while (range.first != range.second) {
		//	cout << *range.first << ", ";
		//	range.first++;
		//}
	}


	// Q15
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 8 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//map<int, string> m;
		//for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
		//	cout << *i << ", ";//LINE I
	}

	// Q16
	{
		// Inserting twice will be ignore... ==> SET
		//set<A> st;
		//auto a1 = A(1);
		//a1.name = "vincent";
		//st.insert(a1);
		//auto a2 = A(2);
		//a2.name = "Tene";
		//st.insert(a2);

		//a2 = A(1);
		//a2.name = "Vincent(2)";
		//st.insert(a2);


		//// Inserting twice will be ignore... ==> map
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
		//map<int, string> m;
		//for (int i = 0; i < 7; i++)
		//	m.insert(pair<int, string>(mynumbers[i], words[i]));//LINE I
		//m[0] = "ten";                                                                                           //LINE II
		//m.insert(pair<int, string>(1, "eleven"));                //LINE III
		//for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
		//	cout << i->second << ", ";
	}

	// Q17
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
		//map<int, string> m;
		//for (int i = 0; i < 7; i++)
		//	m.insert(pair<int, string>(mynumbers[i], words[i]));//LINE I
		//if (m[10] == "ten")//LINE II, VTENE==> Add a new item with a null value: Don`t use it...
		//	cout << "tenth element";
		//for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
		//	cout << i->second << ", ";
	 //
	}


	// Q18
	{
		int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
		map<A, string> m;
		for (int i = 0; i < 7; i++) {
			m.insert(pair<A, string>(A(mynumbers[i]), words[i]));
		}

		auto lwer = m.lower_bound(3);
		auto uper = m.upper_bound(4);

		m.erase(m.lower_bound(3), m.upper_bound(4));//LINE II
		map<A, string>::iterator i = m.begin();
		for (; i != m.end(); i++)
			cout << i->second << ", ";
	}


	// Q19
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 5 };
		//string words[] = { "three", "nine", "zero", "two", "one", "four", "five", "five" };	
		//map<int, string> m;
		//for (int i = 0; i < 8; i++) {
		//	m.insert(pair<int, string>(mynumbers[i], words[i]));
		//}
		//if (m.count(5) == 2)
		//	m.erase(2);
		//for (map<int, string>::iterator i = m.begin(); i != m.end(); i++) {
		//	cout << i->first << ", ";
		//}

	}


	// Q20
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };

		//map<int, string> m;
		//for (int i = 0; i < 10; i++)
		//	m.push_back(pair<int, string>(mynumbers[i], words[i]));//LINE I

		//for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)//LINE II
		//	cout << i->first << ", ";
	}


	// Q21
	{
		//int mynumbers[] = { 3, 9, 3, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//map<int, string> m;
		//for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		//	stringstream s;
		//	s << *i;
		//	m.insert(pair<int, string>(*i, s.str()));
		//}
		//pair<map<int, string>::iterator, map<int, string>::iterator> range;
		//range = m.equal_range(3);
		//map<int, string>::iterator i = range.first;//LINE 1
		//for (; i != range.second; i++) {
		//	cout << i->first << ", ";
		//}
	}

	// Q22
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//multimap<int, string> m;
		//for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		//	stringstream s;
		//	s << *i << *i;
		//	m.insert(pair<int, string>(*i, s.str()));
		//}
		//for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++) {
		//	cout << i->first << ", ";//LINE I
		//}
	}


	// Q23
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1 };
		//string words[] = { "three", "nine", "zero", "two", "one" };
		//multimap<int, string> m;
		//for (int i = 0; i < 4; i++) {
		//	m.insert(pair<int, string>(mynumbers[i], words[i]));
		//	m.insert(pair<int, string>(mynumbers[i], words[i]));
		//}
		//m[0] = "ten";                //LINE I
		//for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
		//	cout << i->second << ", ";

	}

	// Q24
	{

		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
		//multimap<int, string> m;
		//for (int i = 0; i < 7; i++)
		//	m.insert(pair<int, string>(mynumbers[i], words[i]));
		//if (m.find(0)->second == "zero")//LINE I
		//	cout << "found expected ";
		//for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
		//	cout << i->second << ", ";
		//cout << m.size();
	}


	// Q26
	{

	}


	// Q27
	{
		//	int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//	string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
		//	multimap<int, string> m;
		//	for (int i = 0; i < 3; i++)
		//		m.push_back(pair<int, string>(mynumbers[i], words[i])); //LINE I

		//	for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
		//		cout << i->first << " "; //LINE II
	}


	// Q28
	{
		//int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
		//vector<int> v(mynumbers, mynumbers + 7);
		//multimap<int, string> m;
		//for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		//	stringstream s;
		//	s << *i << *i << *i;
		//	m.insert(pair<int, string>(*i, s.str()));//LINE I
		//}
		//pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range;//LINE II
		//range = m.equal_range(4);
 

		//for (multimap<int, string>::iterator i = range.first; i != range.second; i++) {
		//	cout << i->first << ", ";
		//}
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
