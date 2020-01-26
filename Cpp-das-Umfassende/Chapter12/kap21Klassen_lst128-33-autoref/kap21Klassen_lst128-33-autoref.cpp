#include <vector>
#include <iostream> // cout
using std::vector; using std::cout;
int main() {
    vector<int> data{ 12, 100, -1, 0, };
    for (auto& val : data)
        val *= 2; // verdoppeln
    for (const auto val : data)
        cout << val << " ";
    cout << "\n";
    //= 24 200 -2 0
}


