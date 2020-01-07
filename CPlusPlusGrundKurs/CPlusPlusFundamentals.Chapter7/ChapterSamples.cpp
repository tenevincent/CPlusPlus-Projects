#include "ChapterSamples.h"

void ChapterSamples::ShowListing1() {
    int var = 0;
    int& rvar = var;
    var = 123;
    std::cout << "var  : " << var << " address: " << &var << '\n';
    std::cout << "rvar : " << rvar << " address: " << &rvar << '\n';
    rvar = 456;
    std::cout << "var  : " << var << " address: " << &var << '\n';
    std::cout << "rvar : " << rvar << " address: " << &rvar << std::endl;
}



void ChapterSamples::ShowReferenzListing2() {
    int var = 1234;
    int& rvar = var;
    std::cout << "&var  : " << &var << '\n';
    std::cout << "&rvar : " << &rvar << '\n';
}

void ChapterSamples::ShowReferenzListing3() {
    int var1 = 100;
    int var2 = 200;
    int& rvar = var1;
    std::cout << rvar << std::endl;
    // entspricht: var1 = var2;
    rvar = var2;
    std::cout << rvar << std::endl;

}


void ChapterSamples::ShowNullPointerListing4() {

    int ival = 123;
    int* iptr = nullptr;
    iptr = &ival;
    std::cout << "Adresse von ival  : " << &ival << '\n';
    std::cout << "iptr verweist auf : " << iptr << '\n';
    std::cout << "Adresse von iptr  : " << &iptr << '\n';
}


void ChapterSamples::ShowNullPointerListing5() {

    int ival = 123;
    int* iptr = nullptr;
    iptr = &ival;
    std::cout << "*iptr: " << *iptr << std::endl;
    std::cout << "ival : " << ival << std::endl;
    // ival indirekt einen neuen Wert zuweisen
    *iptr = 256;
    std::cout << "*iptr: " << *iptr << std::endl;
    std::cout << "ival : " << ival << std::endl;
}


void ChapterSamples::ShowNullPointerListing6() {

    int ival1 = 123, ival2 = 0;
    int* iptr = nullptr;
    // iptr die Adresse von ival1 übergeben
    iptr = &ival1;
    // ival2 erhält indirekt den Wert ival1
    ival2 = *iptr;
    std::cout << "ival1 : " << ival1 << std::endl;  // 123
    std::cout << "ival2 : " << ival2 << std::endl;  // 123
}
