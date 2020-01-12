#include <iostream>
#include <string>


using namespace std;

void iostreamDemo();


void dataTypeDemo();


//[Return Type] [Function name] [Function Parameters]
void sayHi()
{
   cout << "Hello Daniel!" << endl;
}

int sumation( int a, int b)
{
    return a + b;
}

float sumation(float a , float b)
{
    return a + b;
}

double sumation(double a, double b)
{
    return a + b;
}


class Rectangle {

public:
    Rectangle();
    Rectangle(int w,int l);


    void setWidth( int width);


    void setLength( int length);

    int getArea()
    {
        return width * length;
    }

private:
    int width;
    int length;
};

Rectangle::Rectangle()
{
    clog << "Default Constructor called" <<endl;
    this->length = 5;
    this->width = 5;
}

/*
Rectangle::Rectangle(int w, int l)
{
    clog << "Custom Constructor called" <<endl;
    this->width = w;
    this->length = l;
}
*/

Rectangle::Rectangle(int w, int l):width{w},length{l}
{
    clog << "Custom Constructor called" <<endl;
}


void Rectangle::setWidth(int width)
{
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}


//Para class

class Para
{

public:
    Para(int w, int l, int h):r{w,l},height(h)
    {
        cout << "Para Constructor Called";
    }

    int getVolume()
    {
        return r.getArea() * height;
    }

private:
    Rectangle r;
    int height;

};





int main()
{

    Rectangle r;
    Rectangle r1(20,20);
    Para p ( 30,30,30);
    cout << endl;
    cout << "The area of the rectangle is : " << r1.getArea() <<endl;
    cout << "The volume of our shape is : " << p.getVolume() <<endl;



    dataTypeDemo();

      cout << "The sum of 3.3 and 7.2 is :"<< sumation((float)3.3,static_cast<float>(7.2)) <<endl;


    //1.cout
    // iostreamDemo();
    return 0;
}

void dataTypeDemo(){
    string hello = "Hello World";
    int count = 7;

    cout << "The message is :"<<hello << endl;
    cout << "The count is : "<< count <<endl;


    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of char :"<< sizeof(char) << "bytes" << endl;
    cout << "Size of bool :"<< sizeof(bool) << "bytes" << endl;
    cout << "Size of float :"<< sizeof(float) << "bytes" << endl;
    cout << "Size of double :"<< sizeof(double) << "bytes" << endl;
    cout << "Size of wchar_t :"<< sizeof(wchar_t) << "bytes" << endl;


    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of unsigned short int : " << sizeof(unsigned short int) << " bytes" << endl;
    cout << "Size of unsigned int : " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of signed int : " << sizeof(signed int) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "Size of unsigned long long int : " << sizeof(unsigned long long int) << " bytes" << endl;
    cout << "Size of signed char : " << sizeof(signed char) << " bytes" << endl;
    cout << "Size of unsigned char : " << sizeof(unsigned char) << " bytes" << endl;
    cout << "Size of char : " << sizeof(char) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double : " << sizeof(long double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;


    unsigned int var1 = -200;
    cout << "Var1 is :" << var1 <<endl;
}


void iostreamDemo()
{
    std::cout << "Hello World!" << std::endl;

    //2.cerr
    std::cerr << "There was an error" << std::endl;

    //3.clog
    std::clog << "This is a log message" << std::endl;


    //4.cin
    std::string name;

    std::cout << "Please type in your firstname : ";
    std::cin >> name;

    std::cout << "Your firstname is : " << name << std::endl;


    cout << "Hello World!" << endl;
}
