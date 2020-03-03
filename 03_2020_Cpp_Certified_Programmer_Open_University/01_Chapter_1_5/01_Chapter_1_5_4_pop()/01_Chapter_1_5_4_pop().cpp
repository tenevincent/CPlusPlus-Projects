// 01_Chapter_1_5_4_pop().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stack>
#include <iostream>
using namespace std;

int main()
{
    stack <int> s1;

    if (s1.empty())
    {
        cout << "The stack is empty!\n";
    }

    s1.push(3);
    s1.push(2);
    s1.push(1);

    cout << "Size: " << s1.size() << endl;
    cout << "Top element: " << s1.top() << endl;
    cout << "Size: " << s1.size() << endl;
    s1.pop();
    cout << "Top element: " << s1.top() << endl;
    cout << "Size: " << s1.size() << endl;
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
