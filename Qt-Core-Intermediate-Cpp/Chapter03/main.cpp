#include <QCoreApplication>
#include <iostream>
#include <map>


int fib(int n) {
    static std::map<int, int> table{};
    table[n] = n<2 ? 1 : table[n-2] + table[n-1];
    return table[n];
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Die wievielte Fibonacci-Zahl? ";
    int n = 0;
    std::cin >> n;
    std::cout << "fib(" << n << ")=" << fib(n) << "\n";


    return a.exec();
}
