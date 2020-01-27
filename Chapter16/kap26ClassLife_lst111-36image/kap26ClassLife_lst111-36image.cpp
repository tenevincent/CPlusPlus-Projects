 #include <vector>
class Image {
    std::vector<unsigned char> data_;
public:
    explicit Image(const char* fn) { /*...*/ }
    // Compiler generiert (u. a.): Kopierkonstruktor, Zuweisung, aber auch Verschiebungen
};

std::vector<Image> loadCollection(bool empty) {
    if (empty) return std::vector<Image>{};
    std::vector<Image> result{};                 // f?r R?ckgabe; zun?chst leer
    // drei Bilder in die Sammlung ... kopieren?
    result.push_back(Image{ "MonaLisa.png" });
    result.push_back(Image{ "DerSchrei.png" });
    result.push_back(Image{ "JungeMitPfeife.png" });
    return result; // Sammlung als Wert zur?ckgeben
}
int main() {
    // R?ckgabe in Variable speichern
    std::vector<Image> sammlung = loadCollection(false);
}


