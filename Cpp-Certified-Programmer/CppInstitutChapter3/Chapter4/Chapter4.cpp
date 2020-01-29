// Chapter4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Chapter4.h"
using namespace std;

void executeDemoMatrix();

int Int = 1;
short Short = 2;
long Long = 3;
float Float = 4.0;
double Double = 5.0;

int f(int x) {
	return x;
}


namespace Hogwarts {
	int Troll = 1;
}

namespace Mordor {
	int Troll = 2;
}


namespace S1 {
	int A = 1;
}

namespace S2 {
	int A = 2;
}

 


int main()
{
	{
		{ using namespace S1;
		S2::A = A + 1;
		}
		{ using namespace S2;
		S1::A = A + 1;
		}
		cout << S1::A << S2::A << endl;
	}



	{
		string s1 = "aleph";
		string s2 = "alpha";
		string s;
		s1.swap(s2);
		s2.swap(s);
		s.swap(s2);
		cout << s2 << endl;
 
	}



	{
		int* it[3];
		for (int i = 0; i < 3; i++) {
			it[i] = new int[i + 1];
			for (int j = 0; j < i + 1; j++)
				it[i][j] = 10 * i + j;
		}
		cout << it[2][2] << endl;;
		for (int i = 0; i < 3; i++)
			delete[] it[i];

	}




	{
		string str = "A";
		str.append(str).append(str).append(str);
		cout << str.length() << endl;


	}
	
	cout << Hogwarts::Troll << " " << Mordor::Troll << endl;




	{
		string WhereAreWe = "I've got a feeling we're not in Kansas anymore";

		WhereAreWe.erase(38, 8).erase(25, 4);
		cout << WhereAreWe << endl;
	}

	{
		string ToDo = "I'll think about that in one hour";
		string Schedule = "today yesterday tomorrow";

		ToDo.replace(22, 12, Schedule, 16, 8);
		cout << ToDo << endl;
	}

	//{
	//	string sky;
	//	sky.assign(80, '*');
	//	cout << sky << endl;
	//}


	//{
	//	string TheString;
	//	for (char c = 'A'; c <= 'Z'; c++)
	//		TheString.push_back(c);
	//	cout << TheString << endl;
	//}

	//{
	//	string TheString = "content";
	//	string NewString;
	//	NewString.append(" " + TheString);
	//	NewString.append(" " +TheString, 0, 3);
	//	NewString.append(2, '!');
	//	cout << NewString << endl;

	//}


	{
		//string str1, str2;
		//cout << "Enter 2 lines of text:" << endl;
		//getline(cin, str1);
		//getline(cin, str2);
		//cout << "You've entered:'" << endl;
		//if (str1.compare(str2) == 0)
		//	cout << "\"" << str1 << "\" == \"" << str2 << "\"" << endl;
		//else if (str1.compare(str2) > 0)
		//	cout << "\"" << str1 << "\" > \"" << str2 << "\"" << endl;
		//else
		//	cout << "\"" << str2 << "\" < \"" << str1 << "\"" << endl;
	}


	{
		string hund("This a dog");
		hund = "This is a cat";
		cout << hund.substr(2).substr(1) << endl;

		
	}


	{
		float f = 123.456;
		float g = 1e100;
		int i = f;
		int j = g;

		cout << i << endl;
		cout << j << endl;
	}

	double d = 123456.789012;
	float f = d;

	if (d == f)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;


	// example no. 1
	Int = Int + Short;
	// example no. 2
	if (Double)
		Double--;
	// example no. 3
	Float = 1;
	// example no. 4
	if(Float);


	executeDemoMatrix();

    std::cout << "Hello World!\n";
}

void executeDemoMatrix()
{

	int rows = 5, cols = 5;
	int** arr;
	// allocate and initialize the array
	arr = new int* [rows];
	for (int r = 0; r < rows; r++) {
		arr[r] = new int[r + 1];
		for (int c = 0; c <= r; c++)
			arr[r][c] = (r + 1) * 10 + c + 1;
	}
	// print the array
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c <= r; c++)
			cout << arr[r][c] << " ";
		cout << endl;
	}
	// free the array
	for (int r = 0; r < rows; r++)
		delete[] arr[r];
	delete[] arr;
}

 