#include <string>
#include <iostream>
#include <memory> //#
using std::string; using std::ostream;

class Shape {
    string color_;
public:
    virtual double calcArea() const = 0; // pur virtuelle Methode
    string getColor() const { return color_; }
    void setColor(const string& color) { color_ = color; }
};

class Square : public Shape {
    double len_;
public:
    explicit Square(double len) : len_{ len } {}
    double calcArea() const override { return len_ * len_; }
};

class Circle : public Shape {
    double rad_;
public:
    explicit Circle(double rad) : rad_{ rad } {}
    double calcArea() const override { return 3.1415 * rad_ * rad_; }
};

struct Calculator {
    Shape& shape_;
    Calculator(Shape& shape) : shape_{ shape } { }
    void run(ostream& os) const {
        os << "The area of the shape is " << shape_.calcArea() << "\n";
    }
};

int main() {

   /// Shape shape;

    Square quadrat(5.0 );
    Calculator ti{ quadrat };
    ti.run(std::cout); // Ausgabe: The area of the shape is 25
    //= The area of the shape is 25
    Shape* shape1 = new Circle{ 5.0 }; //#
    delete shape1; //#
    std::unique_ptr<Shape> shape2 = std::make_unique<Square>(7.0); //#
}

