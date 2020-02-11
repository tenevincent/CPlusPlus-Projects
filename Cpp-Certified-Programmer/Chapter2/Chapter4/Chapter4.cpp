// Chapter4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



void call_by_value(std::string valName) {
    valName = "This is a new name";
}

void call_by_ref(std::string &valName) {
    valName = "This is a new name";
}


void printInfo(string& s) {
    cout << "length = " << s.length() << endl;
    cout << "capacity = " << s.capacity() << endl;
    cout << "max size = " << s.max_size() << endl;
    cout << "---------" << endl;
}

class Class {
public:
    void setVal(int value) {
        Class::value = value;
    }
    int getVal(void) { return Class::value; };
public:
    int value;
};

class A {
public:
    int cnt;
    void put(int v);
};

void A::put(int v) { 
    ++cnt; cout << cnt << " " << std::endl;
}

int main()
{
    A a[2];
    a[0].cnt = 0;
    a[1].cnt = 1;
    a[a[0].cnt].put(a[1].cnt);

    


    //Class ptr;
    //cout << ptr.getVal() << " " << std::endl;

    // ptr = new Class;
    //ptr->value = 0;


    //delete ptr;


    {
        short s = 1;
        int i = 2;
        long l = 3;
        float f = 4.4;
        double d = 6.6;

        cout << s / float(i) + int(f) / i + long(d) / s;
    }



    {
        string TheString = "Vincent De Paul Tene Kengne";
        printInfo(TheString);
        for (int i = 0; i < 10; i++)
            TheString += TheString;
        printInfo(TheString);
    }


   
    string petName("Lassie");

    cout << petName << endl;

    call_by_value(petName);
    cout << "after val: " << petName << endl;
    
    petName = "Vincent De Paul Tene Kengne";
    call_by_ref(petName);
    cout << "after ref: " << petName << endl;

    petName = "Vincent De Paul ";
    petName.append("Tene Kengne");
    cout << "append: " << petName << endl;

    {
        string LineOfTypes;
        getline(cin, LineOfTypes);
        cout << LineOfTypes << endl;
    }

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
