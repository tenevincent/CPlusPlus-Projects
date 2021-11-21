#pragma once
#include <iostream>
using std::cout;

class ClassB
{
private:
    int x;
public:

    ClassB(int x) : x{x} {

    }


    ~ClassB() { 
        std::cout << "ClassB::~ClassB\n";
    }


    virtual void bar() { std::cout << "B::bar\n"; }

    void print() {
        std::cout << "ClassB::print() " <<  x << std::endl;
    }
};

