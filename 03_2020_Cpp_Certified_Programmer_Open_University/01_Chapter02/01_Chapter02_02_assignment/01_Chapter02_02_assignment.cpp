// 01_Chapter02_02_assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//-    Constructor and assignment operator – set
#include <set>
#include <iostream>
#include <functional>

using namespace std;

template <class T> void print(T start, T end) {
	while (start != end) {
		std::cout << *start << " "; start++;
	}
}

int main()
{
	int t[] = { 1, 10, 8, 4, 6, 5, 3, 9, 7, 2 };
	//1. standard initialization - default constructor
	set <int> s1;
	//2. iterator constructor
	set <int> s2(t, t + 10);
	print(s2.begin(), s2.end()); cout << endl;
	//3. copy constructor
	set <int> s3(s2);
	print(s3.begin(), s3.end()); cout << endl;

	//4. providing different comparator
	set<int, greater <int> > s4(t, t + 10);
	print(s4.begin(), s4.end()); cout << endl;
	//5. Not allowed - source and target object are not of the same type
	//set<int, greater <int> > s5 (s3);

	//6. assignment
	set <int> s6;
	s6 = s3;
	print(s6.begin(), s6.end()); cout << endl;
	//7. Not allowed - assignment of incompatible set objects
	//s6 = s4;


	{

		int t[] = { 2, 10, 8, 4, 5, 5, 3, 10, 7, 2 };
		//1. standard initialization - default constructor
		multiset <int> s1;
		//2. iterator constructor
		multiset <int> s2(t, t + 10);
		print(s2.begin(), s2.end()); cout << endl;
		//3. copy constructor
		multiset <int> s3(s2);
		print(s3.begin(), s3.end()); cout << endl;

		//4. providing different comparator
		multiset<int, greater <int> > s4(t, t + 10);
		print(s4.begin(), s4.end()); cout << endl;
		//5. Not allowed - source and target object are not of the same type
		//multi_set<int, greater <int> > s5 (s3);

		//6. assignment
		multiset <int> s6;
		s6 = s3;
		print(s6.begin(), s6.end()); cout << endl;
		//7. Not allowed - assignment of incompatible multi_set objects
		//s6 = s4;
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
