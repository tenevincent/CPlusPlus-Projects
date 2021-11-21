#pragma once
#include <iostream>
#include <memory>

using std::cout;
using std::unique_ptr;
using std::shared_ptr;
 

#include "ClassB.h"
class ClassD 
{
private:
    unique_ptr<ClassB> _extraB;

public:
    ClassD(ClassB& b)   {
        
        _extraB = std::make_unique<ClassB>(b);

        std::cout << "D::D\n"; }

    ~ClassD() { std::cout << "D::~D\n"; }

    void print() {
        _extraB->print();
    }

    void bar() { std::cout << "D::bar\n"; }

};

