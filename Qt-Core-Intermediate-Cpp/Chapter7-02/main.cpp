#include <QCoreApplication>
#include <string>
#include <iostream>


using namespace std;
class Class {
public:
    string msg;
    Class(string txt) : msg(txt) {}
};
void function_i(void) throw () {
    throw string("object");
}
void lastchance(void) {
    cout << "See what you've done! You've thrown an illegal exception!" << endl;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    set_unexpected(lastchance);


    cout << "After exception..." << endl;
    cout << "After exception..." << endl;
    cout << "After exception..." << endl;
    cout << "After exception..." << endl;
    cout << "After exception..." << endl;

    try {
        function_i();
    } catch(string &exc) {
        cout << "Caught!" << endl;
    }

    return a.exec();
}
