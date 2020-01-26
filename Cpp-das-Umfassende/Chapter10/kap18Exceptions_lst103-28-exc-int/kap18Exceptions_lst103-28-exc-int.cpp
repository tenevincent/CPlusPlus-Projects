#include <string>
#include <iostream> // cout

using std::string; using std::to_string; using std::cout;

void fehlerAusloesen(int fehlerfall) {
    try {
        if (fehlerfall < 10) throw (int)fehlerfall;
        else if (fehlerfall < 20) throw 1.0 / (fehlerfall - 10.0);
        else throw string{ "Fehler " + to_string(fehlerfall) };
    }
    catch (int eval) {
        cout << "int-fehler: " << eval << "\n";
    }
    catch (double eval) {
        cout << "double-fehler: " << eval << "\n";
    }
    catch (string eval) {
        cout << "string-fehler: " << eval << "\n";
    }
}
int main() {
    fehlerAusloesen(3);  // int-fehler: 3
    //= int-fehler: 3
    fehlerAusloesen(14); // Ausgabe: double-fehler: 0.25
    //= double-fehler: 0.25
    fehlerAusloesen(50); // Ausgabe: string-fehler: Fehler 50
    //= string-fehler: Fehler 50
}

