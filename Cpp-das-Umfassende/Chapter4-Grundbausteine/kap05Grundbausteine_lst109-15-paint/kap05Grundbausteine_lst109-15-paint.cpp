#include <vector>
class Image {
    std::vector<char> data_;
public:
#if 0 //#
    void load(const char* filename); // l?dt Bilddaten
#else //#
    void load(const char*) {}; //#
#endif //#
};
class Screen {
public:
#if 0 //#
    void show(Image& image);         // image sollte const sein
#else //#
    void show(const Image&) {}; //#
#endif //#
};
void paint(Screen& screen, const Image& image) {
    screen.show(image);
}
int main() {
    Image image{};
    image.load("peter.png");
    Screen screen{};
    paint(screen, image);

   
}


