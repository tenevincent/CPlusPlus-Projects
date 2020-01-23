// kap10pLesbarerCode_lst101-19p-klammern01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
int func(int arg1, int arg2) {
    if (arg1 > arg2) {
        return arg1 - arg2;
    }
    else {
        return arg2 - arg1;
    }
}

int main(int argc, const char* argv[]) {
    (void)argc; (void)argv; //#
    for (int x = 0; x < 10; ++x) {
        for (int y = 0; y < 10; ++y) {
            std::cout << func(x, y) << " ";
        }
        std::cout << "\n";
    }
}

