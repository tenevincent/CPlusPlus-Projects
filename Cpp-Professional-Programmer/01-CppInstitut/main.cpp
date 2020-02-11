#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <iomanip>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    {
        using namespace std;
        float x;
         cin >> x;
         cout << scientific << "x= " << x << endl;

             std::cout << 1.111222333444555666777888999f << "\n"; // double-Literal

    }



    {
        float ra = 3.13;
         qDebug ()  << "You've given " << ra << endl;
    }

    {
        using namespace std;

        int value,square;
        cout << "Give me a number and I will square it!\n";
        cin >> value;
        square = value * value;
        cout << "You've given " << value << endl;
        cout << "The squared value is " << square << endl;


        int i = 3, j = ++i, k = ++i;
        cout << k << j << i << endl;

    }



    {
        using namespace std;
        int byte = 255;
        cout <<"255 in base 16= " << setbase(16) << byte;
    }

    {
        char var = '\'';
        qDebug () << "\' = " <<var ;
        var = '\\';
        qDebug () << "\\ = " <<var ;

        var = '\a';
        qDebug () << "a = " <<var ;
        var = '\r';
        qDebug () << "r = " <<var ;
        var = '\b';
        qDebug () << "b = " <<var ;


    }

    {
        float x,y;

        x = 0.0;
        y = 1.0 / x;
        qDebug () << "y = " << y ;
    }

    {
        int i;
        float f;

        f = 100.25;
        i = f;

        qDebug () << "i = " << i ;
        qDebug () << "f = " << f ;

    }

    {
        int i,j;
        i = 4;
        j = 2 * i++;
        i = 2 * --j;
        qDebug () << "result i = " << i ;
    }


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
