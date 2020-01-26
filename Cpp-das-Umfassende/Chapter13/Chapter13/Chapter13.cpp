    #include <string>
    #include <iostream>                    // ostream, cout

    namespace plant {
        class Baum {
            std::string name_;
        public:
            explicit Baum(const std::string& name) : name_{name} {}
            void print(std::ostream& os) const { os << name_; }
        };
        std::ostream& operator<<(std::ostream& os, const Baum& arg)
            { arg.print(os); return os; }
        using NadelBaum = Baum;            // f?r sp?tere Erweiterungen ...
        using LaubBaum = Baum;             // ... vorsorgen
        namespace beispielnamen {          // eingebetteter Namensraum
            std::string eicheName = "Eiche";
            std::string bucheName = "Buche";
            std::string tanneName = "Tanne";
        } // Ende namespace beispielnamen
    } // Ende namespace plant

    int main() {                           // main darf nicht in einem Namespace stehen
        using namespace plant::beispielnamen; // alle beispielnamen verf?gbar machen
        plant::NadelBaum tanne{ tanneName };
        plant::LaubBaum eiche{ eicheName };
        tanne.print(std::cout); std::cout << "\n";
        //= Tanne
        using plant::operator<<;           // ohne geht 'cout << eiche' nicht
        std::cout << eiche << "\n";
        //= Eiche
    }


