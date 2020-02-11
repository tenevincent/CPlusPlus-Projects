#include <QCoreApplication>

#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
void function_a(int i) {
    switch(i) {
    case 0: throw out_of_range("0");
    case 1: throw overflow_error("1");
    case 2: throw domain_error("2");
    }
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    for(int i = 0; i < 3; i++) {
            try {
                function_a(i);
            }
            catch(exception &ex) {
                cout << "Exception caught: " << ex.what() << endl;
            }
        }


    return a.exec();
}
