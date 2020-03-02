// 01_Chapter01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>
using namespace std;


int main()
{

	std::vector <int> v1(10);
	vector <int> v2 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (unsigned i = 0; i < v1.size(); ++i)
	{
		v1[i] = i;
	}
	for (unsigned i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << " ";
		cout << v2[i] << " ";
	}
	cout << endl;

	for (auto elem : v1)
	{
		cout << "elem: " << elem << " " << endl;
		cout << "elem: " << elem << " " << endl;
	}

	cout << endl;


	cout << v1.size() << endl;
	v1.push_back(100);
	cout << v1.size() << endl;
	v1.pop_back();
	cout << v1.size() << endl;
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
