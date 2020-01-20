#include <QCoreApplication>
#include <iostream>
#include <memory>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Blopp\n";        // hervorgehoben
     #if 0 //#
       ; //Typ feh-ler(args);             // Zeile mit einem Fehler
     #endif //#
       if constexpr(sizeof(int)==4)   // C++17-Features
           std::cout << "Standardmaschine\n";
       for(;;) break; // andere Hervorhebung, zur Unterscheidung oder wenn besser zu sehen



    return a.exec();
}
