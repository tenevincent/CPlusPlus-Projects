// 03_Chapter_search_n().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <list>

using namespace std;

template <class T>
void print(const T& value)
{
	cout << value << " ";
}

struct Compare
{

	bool operator()(const char& f, const char& s)
	{
		return tolower(f) == tolower(s);
	}
};

int main()
{

	/*
	This function searches the range first, last for the first sequence of count identical elements, each equal to the given value value.
	*/



	int t[] = { 1, 2, 3, 4, 1, 1, 1, 2, 3, 3, 5, 6, 7, 7, 7, 2, 3, 4 };
	vector <int> v1(t, t + 18);
	for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	cout << endl;
	cout << "Searching for the following sequence: 7 7 7:\n";
	vector<int>::iterator found = search_n(v1.begin(), v1.end(), 3, 7);
	if (found != v1.end())
	{
		cout << "Sequence: 7 7 7 " << *found << " has been found at position: " << distance(v1.begin(), found) << endl;
	}
	else
	{
		cout << "Sequence 7 7 7 could not  be found\n";
	}
	cout << endl;

	cout << "Searching for the following sequence: 2 2:\n";
	found = search_n(v1.begin(), v1.end(), 2, 2);
	if (found != v1.end())
	{
		cout << "Sequence: 2 2 " << *found << " has been found at position: " << distance(v1.begin(), found) << endl;
	}
	else
	{
		cout << "Sequence 2 2 could not be found\n";
	}
	cout << endl;

	char ts[] = { 'a','b', 'a', 'A', 'A', 'b','D', 'A', 'b', 'C', 'a', 'f' };
	list <char> l1(ts, ts + 12);
	cout << "Searching for the following sequence: A A - case sensitive comparison:\n";
	list<char>::iterator founds = search_n(l1.begin(), l1.end(), 2, 'A');
	if (founds != l1.end())
	{
		cout << "Sequence: A A " << *founds << " has been found at position: " << distance(l1.begin(), founds) << endl;
	}
	else
	{
		cout << "Sequence: A A could not  be found\n";
	}
	cout << endl;

	cout << "Searching for the following sequence: A A - case insensitive comparison:\n";
	founds = search_n(l1.begin(), l1.end(), 2, 'A', Compare());
	if (founds != l1.end())
	{
		cout << "Sequence: A A " << *founds << " has been found at position: " << distance(l1.begin(), founds) << endl;
	}
	else
	{
		cout << "Sequence: A A could not  be found\n";
	}
	cout << endl;

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
