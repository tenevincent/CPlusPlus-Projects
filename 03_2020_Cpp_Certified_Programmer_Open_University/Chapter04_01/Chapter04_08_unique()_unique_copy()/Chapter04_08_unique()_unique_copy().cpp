// Chapter04_08_unique()_unique_copy().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

template<class T>
void print(const T& value)
{
	cout << value << " ";
}

struct Equal
{
	//elements are equal if they are both odd or even
	bool operator()(const int& a, const int& b)
	{
		return a % 2 == b % 2;
	}
};

int main()
{
	int t[] = { 1, 1, 2, 3, 3, 1, 6, 7, 8, 2 };
	list <int> l1(t, t + 10);
	cout << "Source collection:\n";
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;

	cout << "Removing duplicate values - copy version:\n";
	vector <int> v1(l1.size(),-1);
	vector<int>::iterator newEnd = unique_copy(l1.begin(), l1.end(), v1.begin());


	cout << "Collection after removal - size did not change!:\n";
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	cout << "Displaying only valid elements:\n";
	cout << "v1: "; for_each(v1.begin(), newEnd, print<int>); cout << endl << endl;

	cout << "Removing duplicate values:\n";
	list<int>::iterator newEnd1 = unique(l1.begin(), l1.end());
	cout << "Collection after removal - size did not change!:\n";
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "Displaying only valid elements:\n";
	cout << "l1: "; for_each(l1.begin(), newEnd1, print<int>); cout << endl << endl;

	cout << "------------------------------------------------\n";
	cout << "Predicate versions:\n";
	int t1[] = { 1, 3, 2, 4, 5, 6, 7, 9, 8, 10 };
	list <int> l2(t1, t1 + 10);
	cout << "Source collection:\n";
	cout << "l2: "; for_each(l2.begin(), l2.end(), print<int>); cout << endl << endl;

	cout << "Removing duplicate values - copy version:\n";
	vector <int> v2(l2.size());
	vector<int>::iterator newEnd2 = unique_copy(l2.begin(), l2.end(), v2.begin(), Equal());
	cout << "Collection after removal - size did not change!:\n";
	cout << "l2: "; for_each(l2.begin(), l2.end(), print<int>); cout << endl;
	cout << "v2: "; for_each(v2.begin(), v2.end(), print<int>); cout << endl;
	cout << "Displaying only valid elements:\n";
	cout << "v2: "; for_each(v2.begin(), newEnd2, print<int>); cout << endl << endl;

	cout << "Removing duplicate values:\n";
	list<int>::iterator newEnd3 = unique(l2.begin(), l2.end(), Equal());
	cout << "Collection after removal - size did not change!:\n";
	cout << "l2: "; for_each(l2.begin(), l2.end(), print<int>); cout << endl;
	cout << "Displaying only valid elements:\n";
	cout << "l2: "; for_each(l2.begin(), newEnd3, print<int>); cout << endl << endl;

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
