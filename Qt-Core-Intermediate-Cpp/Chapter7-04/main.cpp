#include <QCoreApplication>


#include <iostream>
#include <exception>
using namespace std;

class A {
public:
   virtual void f(void) {}
};

class AA : public A {
public:
   void aa(void) {};
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    A *aa = new AA() ;
        try {
            dynamic_cast<AA *>(aa);
        } catch (exception ex) {
            cout << "[" << ex.what() << "]" << endl;
        }
   cout << "[ No Exception "   "]" << endl;

    return a.exec();
}
