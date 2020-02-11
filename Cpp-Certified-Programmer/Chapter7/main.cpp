#include <QCoreApplication>
#include <iostream>
using namespace std;

float div(float a, float b) {
    if(b == 0.0)
        throw string("division by zero :(");
    return a/b;
}

void DoCalculations02(int);

float DoCalculations(float a, float b, float c, float d) ;

class Class {
public:
    string msg;
    Class(string txt):msg(txt){cout<<"Object [" << msg << "] constructed" << endl; }
    ~Class(void) { cout << "Object [" << msg << "] destructed" << endl; }
    void Hello(void) { cout << "Object [" << msg << "] says: hello" << endl; }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    for(int i = 0; i < 3; i++) {
       try {
          cout << "-------" << endl;
          DoCalculations02(i);
       } catch (Class &exception) {
          cout << "Caught!" << endl;
          cout << exception.msg << endl;
       }
       }


    DoCalculations(1,2,3,0);


    float aa, b;
    while(cin >> aa) {
        try {
            cin >> b;
            cout << div(aa, b) << endl;
        } catch (int problem) {
            cout << "Look what you did, you bad user!" << endl;
            cout << problem << endl;
        }
    }



    return a.exec();
}


void DoCalculations02(int i) {
    if(i == 0)
        throw Class("exception 1");
    Class object("object");
    if(i == 1)
        throw Class("exception 2");
    object.Hello();
    if(i == 2)
        throw Class("exception 3");
}



float DoCalculations(float a, float b, float c, float d) {
    try {
    float x;
    if(a == 0.0)
        throw string("Bad arg a");
    x = 1 / a;
    if(b == 0.0)
        throw string("Bad arg b");
    x /= b;
    if(c == 0.0)
        throw string("Bad arg c");
    x /= c;
    if(d == 0.0)
        throw string("Bad arg d");
    return x / d;
   } catch(string &exc) {
    cout << "Something bad happened: " << exc << endl;
    return 0;
   }
}

