#include <vector>
#include <iostream>
class Image {
    std::vector<unsigned char> data_;
public:
    explicit Image(const char* fn) { 
        
        std::cout << "Nornal constructor" << std::endl;

        /*...*/ }
    Image(Image&& other) noexcept              // Verschiebekonstruktor
        : data_{} // leer erzeugen
    {
        std::cout << "verschiebungskonstructor" << std::endl;

        using std::swap;
        swap(data_, other.data_);
    }

    Image(const Image& a)   {
    
        std::cout << "Copy constructor" << std::endl;
    } // user-defined copy ctor


    Image& operator=(Image&& other) noexcept { // Verschiebeoperator
        using std::swap;

        std::cout << "assignment" << std::endl;

        swap(data_, other.data_);
        return *this;
    }
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



