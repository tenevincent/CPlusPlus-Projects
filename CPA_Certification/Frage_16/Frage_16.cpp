// Frage_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
 
#include <string>
using namespace std;
class A {
public:
    A() {
        cout << "A0 ";
    }
    A(string s) { cout << "A1"; }
};
class B : public A {
public:
    B() { 
        cout << "B0 "; 
    }
    B(string s) { cout << "B1 "; }
};
class C : public B {
public:
    C() { 
         cout << "C0 ";
    }
    C(string s) { cout << "C1 "; }
};


struct s1 {
    int x;

    long int li;
};

struct s2 {
    float f;
    struct s2* s;
    struct  s1;
    
};

struct s3 {
    float f;
    struct s3 *s;
} sd;







int main()
{
    
    B b1("First...");

    C c1("Second...");

    {
        const int x = 1;

        int const* y = &x;
        cout << *y;
    }
 

    return 0;
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
