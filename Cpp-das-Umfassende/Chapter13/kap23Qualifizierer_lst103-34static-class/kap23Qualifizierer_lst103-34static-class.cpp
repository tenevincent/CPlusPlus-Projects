#include <iostream> // cout
#include <string>
using std::string;
class Tree {
    static size_t countConstructed_;
    static size_t countDestructed_;
    string kind_;
    Tree(string kind) : kind_{ kind }      // privater Konstruktor
    {
        ++countConstructed_;
    }
public:
    Tree(const Tree& o) : kind_{ o.kind_ }
    {
        ++countConstructed_;
    }
    string getKind() const { return kind_; }
    ~Tree() { ++countDestructed_; }
    static Tree create(string kind) { return Tree{ kind }; }
    static void stats(std::ostream& os) {
        os << "Constructed:+" << countConstructed_
            << " Destructed:-" << countDestructed_ << "\n";
    }
};
size_t Tree::countConstructed_ = 0;
size_t Tree::countDestructed_ = 0;
int main() {
    Tree birke = Tree::create("Birke");
    for (auto kind : { "Esche", "Eibe", "Eiche" }) {
        Tree temp = Tree::create(kind);
        std::cout << temp.getKind() << "\n";
    }
    //= Esche
    //= Eibe
    //= Eiche
    Tree::stats(std::cout);
    //= Constructed:+4 Destructed:-3
}

