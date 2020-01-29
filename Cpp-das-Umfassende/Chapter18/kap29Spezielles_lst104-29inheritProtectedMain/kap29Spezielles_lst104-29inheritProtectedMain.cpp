// kap29Spezielles_lst104-29inheritProtectedMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
using namespace std;

class Rectangle {
    double width;
    double height;
};



class Box {
    double width;

public:
    double length;
    friend void printWidth(Box box);
    void setWidth(double wid);
};

void Box::setWidth(double width) {
    this->width = width;
}



// Note: printWidth() is not a member function of any class.
void  printWidth(Box box) {
    /* Because printWidth() is a friend of Box, it can
    directly access any member of this class */
    cout << "Width of box : " << box.width << endl;
 
}


int main()
{

    Box box;

    // set box width without member function
    box.setWidth(10.0);
    
    // Use friend function to print the wdith.
    printWidth(box);

    std::cout << "Hello World!\n";
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
