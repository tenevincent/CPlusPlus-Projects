// Chapter04_07_remove()_remove_if().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

template<class T>
void print(const T& value)
{
	cout << value << " ";
}

struct Even
{
	bool operator()(const int& a)
	{
		return a % 2 == 0;
	}
};

int main()
{
	int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,6 };
	list <int> l1(t, t + 11);
	cout << "Source collection:\n";
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;
	cout << "Removing value 6:\n";


	list<int>::iterator newEnd = remove(l1.begin(), l1.end(), 6);


	cout << "Collection after removal - size did not change!:\n";
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "Displaying only elements up to the new logical end of the collection:\n";
	cout << "l1: "; for_each(l1.begin(), newEnd, print<int>); cout << endl << endl;
	cout << "Removing all even values:\n";
	newEnd = remove_if(l1.begin(), l1.end(), Even());

	cout << "Collection after removal - size did not change!:\n";
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "Displaying only elements up to the new logical end of the collection:\n";
	cout << "l1: "; for_each(l1.begin(), newEnd, print<int>); cout << endl << endl;

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
