// Chapter_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ModelA.h"
#include <vector>
#include "Chapter_03.h"

void demo_vector1();

void demo_vector2();


void demo_vector3();

void demo_dynamically_vector4();

int main()
{

     demo_vector1();

     // demo_vector2();


    // demo_vector3();

    // demo_dynamically_vector4();


    std::cout << "Hello World!\n";
}


void demo_vector1()
{
 
        std::vector <A>v1;              //(1)
        v1.push_back(1);        //(1)
        std::cout << "First ready!\n";
        //copy constructor
        std::vector <A>v2(v1);        //(2)
        std::cout << "Second ready!\n";
        //assignment operator - empty target
        std::vector <A> v3;            //(3)
        v3 = v2;            //(3)
        std::cout << "Third ready!\n";
        //assignment - not empty target
        std::vector <A> v4(2);        //(4)
        v4 = v2;            //(4)
 
}


void demo_vector2()

{
    std::vector<A> v1;
    v1.push_back(3);
    v1.push_back(2);
}


void demo_vector3() {
    vector <A> list;
    list.push_back(1);
    cout << "First ready!\n\n";
    list.push_back(2);
    cout << "Second ready!\n\n";
    list.push_back(3);
    cout << "Third ready!\n\n";
}


void demo_dynamically_vector4()

{
    /*
    As you can see, there are no destructors calls whatsoever. Dynamically allocated objects stored inside a collection will 
    not be automatically destroyed when this collection is being destroyed. 
    This can lead to a memory leak, which is already bad enough. But there 
    are scenarios where unwanted objects can lead to more severe consequences.
    */

    vector<A*> v1;
    v1.push_back(new A(1));
    cout << "First ready!\n";
    v1.push_back(new A(2));
    cout << "Second ready!\n";
    v1.push_back(new A(3));
    cout << "Third ready!\n";

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
