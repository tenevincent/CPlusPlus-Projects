#include <iostream>
#include <memory> // unique_ptr
#include <string>
using std::unique_ptr; using std::cout;
template <typename K, typename D> class Tree; // Vorw?rtsdeklaration
template <typename K, typename D>
class Node {
    friend class Tree<K, D>; // Zugriff auf Privates erlauben
    K key;
    D data;
    unique_ptr<Node> left, right;
public:
    Node(const K& k, const D& d) : key(k), data(d) { }
};



template <typename K, typename D>
class Tree {
public:
    void insert(const K& key, const D& data);
    D* find(const K& key) { return findRec(key, root); }
private:
    D* findRec(const K& key, unique_ptr<Node<K, D>>& wo);
    unique_ptr<Node<K, D>> root;
};



template <typename K, typename D>
void Tree<K, D>::insert(const K& key, const D& data) {
    auto* current = &root;
    while (*current) { // solange unique_ptr was enth?lt
        auto& node = *(current->get());
        if (key < node.key) {
            current = &node.left;
        }
        else if (node.key < key) {
            current = &node.right;
        }
    }
    *current = std::make_unique<Node<K, D>>(key, data);
};



template <typename K, typename D>
D* Tree<K, D>::findRec(const K& key, unique_ptr<Node<K, D>>& wo) {
    if (!wo)
        return nullptr;
    auto& node = *(wo.get());
    if (key < node.key)
        return findRec(key, node.left);
    if (node.key < key)
        return findRec(key, node.right);
    return &node.data; // key == node.key
};

int main() {
    Tree<int, std::string> bt{};
    bt.insert(3, "drei");
    bt.insert(2, "zwei");
    bt.insert(4, "vier");

    auto wo = bt.find(7);
    if (wo == nullptr) cout << "keine 7\n"; // Ausgabe: keine 7
    //= keine 7

    wo = bt.find(3);
    if (wo != nullptr) cout << *wo << "\n";   // Ausgabe: drei
    //= drei
}


