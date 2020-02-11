#pragma once
#include <vector>
#include <iostream>
#include <utility>
using namespace std;


class A
{
    int number;
public:
    A(int _number) :number(_number)
    {
        cout << "Normal constructor\n";
    }
    A()
    {
        cout << "Default constructor\n";
    }

    A(const A& source)
    {
        number = source.number;
        cout << "Copy constructor\n";
    }

    A( A&& source) noexcept
    {
        std::swap(number, source.number);
        cout << "Move constructor\n";
    }

    A& operator=(const A&& source)
    {
        number = std::move(source.number);
        cout << "Assignment operator\n";
        return *this;
    }


    A& operator=(const A& source)
    {
        number = source.number;
        cout << "Assignment operator\n";
        return *this;
    }

    ~A()
    {
        cout << "Destructor\n";
    }
};
