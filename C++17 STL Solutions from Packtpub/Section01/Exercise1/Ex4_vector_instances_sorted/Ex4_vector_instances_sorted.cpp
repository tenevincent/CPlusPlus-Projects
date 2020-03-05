// Ex4_vector_instances_sorted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <cassert>

using namespace std;

void insert_sorted(vector<string>& v, const string& word)
{
    const auto insert_pos = lower_bound(begin(v), end(v), word);
    v.insert(insert_pos, word);
}

int main()
{
    vector<string> v{ "some", "random", "words", "without", "order", "aaa", "yyy" };

    assert(false == is_sorted(begin(v), end(v)));
    sort(begin(v), end(v));
    assert(true == is_sorted(begin(v), end(v)));

    insert_sorted(v, "foobar");
    insert_sorted(v, "zzz");

    for (const auto& w : v) {
        cout << w << " ";
    }
    cout << '\n';
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
