#include <string>
#include <iostream>                      // cout
#include <vector>
#include <memory>
#include <algorithm>



using std::string; using std::cout;

struct Person {                          // definiert den neuen Typ Person
    string name_;
    int alter_;
    string ort_;

    Person(string name = "", int alter = 0, string ort = "")
        : name_(name), alter_(alter), ort_(ort)
    {
           
    }

    Person(const Person &person)
    {
        name_ = person.name_;
        alter_ = person.alter_;
        ort_ = person.ort_;
    }

    Person(Person&& person) noexcept
    {
        name_ = std::move(person.name_);
        ort_ = std::move(person.ort_);
        alter_ = std::move(person.alter_);
    }

    Person& operator=(Person&& other) noexcept { // Verschiebeoperator
        using std::swap;
        std:: swap(name_, other.name_);
        std::swap(ort_, other.ort_);
        std::swap(alter_, other.alter_);
        return *this;
    }

   friend bool operator <(const Person& lhs, const Person& rhs) {
        auto result = lhs.alter_ < rhs.alter_;
        return result;
    }


    Person& operator=(const Person& person) {
        if (this != &person) {
            this->name_ = person.name_;
            this->ort_ = person.ort_;
            this->alter_ = person.alter_;
        }
        return *this;
    }





};                                       // abschlie?endes Semikolon
void drucke(Person p) {                  // ganze Person als ein Parameter
    cout << p.name_ << " (" << p.alter_ << ") aus " // Zugriff per Punkt
        << p.ort_ << "\n";
}

 
Person erzeuge(string name, int alter, string ort) { // R?ckgabetyp
    Person result{ name, alter, ort };
    return result;
}

int main() {
    Person otto{ "Otto", 30, "Kassel" }; // Initialisierung
    drucke(otto);   
    
    otto = erzeuge("Otto", 30, "Kassel");     // R?ckgabe speichern
    drucke(otto);

    std::vector<Person> listPersons;
    listPersons.push_back(otto);

    auto tene = erzeuge("Tene", 43, "Vincent");
    listPersons.push_back(tene);
    
    auto kieran = erzeuge("Kieran", 1, "Ezekiel");
    listPersons.push_back(kieran);


    auto alan = erzeuge("Alan", 5, "Tene");
    listPersons.push_back(alan);



    auto comparePerson = [](Person person01, Person person02) {      
        return person01 < person02;
    };




    std::sort(listPersons.begin(), listPersons.end(), comparePerson);
    std::cout   << std::endl;
    std::cout << "--------------" << std::endl;
    for (auto & elem : listPersons)
    {
        std::cout << elem.name_ << ", age: " << elem.alter_ <<  std::endl;
    }
    std::cout << "--------------" << std::endl;



    // Aufruf als Einheit
    //= Otto (45) aus Kassel
}


