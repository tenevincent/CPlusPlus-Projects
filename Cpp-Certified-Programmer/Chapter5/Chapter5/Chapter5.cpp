// Chapter5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;


class Test {
public:
	static void funS1(void) { cout << "static" << endl; }
	static void funS2(void) { funS1(); }
};

int main(void) {
	Test object;
	Test::funS2();
	object.funS2();

	Test::funS1();
	Test::funS2();

	object.funS1();
	object.funS2();


	return 0;
}