// UniformUnitialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    int a1;
    a1 = 0; // copy initialization
    std::string s1;

    std::cout << "a1: " << a1 << " s1 "<< s1 << std::endl;
    
    char d1[8];
    char d2[8] = {'\0'};
    char d3[8] = { 'a', 'b', 'c', 'd', 'e', 'f' }; // Aggregation initialization
    char d4[8] = { "abcdefg" };

    cout << "d1: " << d1 << " d2: " << d2 << " d3: " << d3 << " d4: " << d4 << std::endl;

    int b1{}; //  value initialization
    int b2(); //  Most  vexing initialization
    int b3{4}; //  Direct initialization

    int b4 = 0;
    char e1[8]{};
    char e2[8]{"Hello"};
    cout << "b4: " << b4 << " e1: " << e1 << " e2: " << e2  << std::endl  ;


    int* ptr1 = new int{};
    char* ptr2 = new char[8]{};
    char* ptr3 = new char[8]{"Hello"};
    cout << "ptr1: " << ptr1 << " ptr2: " << ptr2 << " ptr3: " << ptr3;


    int i{};     // initialized built-in type, equals to int i{0};
    int j{ 10 }; // initialized built-in type
    int a[]{ 1, 2, 3, 4 }; // Aggregate initialization

    /*
      1° Value initialization => T obj{}
      2° Direct initialization => T obj{v}
      3° Copy initialization  => T obj = v;
      4° 
    */

    /* Advantage of uniform initialization
      1° It forces initialization
      2° You can use direct initialization for array types
      3° It prevents narrowing conversions
      4° Uniform syntax for all types

    */

    return 0;
}

 