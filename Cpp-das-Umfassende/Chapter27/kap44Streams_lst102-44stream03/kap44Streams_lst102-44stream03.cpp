#include <iostream>
using std::cout; using std::cin; using std::endl;
int main() {
 
    
    const unsigned int MAX = 10;
    char buffer[MAX] = { 0 };
    cout << "Eingabe getline : ";
    cin.getline(buffer, MAX);
    cout << std::cin.gcount()
        << " Zeichen wurden eingelesen\n";
    //= Eingabe getline : 6 Zeichen wurden eingelesen
    for (auto c : buffer) {
        if (c && c != '\0') cout.put(c);
    }
    //= hallo

   
    cin.ignore(MAX, '\n');

    cout << "\nEingabe machen (mit . beenden) : ";
    char ch = 0;
    while (cin.get(ch)) {
        if (ch == '.') break;
        cout.put(ch);
    }
    cout << "Eingabe beendet" << endl;
    //= Eingabe machen (mit . beenden) : Eingabe beendet
}

