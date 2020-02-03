#include <fstream>
#include <iostream>
#include <string>


using std::string;
using std::ifstream;


using std::cout; using std::cin; using std::ofstream;
void checkIOstate(std::ios& stream) {
    if (stream.good()) {
        cout << "Alles in Ordnung\n";
    }
    else if (stream.bad()) {
        cout << "Fataler Fehler\n";
    }
    else if (stream.fail()) {
        cout << "Fehler bei der Ein-/Ausgabe\n";
        if (stream.eof()) {
            cout << "Ende des Datenstroms erreicht\n";
        }
    }
    stream.clear();
}
int main() {
    int val = 0;
    cout << "Wert eingeben: ";
    cin >> val;
    checkIOstate(cin);
    //= Wert eingeben: Alles in Ordnung

    std::ifstream file;
    file.open("nichtvorhanden.text");
    checkIOstate(file);
    //= Fehler bei der Ein-/Ausgabe

    std::fstream fstr;
    fstr.open("neueDatei.txt",
        ofstream::out | ofstream::in
        | ofstream::binary | ofstream::trunc);
    fstr << "Bei den Streams reicht es oft nicht aus, einfach nur zu pruefen, ob etwas fu\r\n";
    fstr << "Bei den Streams reicht es oft nicht aus, einfach nur zu pruefen, ob etwas fu\r\n";
    fstr << "Bei den Streams reicht es oft nicht aus, einfach nur zu pruefen, ob etwas fu\r\n";
    fstr << "Bei den Streams reicht es oft nicht aus, einfach nur zu pruefen, ob etwas fu\r\n";

    //= Text in der Datei
    fstr.seekp(std::ios_base::beg);

    char ch;
    while (fstr.good()) {
        fstr.get(ch);
        if (fstr.good()) cout.put(ch);
    }
    checkIOstate(fstr);



    {
        ofstream myfile;
        myfile.open("example.bin", std::ios::out | std::ios::app | std::ios::binary);
        myfile << "Writing this to a file.\r\n";
        myfile << "Writing this to a file.\r\n";
        myfile << "Writing this to a file.\r\n";
        myfile << "Writing this to a file.\r\n";
        myfile << "Writing this to a file.\r\n";
        myfile.close();
    }

    {
        ofstream myfile("example.txt");
        if (myfile.is_open())
        {
            myfile << "This is a line.\n";
            myfile << "This is another line.\n";
            myfile << "This is another line.\n";
            myfile << "This is another line.\n";
            myfile.close();
        }
        else cout << "Unable to open file";
    }


    {
        string line;
        ifstream myfile("example.txt");
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                cout << line << '\n';
            }
            myfile.close();
        }

        else cout << "Unable to open file";
    }

    //= Fehler bei der Ein-/Ausgabe
    //= Ende des Datenstroms erreicht
}


