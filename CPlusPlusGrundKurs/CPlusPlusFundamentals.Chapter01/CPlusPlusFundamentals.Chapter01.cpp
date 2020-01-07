// CPlusPlusFundamentals.Chapter01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int global_var = 1000;


void try_catch_demo();

int main()
{

    // References
    {
        int first_variable = 10;
        int& ref_name = first_variable;
        std::cout << "Value of first_variable: " << first_variable << std::endl;
        std::cout << "Value of ref_name: " << ref_name << std::endl;

        std::cout << "Address of first_variable: " << &first_variable << std::endl;
        std::cout << "Address of ref_name: " << &ref_name << std::endl;
    }


    {
        int const_v = 10;
        const int& const_ref = const_v;
        //Error
        std::cout << const_v << std::endl;
        //Output: 10
    }

    int global_var = 100;
    std::cout << "Global: " << ::global_var << std::endl;
    std::cout << "Local: " << global_var << std::endl;

    try_catch_demo();

    std::cout << "Hello World!\n";
}

void try_catch_demo() {

    int x = 10;
    try {
        std::cout << "Inside try block" << std::endl;
        if (x > 0) // True
        {
            throw x;// Following statement will be skipped
            std::cout << "After throw keyword" << std::endl;
        }
    }
    catch (int x) {
        std::cout << "Inside catch block: Exception found" << std::endl;
    }
    std::cout << "Outside try-catch block" << std::endl;

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
