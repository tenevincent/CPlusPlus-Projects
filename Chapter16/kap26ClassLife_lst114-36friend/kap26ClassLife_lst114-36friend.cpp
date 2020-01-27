class Value {
private:
    int value_;                    // privates
public:
    explicit Value(int value) : value_{ value } {}
    // freie Funktionen, aber als friend deklariert:
    friend bool operator<(const Value& li, const Value& re);
    friend bool operator==(const Value& li, const Value& re)
    {
        return re.value_ == li.value_;
    } // innerhalb auch definiert
};
// Definition der zuvor deklarierten friend-Funktion:
bool operator<(const Value& li, const Value& re) {
    return li.value_ < re.value_;  // Zugriff auf Privates erlaubt
}
int main() {
    Value sieben{ 7 }; Value drei{ 3 };
    if (drei < sieben) {
        return 0;                  // okay
    }
    else {
        return 1;                  // etwas ist falsch gelaufen
    }
}

