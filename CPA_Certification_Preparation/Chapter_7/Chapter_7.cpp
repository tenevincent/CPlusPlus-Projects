// Chapter_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <exception>
using namespace std;

class A {
public:
    virtual void f(void) {}
};

class AA : public A {
public:
    void aa(void) {};
};


// Attributes
[[deprecated]] void foo() {} // mark as deprecated

// Mark as deprecated with comment
//[[deprecated("foo() is unsafe, use bar() instead")]] void foo2() {}

int divide(int x, int y)
{
	if (y == 0) throw 'a';
	return x / y;
}




int main()
{

  
    try {
        divide(10, 0);
    }
    catch (int& e) {
        cout << "Error code: " << e;
    }
    catch (char& e) {
        cout << "Error char: " << e;
    }
    catch (...) { cout << "Error"; }



	AA a;
	try {
		dynamic_cast<AA &>(a).aa();
	}
	catch (exception ex) {
		cout << "[" << ex.what() << "]" << endl;
	}

    std::cout << "Hello World!\n";

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
