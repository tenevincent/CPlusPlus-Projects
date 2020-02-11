#pragma once
#include <exception>
#include <iostream>
 
#ifndef  MY_ARRAY_H
#define MY_ARRAY_H


class MyArray
{
    int* _array;
    unsigned int _size;

public:
    MyArray(unsigned size = 0);

    void add(int value);

    void delItem(unsigned index);

    virtual ~MyArray();
    unsigned int getSize() const;
    int& operator[](unsigned index);
};


#endif // ! MYARRAY_H





