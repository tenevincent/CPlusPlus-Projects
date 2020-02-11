#include "Array.h"



MyArray::MyArray(unsigned size) :
    _array(0), _size(size)
{
    if (size > 0)
    {
        _array = new int[this->_size];
    }
}

void MyArray::add(int value)
{
    if (_size == 0)
    {
        _array = new int[1];
    }
    else
    {
        int* tmp = new int[_size + 1];
        for (unsigned i = 0; i < _size; i++)
        {
            tmp[i] = _array[i];
        }
        delete[] _array;
        _array = tmp;
    }
    _array[_size++] = value;
}

void MyArray::delItem(unsigned index)
{
    if (_size == 1)
    {
        delete[] _array;
        _array = 0;
    }
    else
    {
        int* tmp = new int[_size - 1];
        for (unsigned i = 0, j = 0; i < _size; i++, j++)
        {
            if (i == index)
            {
                j--;
                continue;

            }
            tmp[j] = _array[i];
        }
        delete[] _array;
        _array = tmp;
    }
    _size--;
}

unsigned int MyArray::getSize() const
{
    return _size;
}
int& MyArray::operator [](unsigned index)
{
    if (index > _size - 1)
    {
        std::exception e;
        throw e;
    }
    return _array[index];
}

MyArray::~MyArray()
{
    delete[] _array;
}