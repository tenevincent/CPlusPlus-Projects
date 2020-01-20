#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <iomanip>
#include <cmath>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    {
        int i;
        float f;

        f = 100.25;
        i = f;
        qWarning() << "i= " << i;
        qWarning() << "f= " << f;

        float x;
        x = 1.0 / 0.0;
        qWarning() << "divide by 0= " << x;
    }


    {
        float x,y;
        x = 0.0;
        y = 1.0 / x;
        qWarning() << "2) divide by 0 = " << y;
    }


    {
        int i,j;

        i = 100;
        j = -i;
        qWarning() << "j= " << j;
    }


    {
        qWarning() << "priority " << 2*3%5;
    }

    {
        int i,j,k,l;
        i = 100;
        j = 25;
        k = 13;
        l = (5 * ((j % k) + i) / (2 * k)) / 2;
        qWarning() << "parentheses: " << l;
    }

    {
        using namespace  std;
        int byte = 255;
        cout << setbase(16) << byte;
        float value,squareroot;

        char Char = 'X';
        int Int = Char;
        cout<<Char<<" "<<(int)Char<<" "<<Int<<" "<<(char)Int;

        cin >> value;
        if(value >= 0.0) {
            squareroot = sqrtf(value);
            cout << "You have given: " << value << endl;
            cout << "The square root is: " << squareroot << endl;
        }



        {
            qWarning() << "1e1: " << 1e1;
            qWarning() << "1e-2: " << 1e-2;
            qWarning() << "1e-3: " << 1e-3;

            float var;
            var = .1;
            var = var + 1.;
            var = var + 1e1;
            var = var + 1e-2;
            qWarning() << "parentheses: " << var;

        }



    }


    return a.exec();
}
