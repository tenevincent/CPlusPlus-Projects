// CPA_Certification.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<memory>
#include <iostream>
using namespace std;


class A {
protected:
    int y;
public:
    int x;
    int z;
    A() { x = 2; y = 2; z = 3; }
    A(int a, int b) : x(a), y(b) { z = x * y; }
    void Print() {
        cout << z << std::endl;
    }
};


class BaseClass

{
public:

    std::shared_ptr<int> ptr;
    // int* ptr;

 
    BaseClass(int i) {
        ptr = std::make_shared<int>(i); 
    }

   


    //~BaseClass() {
    //    delete ptr;
    //}

    void Print() { 
    
        cout << ptr.get() << " value:" << *ptr.get() << std::endl; 
    }
};

void fun(BaseClass x);


  int   getValue() ;






int main()
{
    // Frage 1
    {
        //A a(2, 5);
        //a.Print();
    }



    // Frage 2
    {
        //int* i;
        //i = new int;
        //*i = 1.0 / 2 * 2 / 1 * 2 / 4 * 4;
        //cout << *i << std::endl;
    }


    {
        BaseClass o(10);
        fun(o);
        o.Print();
    }

    {
        const int x = getValue();
        cout << x << std::endl;
    }

    return 0;
}


  int getValue()  
{
    return 5;
}

void fun(BaseClass x) {
    cout << "Hello:";
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
