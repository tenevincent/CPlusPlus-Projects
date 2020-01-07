// CPlusPlusFundamentals.Chapter7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ChapterSamples.h"

int main()
{

    std::unique_ptr<ChapterSamples> samplePtr = std::make_unique<ChapterSamples>();
    //samplePtr->ShowListing1();


    //samplePtr->ShowNullPointerListing5();
    //samplePtr->ShowNullPointerListing6();

    samplePtr->foo("Text...");
    samplePtr->foo(100);
    samplePtr->foo(NULL); // !!!Und jetzt!!!
    samplePtr->foo(nullptr);



    {
        using namespace std;
        int* ptr = nullptr;
        int val = 123;
        ptr = &val;
        cout << "Wert von val : " << *ptr << endl;
        cout << "Adresse von val: " << ptr << endl;
        cout << "Adresse von ptr: " << &ptr << endl;
    }


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
