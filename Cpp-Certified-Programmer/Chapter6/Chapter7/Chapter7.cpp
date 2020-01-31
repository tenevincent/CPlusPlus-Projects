// Chapter7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

using namespace std;


float div(float a, float b) {
	if (b == 0.0)
		throw 1;
	return a / b;
}



class Class {
public:
	string msg;
	Class(string txt) : msg(txt) {}
};
void function(int i) throw (string, Class) {
	switch (i) {
	case 0: throw string("string");
	case 1: throw Class("object");
	default: cout << "OK" << endl;
	}
}
void level(int i) throw(Class) {
	try {
		function(i);
	}
	catch (string & exc) {
		cout << "String [" << exc << "] caught in level()" << endl;
	}
}
int main(void) {
	for (int i = 0; i < 2; i++) {
		cout << "-------" << endl;
		try {
			level(i);
		}
		catch (Class & exc) {
			cout << "Object [" << exc.msg << "] caught in main()" << endl;
		}
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
