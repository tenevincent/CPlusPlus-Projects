#include <QCoreApplication>

#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <any>


struct MyClass {};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    std::cout << std::boolalpha;

    std::vector<std::any> anyVec(  MyClass());
    std::cout << "std::any_cast<bool>anyVec[0]: " << std::any_cast<bool>(anyVec[0]); // true
    int myInt = std::any_cast<int>(anyVec[1]);
    std::cout << "myInt: " << myInt << std::endl;                                    // 2017

    std::cout << std::endl;
    std::cout << "anyVec[0].type().name(): " << anyVec[0].type().name();             // b
    std::cout << "anyVec[1].type().name(): " << anyVec[1].type().name();             // i



    return a.exec();
}
