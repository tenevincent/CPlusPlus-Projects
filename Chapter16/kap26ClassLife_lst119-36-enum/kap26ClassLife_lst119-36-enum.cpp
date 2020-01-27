#include <string>
using std::string;

enum class Ampelfarbe {
    ROT, GELB, ROTGELB, GRUEN
};
struct Ampel {
    Ampelfarbe farbe_;
    Ampel(Ampelfarbe farbe, string name) : farbe_{ farbe } {}
};

Ampel erzeugeAmpel(Ampelfarbe farbe, string ampelName) {
    return Ampel{ farbe, ampelName };
}

enum class Wochentag {
    MO = 1, DI, MI, DO, FR, SA, SO         // DI wird 2, MI wird 3 etc.
};

enum class Level {
    TRACE = 1, DEBUG, INFO = 10, ERROR, FATAL // auch mit L?cken m?glich
};

void log(Level level) {
    int intLevel = (int)level;            // explizit in einen int umwandeln
    if (intLevel > 10) { /* ... */ }
}



int main() {

    
    Ampel ampel = erzeugeAmpel(Ampelfarbe::ROT, "AX-001");
    (void)ampel;//#
}

