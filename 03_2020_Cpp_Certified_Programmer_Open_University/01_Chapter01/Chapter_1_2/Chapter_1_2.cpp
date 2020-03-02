
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //first one
    vector<int> v1(10, 0);
    for (unsigned i = 0; i < v1.size(); ++i)
    {
        v1[i] = i + 1;
    }
    cout << "Size (v1):  " << v1.size() << endl;
    for (unsigned i = 0; i < v1.size(); ++i)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    //second one;
    vector<int> v2(v1.begin(), v1.end());
    cout << "Size (v2):  " << v2.size() << endl;
    for (unsigned i = 0; i < v2.size(); ++i)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
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
