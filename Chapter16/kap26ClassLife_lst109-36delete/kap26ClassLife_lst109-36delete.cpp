struct MeineNummer {
    int nummer_; // variables Datenfeld
    explicit MeineNummer(int v)
        : nummer_{ v } {}
    MeineNummer& operator=(const MeineNummer&) = delete; // Zuweisung streichen
    MeineNummer(const MeineNummer&) = delete;            // Kopie streichen
};
int main() {
    MeineNummer c1{ 4 };
    MeineNummer c2{ 7 };
#if 1 //#
    c1 = c2;            // Fehler -- Zuweisung vom Programmierer gestrichen
    MeineNummer c3{ c1 }; // Fehler -- Kopie vom Programmierer gestrichen
#endif //#
}

