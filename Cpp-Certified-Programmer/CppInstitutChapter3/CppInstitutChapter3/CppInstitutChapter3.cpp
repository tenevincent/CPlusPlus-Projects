// CppInstitutChapter3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int func(int &p) {
    ++p;
    return p++;
}

int main()
{
    using namespace std;



    int a = 1, b;
    b = func(a);
    cout << "Result a+b: " << a + b << endl;


    a = 2;
    b = 5;
    int c = a<<b; // 2*pow(a,b)
    cout << "Result a<<b: " << c << endl;

    a = 2;
    b = 1;
    c = a >> b; // 2*pow(a,b)
    cout << "Result a>>b: " << c << endl;





    int t[4] = {8,4,2,1};
    int* p1 = t + 2, *p2 = p1 - 1;

    p1++;
    cout << *p1 << endl;
    cout << p1 - p2 << endl;
    cout << *p1 - t[p1 - p2] << endl;


    //cout << "This computing environment uses:" << endl;
    //cout << sizeof(char) << " bytes for chars" << endl;
    //cout << sizeof(short int) << " bytes for shorts" << endl;
    //cout << sizeof(int) << " bytes for ints" << endl;
    //cout << sizeof(long int) << " bytes for longs" << endl;
    //cout << sizeof(float) << " bytes for floats" << endl;
    //cout << sizeof(double) << " bytes for doubles" << endl;
    //cout << sizeof(bool) << " byte for bools" << endl;
    //cout << sizeof(int*) << " bytes for pointers" << endl;

    //bool b1 = true;
    //bool b2 = false;
    //bool b3 = true;

    //int result = b1 && b2 && b3;
    //std::cout << " result: " << result << std::endl;

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
