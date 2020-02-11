#include <QCoreApplication>
#include <iostream>
using namespace std;


class Class {
public:
    string msg;
    Class(string txt) : msg(txt) {}
};
void function_a(int i) throw (string,Class) {
    switch(i) {
    case 0 : throw string("string");
    case 1 : throw Class("object");
    default: cout << "OK" << endl;
    }
}
void level(int i) throw(Class) {
    try {
    function_a(i);
    } catch(string &exc) {
    cout << "String [" << exc << "] caught in level()" << endl;
    }
}


void demo_outer_exception(){
    for(int i = 0; i < 2; i++) {
           cout << "-------" << endl;
       try {
           level(i);
       } catch(Class &exc) {
           cout << "Object [" << exc.msg << "] caught in main()" << endl;
       }
       }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    demo_outer_exception();

    return a.exec();
}
