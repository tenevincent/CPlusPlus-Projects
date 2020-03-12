// Chapter04_05_fill()_generate().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

template <class T>
void print(const T& value)
{
    cout << value << " ";
}

struct Generate
{
    int n;
    Generate() : n(0) {}
    int calculate(int number)
    {
        if (number == 0)
            return 0;
        if (number == 1)
            return 1;
        int n1 = 1, n2 = 0, nn = 0;
        for (int i = 2; i <= number; ++i)
        {
            nn = n1 + n2;
            n2 = n1;
            n1 = nn;
        }

        return nn;
    }
    int operator()()
    {
        n++;
        return calculate(n - 1);
    }
};

int main()
{
    deque <int> d1(10);
    cout << "Source collection - default values:\n";
    cout << "d1: "; for_each(d1.begin(), d1.end(), print<int>); cout << endl << endl;
    cout << "Filling collection with value 1\n";
    fill(d1.begin(), d1.end(), 1);


    cout << "d1: "; for_each(d1.begin(), d1.end(), print<int>); cout << endl;
    cout << "Filling half of the collection with value 10:\n";
    fill_n(d1.begin(), 5, 10);

    cout << "d1: "; for_each(d1.begin(), d1.end(), print<int>); cout << endl << endl;
    cout << "Generate:\n";
    cout << "Filling the whole collection with Fibonacci numbers:\n";
    generate(d1.begin(), d1.end(), Generate());

    cout << "d1: "; for_each(d1.begin(), d1.end(), print<int>); cout << endl;
    cout << "Filling the whole collection with Fibonacci numbers - generate_n:\n";
    generate_n(d1.begin(), 10, Generate());

    cout << "d1: "; for_each(d1.begin(), d1.end(), print<int>); cout << endl << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
