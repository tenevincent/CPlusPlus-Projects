// ExamFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


#include <iostream>
#include <string>
using namespace std;
class Class1 {
    char a;
protected:
    char b;
public:
    char c;
    Class1() { a = 'a'; b = 'b'; c = 'c'; }
};

class Class2 : public Class1 {
    char d;
public:
    void set() {
        c = 'e';
        d = 'd';
    }
};

using namespace std;

struct Who
{
    string nick;
};

int doit(int a, float b)
{
    return a / b;
}

int main()
{
    int i = 2;
    float f = 1.4;
    char c = 'a';
    bool b = true;
    c += i + f + b;
    cout << c;
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
