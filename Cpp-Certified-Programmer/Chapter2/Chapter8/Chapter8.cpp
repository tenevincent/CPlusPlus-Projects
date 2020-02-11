// Chapter8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"

using namespace std;

class Animals {
public:
	enum   names { DOG, CAT, CHUPACABRA };
};

class Commands {
public:
	enum names { LS, CD, CAT };
};

enum   class Calendar { DOG, CAT, CHUPACABRA };

class Fun {
public:
	int operator() (int a1, int a2) {
		return a1 > a2 ? a1 : a2;
	}
	int operator() (int a1, int a2, int a3) {
		return a1 > a2 ? (a1 > a3 ? a1 : a3) : (a2 > a3 ? a2 : a3);
	}
};
class Int {
public:
	int v;
	Int(int a) {
		
		v = a; 
	
	}
	Int& operator--() {
		++v;
		return *this;
	}
};

ostream& operator <<(ostream& o, Int& a) {
	return o << --a.v;
}


int main()
{


	{
		Int i = 2;
		cout << i;
	}



	{
		Animals::names a = Animals::CAT;
		Commands::names c = Commands::CAT;
		cout << " data ..." << endl;

		Calendar cal = Calendar::CHUPACABRA;
		int number = (int)cal;
		cout << " " << "" << endl;

	}

	{
		int i = 2, j;
		Stack stk;
		stk << 1 << 2 * i;
		cout << stk[0] << endl << stk[-1] << endl;
		stk[0] = stk[-1] = 0;
		stk >> i >> j;
		cout << i << endl << j << endl;
	}

	{

		int i = 2;
		Stack stk;
		stk << 1;
		stk << 1 << 2 * i << 2*5;
		stk << i;
		stk >> i; cout << i << endl;
		stk >> i; cout << i << endl;
		stk >> i; cout << i << endl;

	}




	{
		int i = 2;
		Stack stk;

		stk << 1;
		stk << 2 * i;
		stk << i;
		cout << stk.pop() << endl;
		cout << stk.pop() << endl;
		cout << stk.pop() << endl;	}



    std::cout << "Hello World!\n";
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
