
//set example
#include <set>
#include <iostream>
#include <functional>

using namespace std;

template <class T> void print(T start, T end) {
    for (; start != end; ++start) {
        std::cout << *start << " ";
    }
}

typedef pair<set<int>::iterator, bool> Pair;

void check(const Pair& result)
{
    if (result.second == true)
    {
        cout << "A new value (" << *result.first << ") has been inserted" << endl;
    }
    else
    {
        cout << "Insertion failed, value " << *result.first << " already exists\n";
    }
}

 


void DoExecuteIterator02();

int main()
{
    int t[] = { 16, 10, 8, 40, 6, 15, 3, 9, 7, 2 };
    set <int> s1(t, t + 10);
    cout << "The first version of insert:\n";

    print(s1.begin(), s1.end()); cout << endl;
    Pair p = s1.insert(10);
    check(p);
    print(s1.begin(), s1.end()); cout << endl;

    p = s1.insert(13);
    check(p);


   

    print(s1.begin(), s1.end()); cout << endl << endl;
    cout << "The second version of insert:\n";
    set<int>::iterator it1 = s1.insert(s1.find(10), 11);
    set<int>::iterator it2 = s1.insert(s1.find(11), 11);
    if (it1 == it2)
    {
        cout << "Second insertion was not successful\n";
    }
    print(s1.begin(), s1.end()); cout << endl << endl;

    cout << "The third version of insert:\n";
    int t2[] = { 4,10,15,21,0 };
    s1.insert(t2, t2 + 5);
    print(s1.begin(), s1.end()); cout << endl;


    DoExecuteIterator02();

    return 0;
}


void DoExecuteIterator02() {
    int t[] = { 16, 10, 8, 40, 6, 15, 3, 9, 7, 2 };
    multiset <int> s1(t, t + 10);


    print(s1.begin(), s1.end()); cout << endl;
    cout << "The first version of insert:\n";
    multiset<int>::iterator it1 = s1.insert(13);
    print(s1.begin(), s1.end()); cout << endl;
    cout << "Inserted element position: " << distance(s1.begin(), it1) << endl << endl;

    multiset<int>::iterator it2 = s1.insert(13);
    print(s1.begin(), s1.end()); cout << endl;
    cout << "Inserted element position: " << distance(s1.begin(), it2) << endl << endl;

    cout << "The second version of insert:\n";
    it1 = s1.insert(s1.find(10), 11);
    it2 = s1.insert(s1.find(11), 11);
    if (it1 == it2)
    {
        cout << "Second insertion was not successful\n";
    }
    print(s1.begin(), s1.end()); cout << endl << endl;

    cout << "The third version of insert:\n";
    int t2[] = { 4,10,15,21,0 };
    s1.insert(t2, t2 + 5);
    print(s1.begin(), s1.end()); cout << endl;
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
